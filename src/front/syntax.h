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
    enum Type {
        INT = 0b0001,
        FLOAT = 0b0010,
        ARRAY = 0b0100,
        CONST = 0b1000,
        GLOBAL = 0b10000
    };
    struct Value {
        // 定义 Value 结构体
        string data;
        Type type;
        shared_ptr<vector<int>> dims = nullptr;
        Value(const string& d, Type t) : data(d), type(t) {}
        Value(const string& d, Type t, const vector<int>& dimensions) : data(d), type(t) {
            dims = std::make_shared<vector<int>>(dimensions);
        }
        bool isInt() const { return (type & INT) != 0; }
        bool isFloat() const { return (type & FLOAT) != 0; }
        bool isArray() const { return (type & ARRAY) != 0; }
        bool isConst() const { return (type & CONST) != 0; }
        bool isGlobal() const { return (type & GLOBAL) != 0; }
    };
    class SymbolTable {
    private:
        unordered_map<string, Value> symbols;
        shared_ptr<SymbolTable> parent;
        
    public:
        SymbolTable(shared_ptr<SymbolTable> parent = nullptr);
        void addSymbol(const string& name, Value value);
        Value findSymbol(const string& name);
    };
}

#endif
