%code requires {
    #include "syntax.h"
    #include <iostream>
    #include <string>
    #include <cassert>
    #include <cstring>
    #include <memory>
}
%{
extern "C" {
    extern int yylex();
    extern void yyerror(const char* s);
}
%}
%union {
    Front::CompUnit* compUnit;
    Front::Stmt* stmt;
    std::string* data;
    std::string* name;
    int type;
    int op;
}
%token<name> IDENT 
%token<data> INT_CONST FLOAT_CONST
%token CONST INTT FLOATT COMMA SEMICOLON LBRACE RBRACE LBRACKET
%token RBRACKET LPAREN RPAREN ASSIGNN VOIDD IF ELSE
%token WHILE BREAK CONTINUE RETURN 
%token<op> ADDD SUBB MULL DIVV MODD GTT GEQQ LTT LEQQ EQQ NEQQ 
%token<op> ANDD ORR NOTT
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%type<compUnit> CompUnit
%type<stmt> Decl ConstDecl VarDecl
%type<stmt> VarDef ConstDef
%type<stmt> InitVal 
%type<stmt> Exp LOrExp LAndExp EqExp RelExp AddExp MulExp UnaryExp PrimaryExp 
%type<stmt> FuncCall
%type<stmt> LVal Number
%type<stmt> FuncDef
%type<stmt> FuncFParams
%type<stmt> FuncFParam
%type<stmt> FuncRParams
%type<stmt> Block BlockItems
%type<stmt> BlockItem
%type<stmt> Stmt
%type<stmt> IfStmt
%type<stmt> ReturnStmt
%type<stmt> WhileStmt
%type<stmt> BreakStmt
%type<stmt> ContinueStmt
%type<stmt> Cond
%type<type> BType
%type<op> AddOp MulOp UnaryOp RelOp

%start Program
%%
Program: CompUnit {
    $1->analyze();
    $1->astGen();
}
// 编译单元 CompUnit → [ CompUnit ] ( Decl | FuncDef )
CompUnit: CompUnit Decl { 
    std::shared_ptr<Front::Stmt> tmp($2);
    auto unit = std::make_shared<Front::CompUnit>(tmp);
    $$->push_back(unit);
}
    | CompUnit FuncDef {
    std::shared_ptr<Front::Stmt> tmp($2);
    auto unit = std::make_shared<Front::CompUnit>(tmp);
    $$->push_back(unit);
}
    | Decl {
    std::shared_ptr<Front::Stmt> unit($1);
    $$ = new Front::CompUnit(unit);
}
    | FuncDef {
    std::shared_ptr<Front::Stmt> unit($1);
    $$ = new Front::CompUnit(unit);
}
    ;
// 声明 Decl → ConstDecl | VarDecl
Decl: ConstDecl SEMICOLON { $$ = $1; }
    | VarDecl SEMICOLON { $$ = $1; }
    ;
// 常量声明 ConstDecl → 'const' BType ConstDef { ',' ConstDef } ';'
ConstDecl: CONST BType ConstDef {}
    | ConstDecl COMMA ConstDef {}
    ;
// 基本类型 BType → 'int' | 'float'
BType: INTT { $$ |= Front::Type::INT; }
    | FLOATT { $$ |= Front::Type::FLOAT; }
    ;
// 常数定义 ConstDef → Ident { '[' ConstExp ']' } '=' ConstInitVal
ConstDef: IDENT ASSIGNN ConstInitVal {}
    | IDENT ArrayOpt ASSIGNN ConstInitArray {}
    ;
ArrayOpt: LBRACKET ConstExp RBRACKET {}
    | ArrayOpt LBRACKET ConstExp RBRACKET {}
    ;

// 常量初值 ConstInitVal → ConstExp 
// | '{' [ ConstInitVal { ',' ConstInitVal } ] '}'
ConstInitVal: ConstExp {}
    ;
//     | ConstInitArray {}
//     ;
ConstInitArray: LBRACE RBRACE {}
    | LBRACE ConstArrayBody RBRACE {}
    ;
ConstArrayBody: ConstArrayBody COMMA ConstInitArray {}
    | ConstArrayBody COMMA ConstInitVal {}
    | ConstInitArray {}
    | ConstInitVal {}
    ;

// 变量声明 VarDecl → BType VarDef { ',' VarDef } ';'
VarDecl: BType VarDef { 
    $2->setType($1);
    $$ = $2;
}
    | VarDecl COMMA VarDef { std::shared_ptr<Front::Stmt> var($3); $$->insert(var); }
    ;
