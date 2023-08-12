#ifndef SYNTAX_H
#define SYNTAX_H

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
namespace Front {
    using std::string;
    using std::vector;
    using std::unordered_map;
    using std::shared_ptr;
    namespace Type {
        static constexpr int NONE =    0b000000000;
        static constexpr int INT =     0b000000001;
        static constexpr int FLOAT =   0b000000010;
        static constexpr int VOID =    0b000000100;
        static constexpr int ARRAY =   0b000001000;
        static constexpr int CONST =   0b000010000;
        static constexpr int GLOBAL =  0b000100000;
        static constexpr int BOOLEAN = 0b001000000;
        static constexpr int REAL =    0b010000000;
        static constexpr int PARA =    0b100000000;
        static constexpr int FUNC =   0b1000000000;
    };
    namespace Op {
        static constexpr int NONE =  0b00000000;
        static constexpr int CAL =   0b00000010;
        static constexpr int ADD =   0b00001010;
        static constexpr int SUB =   0b00010010;
        static constexpr int MUL =   0b00100010;
        static constexpr int DIV =   0b01000010;
        static constexpr int MOD =   0b10000010;
        static constexpr int BOP =   0b00000100;
        static constexpr int LT =    0b00001100;
        static constexpr int LEQ =   0b00010100;
        static constexpr int GT =    0b00100100;
        static constexpr int GEQ =   0b01000100;
        static constexpr int EQ =    0b10000100;
        static constexpr int NEQ =  0b100000100;
        static constexpr int AND = 0b1000000100;
        static constexpr int OR = 0b10000000100;
    };
    inline bool isArray(const int& type) {
        return (type & Type::ARRAY) != 0;
    }
    struct Value {
        // 定义 Value 结构体
        string data;
        int type;
        shared_ptr<vector<int>> params = nullptr;
        shared_ptr<vector<int>> dims = nullptr;
        Value() : data(), type(Type::NONE) {}
        Value(const string& d, int t) : data(d), type(t) {}
        Value(const string& d, int t, const vector<int>& dimensions) : data(d), type(t) {
            dims = std::make_shared<vector<int>>(dimensions);
        }
        int getType() const { return type & 0b00011; }
    };
    class SymbolTable {
    private:
        unordered_map<string, Value> symbols;
        shared_ptr<SymbolTable> parent;
        
    public:
        SymbolTable(shared_ptr<SymbolTable> parent = nullptr);
        void insert(const string& name, Value value);
        Value find(const string& name);
    };
}
namespace Front {
    class Stmt {
    public:
        Stmt() {}
        virtual string getName() {
            return {};
        }
        virtual void push_back(shared_ptr<Stmt> stmt) {}
        virtual void insert(shared_ptr<Stmt> stmt) {}
        virtual void setType(int type) {}
        virtual void analyze() {}
        virtual void astGen() const {}
    };
    // class ListStmt: public Stmt {
    // public:
    //     virtual string getName();
    //     void analyze() override;
    //     void astGen() const override;
    // };
    class VarStmt: public Stmt {
    public:
        VarStmt(string name): name(name), type(Type::NONE) {}
        VarStmt(string name, int type): name(name), type(type) {}
        void push_back(shared_ptr<Stmt> stmt) {
            values.push_back(stmt);
        }
        void insert(shared_ptr<Stmt> stmt) override {
            next.push_back(stmt);
        } 
        void setType(int type) {
            this->type = type;
        }
        string getName() override;
        void analyze() override;
        void astGen() const override;
    private:
        string name;
        int type;
        vector<shared_ptr<Stmt>> values; // 右值
        shared_ptr<Stmt> dims = nullptr; // 数组的维度
        shared_ptr<string> const_value = nullptr; // const value
        vector<shared_ptr<Stmt>> next;
    };
    class NullStmt: public Stmt {
    public:
        void analyze() override;
        void astGen() const override;
    };
    class ExprStmt: public Stmt {
    public:
        shared_ptr<string> const_value = nullptr; // const value
        void analyze() override;
        void astGen() const override;
    };
    class AssignStmt: public Stmt {
    public:
        AssignStmt(shared_ptr<Stmt> lval, shared_ptr<Stmt> rval) :
            lval(lval), rval(rval) {}
        void analyze() override;
        void astGen() const override;
    private:
        shared_ptr<Stmt> lval;
        shared_ptr<Stmt> rval;
    };
    class IfStmt : public Stmt {
    public:
        IfStmt(shared_ptr<Stmt> cond, shared_ptr<Stmt> true_block):
            cond(cond), true_block(true_block), false_block(nullptr) {}
        IfStmt(shared_ptr<Stmt> cond, shared_ptr<Stmt> true_block, shared_ptr<Stmt> false_block):
            cond(cond), true_block(true_block), false_block(false_block) {}
        void analyze() override;
        void astGen() const override;
    private:
        shared_ptr<Stmt> cond;
        shared_ptr<Stmt> true_block;
        shared_ptr<Stmt> false_block;
    };
    class WhileStmt : public Stmt {
    public:
        WhileStmt(shared_ptr<Stmt> cond, shared_ptr<Stmt> true_block):
            cond(cond), true_block(true_block) {}
        void analyze() override;
        void astGen() const override;
    private:
        shared_ptr<Stmt> cond;
        shared_ptr<Stmt> true_block;
    };
    class BreakStmt : public Stmt {
    public:
        void analyze() override;
        void astGen() const override;
    };
    class ContinueStmt : public Stmt {
    public:
        void analyze() override;
        void astGen() const override;
    };
    class ReturnStmt : public Stmt {
    public:
        ReturnStmt() : stmt(nullptr) {}
        ReturnStmt(shared_ptr<Stmt> stmt) : stmt(stmt) {}
        void analyze() override;
        void astGen() const override;
        shared_ptr<Stmt> stmt;
    };
    class BlockStmt: public Stmt {
    public:
        BlockStmt() : stmts(false) {}
        BlockStmt(shared_ptr<Stmt> stmt) {
            stmts.push_back(stmt);
        }
        BlockStmt(vector<shared_ptr<Stmt>> stmts): stmts(stmts) {}
        void push_back(shared_ptr<Stmt> stmt) {
            stmts.push_back(stmt);
        }
        void analyze() override;
        void astGen() const override;
        vector<shared_ptr<Stmt>> stmts;
    };
    class FuncCallStmt: public Stmt {
    public:
        string getName() override;
        void analyze() override;
        void astGen() const override;
    };
    class FuncDefStmt: public Stmt {
    public:
        FuncDefStmt(string name, int t, shared_ptr<Stmt> b): name(name), type(t), block(b) {}
        string getName() override;
        void analyze() override;
        void astGen() const override;
    private:
        string name;
        int type;
        vector<shared_ptr<Stmt>> params;
        shared_ptr<Stmt> block;
    };
    class CompUnit: public Stmt {
    public: 
        CompUnit(shared_ptr<Stmt> stmt): stmt(stmt) {}
        void push_back(shared_ptr<Stmt> unit) {
            units.push_back(unit);
        }
        void analyze();
        void astGen() const;
        shared_ptr<Stmt> stmt;
        vector<shared_ptr<Stmt>> units;
    };
}
#endif
