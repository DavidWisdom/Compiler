%{
#include "y.tab.h"
extern "C" {
    extern int yywrap(void);
    extern int yylex(void);
}
%}
%x COMMENT
Comment  \/\*(\*[^/]|[^*])*\*\/
Blank    ([ \f\r\t\v]+)
Ident    [a-zA-Z_][a-zA-Z0-9_]*
Dec      [1-9][0-9]*
Oct      0[0-7]*
Hex      0[xX][0-9a-fA-F]+
Float    \d+(\.\d+)?([eE][+-]?\d+)?
%%
{Comment} {}     
"//" { BEGIN COMMENT; }             
<COMMENT>\n { BEGIN INITIAL; }
<COMMENT>. {}
{Blank} {}       
"\n" {} 
"const"    return CONST;
"int"      return INTT;
"float"    return FLOATT;
","        return COMMA;
";"        return SEMICOLON;
"("        return LPAREN;
")"        return RPAREN;
"["        return LBRACKET;
"]"        return RBRACKET;
"{"        return LBRACE;
"}"        return RBRACE;
"void"     return VOID;
"if"       return IF;
"else"     return ELSE;
"while"    return WHILE;
"break"    return BREAK;
"continue" return CONTINUE;
"return"   return RETURN;
"+"        return ADDD;
"-"        return SUBB;
"*"        return MULL;
"/"        return DIVV;
"%"        return MODD;
">"        return GTT;
">="       return GEQQ;
"<"        return LTT;
"<="       return LEQQ;
"=="       return EQQ;
"="        return ASSIGNN;
"!="       return NEQQ;
"&&"       return ANDD;
"||"       return ORR;
"!"        return NOTT; 
{Hex} {
    return INT_CONST;
}
{Oct} {
    return INT_CONST;
}
{Dec} {
    yylval.data = yytext;
    return INT_CONST;
}
{Float} {
    return FLOAT_CONST;
}
{Ident} {
    yylval.name = yytext;
    return IDENT;
}
. { assert(false && "词法分析错误"); }
%%
int yywrap(void) { return 1; }