// 变量定义 VarDef → Ident { '[' ConstExp ']' }
// | Ident { '[' ConstExp ']' } '=' InitVal
VarDef: IDENT { $$ = new Front::VarStmt(*$1); }
    | IDENT ArrayOpt {}
    | IDENT ASSIGNN InitVal { auto var = new Front::VarStmt(*$1); std::shared_ptr<Front::Stmt> val($3); var->push_back(val); $$ = var; }
    | IDENT ArrayOpt InitArray {}
    ;
// 变量初值 InitVal → Exp | '{' [ InitVal { ',' InitVal } ] '}'
InitVal: Exp { $$ = $1; }
    ;
//     | InitArray {}
//     ;
InitArray: LBRACE RBRACE {}
    | LBRACE InitArrayBody RBRACE {}
    ;
InitArrayBody: InitArrayBody COMMA InitArray {}
    | InitArrayBody COMMA InitVal {}
    | InitArray {}
    | InitVal {}
    ;
// 函数定义 FuncDef → FuncType Ident '(' [FuncFParams] ')' Block
FuncDef: BType IDENT LPAREN FuncFParams RPAREN Block {
    int type = $1 | Front::Type::FUNC;
}
    | BType IDENT LPAREN RPAREN Block {
    int type = $1 | Front::Type::FUNC;
    std::string name(*$2);
    std::shared_ptr<Front::Stmt> block($5);
    $$ = new Front::FuncDefStmt(name, type, block);
}
    | VOIDD IDENT LPAREN FuncFParams RPAREN Block {
    int type = Front::Type::VOID | Front::Type::FUNC;

}
    | VOIDD IDENT LPAREN RPAREN Block {
    int type = Front::Type::VOID | Front::Type::FUNC;
    std::string name(*$2);
    std::shared_ptr<Front::Stmt> block($5);
    $$ = new Front::FuncDefStmt(name, type, block);
}
    ;
// 函数类型 FuncType → 'void' | 'int' | 'float'
// 函数形参表 FuncFParams → FuncFParam { ',' FuncFParam }
FuncFParams: FuncFParam COMMA FuncFParam {}
    | FuncFParam {}
    ;
// 函数形参 FuncFParam → BType Ident ['[' ']' { '[' Exp ']' }]
FuncFParam: BType IDENT {}
    | BType IDENT ArrayOpt {}
    ;
// 语句块 Block → '{' { BlockItem } '}'
Block: LBRACE BlockItems RBRACE { $$ = $2; }
    | LBRACE RBRACE { $$ = new Front::BlockStmt(); }
    ;
BlockItems: BlockItem {
    std::shared_ptr<Front::Stmt> stmt($1);
    $$ = new Front::BlockStmt(stmt);
}
    | BlockItems BlockItem {
    std::shared_ptr<Front::Stmt> stmt($2);
    $1->push_back(stmt); 
    $$ = $1;
}
// 语句块项 BlockItem → Decl | Stmt
BlockItem: Decl { $$ = $1; }
    | Stmt { $$ = $1; }
    ;
// 语句 Stmt → LVal '=' Exp ';' | [Exp] ';' | Block
// | 'if' '( Cond ')' Stmt [ 'else' Stmt ]
// | 'while' '(' Cond ')' Stmt
// | 'break' ';' | 'continue' ';'
// | 'return' [Exp] ';'
Stmt: LVal ASSIGNN Exp SEMICOLON { 
    std::shared_ptr<Front::Stmt> lval($1);
    std::shared_ptr<Front::Stmt> rval($3);
    $$ = new Front::AssignStmt(lval, rval);
}
    | Exp SEMICOLON { $$ = $1; }
    | SEMICOLON { $$ = nullptr; }
    | Block { $$ = $1; }
    | IfStmt { $$ = $1; }
    | WhileStmt { $$ = $1; }
    | BreakStmt { $$ = $1; }
    | ContinueStmt { $$ = $1; }
    | ReturnStmt { $$ = $1; }
    ;
IfStmt: IF LPAREN Cond RPAREN Stmt %prec LOWER_THAN_ELSE {
    std::shared_ptr<Front::Stmt> cond($3);
    std::shared_ptr<Front::Stmt> true_block($5);
    $$ = new Front::IfStmt(cond, true_block);
}
    | IF LPAREN Cond RPAREN Stmt ELSE Stmt {
    std::shared_ptr<Front::Stmt> cond($3);
    std::shared_ptr<Front::Stmt> true_block($5);
    std::shared_ptr<Front::Stmt> false_block($7);
    $$ = new Front::IfStmt(cond, true_block, false_block);
}
    ;
WhileStmt: WHILE LPAREN Cond RPAREN Stmt {
    std::shared_ptr<Front::Stmt> cond($3);
    std::shared_ptr<Front::Stmt> true_block($5);
    $$ = new Front::WhileStmt(cond, true_block);
}
    ;
BreakStmt: BREAK SEMICOLON { $$ = new Front::BreakStmt(); }
    ;
ContinueStmt: CONTINUE SEMICOLON { $$ = new Front::ContinueStmt(); }
    ;
ReturnStmt: RETURN Exp SEMICOLON {
    std::shared_ptr<Front::Stmt> stmt($2);
    $$ = new Front::ReturnStmt(stmt);
}
    | RETURN SEMICOLON {
    $$ = new Front::ReturnStmt();
}
    ;
// 表达式 Exp → AddExp 注：SysY 表达式是 int/float 型表达式
Exp: AddExp { $$ = $1; }
    ;
// 条件表达式 Cond → LOrExp
Cond: LOrExp { $$ = $1; }
    ;
// 左值表达式 LVal → Ident {'[' Exp ']'}
LVal: IDENT { std::string name(*$1); $$ = new Front::VarStmt(name); }
    | LVal LBRACKET Exp RBRACKET {

}
    ;
// 基本表达式 PrimaryExp → '(' Exp ')' | LVal | Number
PrimaryExp: LPAREN Exp RPAREN {}
    | LVal {}
    | Number {}
    ;
// 数值 Number → IntConst | FloatConst
Number: INT_CONST {}
    | FLOAT_CONST {}
    ;
// 一元表达式 UnaryExp → PrimaryExp | Ident '(' [FuncRParams] ')' 
// | UnaryOp UnaryExp
UnaryExp: PrimaryExp {}
    | FuncCall {}
    | UnaryOp UnaryExp {}
    ;
FuncCall: IDENT LPAREN FuncRParams RPAREN {}
    | IDENT LPAREN RPAREN {}
    ;
// 单目运算符 UnaryOp → '+' | '−' | '!' 注：'!'仅出现在条件表达式中
UnaryOp: ADDD { $$ = Front::Op::ADD; }
    | SUBB { $$ = Front::Op::SUB; }
    | NOTT {  }
    ;
// 函数实参表 FuncRParams → Exp { ',' Exp }
FuncRParams: Exp {}
    | FuncRParams COMMA Exp {}
// 乘除模表达式 MulExp → UnaryExp | MulExp ('*' | '/' | '%') UnaryExp
MulExp: UnaryExp {}
    | MulExp MulOp UnaryExp {}
    ;
MulOp: MULL { $$ = Front::Op::MUL; }
    | DIVV { $$ = Front::Op::DIV; }
    | MODD { $$ = Front::Op::MOD; }
    ;
// 加减表达式 AddExp → MulExp | AddExp ('+' | '−') MulExp
AddExp: MulExp {}
    | AddExp AddOp MulExp {}
    ;
AddOp: ADDD { $$ = Front::Op::ADD; }
    | SUBB { $$ = Front::Op::SUB; }
    ;
// 关系表达式 RelExp → AddExp | RelExp ('<' | '>' | '<=' | '>=') AddExp
RelExp: AddExp {}
    | RelExp RelOp AddExp {}
    ;
RelOp: GTT { $$ = Front::Op::GT; }
    | GEQQ { $$ = Front::Op::GEQ; }
    | LTT {  $$ = Front::Op::LT; }
    | LEQQ { $$ = Front::Op::LEQ; }
    ;
// 相等性表达式 EqExp → RelExp | EqExp ('==' | '!=') RelExp
EqExp: RelExp {}
    | EqExp EQQ RelExp {}
    | EqExp NEQQ RelExp {}
    ;
// 逻辑与表达式 LAndExp → EqExp | LAndExp '&&' EqExp
LAndExp: EqExp {}
    | LAndExp ANDD EqExp {}
    ;
// 逻辑或表达式 LOrExp → LAndExp | LOrExp '||' LAndExp
LOrExp: LAndExp {}
    | LOrExp ORR LAndExp {}
    ;
// 常量表达式 ConstExp → AddExp 注：使用的 Ident 必须是常量
ConstExp: AddExp {}
    ;
%%
void yyerror(const char* s) {
    assert(false && "语法分析错误");
}
int main() {
    FILE* fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("未找到文件，程序异常退出\n"); 
        return 0;
    }
    extern FILE* yyin;
    yyin = fp;
	yyparse(); 
    fclose(fp);
    return 0;
}