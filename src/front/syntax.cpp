#include "syntax.h"
#include <cassert>
#include <iostream>
using namespace std;
namespace Front {
    SymbolTable::SymbolTable(shared_ptr<SymbolTable> parent) : parent(parent) {}

    void SymbolTable::addSymbol(const string& name, Value value) {
        symbols[name] = value;
    }

    Value SymbolTable::findSymbol(const string& name) {
        if (symbols.count(name) > 0) {
            return symbols[name];
        } else if (parent != nullptr) {
            return parent->findSymbol(name);
        } else {
            // TODO:
            assert(false && "Symbol not found");
            return {};
        }
    }
}

namespace Front {
    string VarStmt::getName() {
        return name;
    }

    void VarStmt::analyze() {
        // Implementation for VarStmt's analyze()

    }

    void VarStmt::astGen() const {
        if (isArray(type)) {
            cout << "Single: {";
        } else {
            cout << "Array: {";
        }
        cout << "}";
    }

    void NullStmt::analyze() {
        // Implementation for NullStmt's analyze()
    }

    void NullStmt::astGen() const {
        // Implementation for NullStmt's astGen()
    }

    void ExprStmt::analyze() {
        // Implementation for ExprStmt's analyze()
    }

    void ExprStmt::astGen() const {
        // Implementation for ExprStmt's astGen()
    }
    void AssignStmt::analyze() {
        // Implementation for AssignStmt's analyze()
    }

    void AssignStmt::astGen() const {
        // Implementation for AssignStmt's astGen()
    }

    void IfStmt::analyze() {
        // Implementation for IfStmt's analyze()
    }

    void IfStmt::astGen() const {
        // Implementation for IfStmt's astGen()
    }

    void WhileStmt::analyze() {
        // Implementation for WhileStmt's analyze()
    }

    void WhileStmt::astGen() const {
        // Implementation for WhileStmt's astGen()
    }

    void BreakStmt::analyze() {
        // Implementation for BreakStmt's analyze()
    }

    void BreakStmt::astGen() const {
        // Implementation for BreakStmt's astGen()
    }

    void ContinueStmt::analyze() {
        // Implementation for ContinueStmt's analyze()
    }

    void ContinueStmt::astGen() const {
        // Implementation for ContinueStmt's astGen()
    }

    void ReturnStmt::analyze() {
        // Implementation for ReturnStmt's analyze()
    }

    void ReturnStmt::astGen() const {
        // Implementation for ReturnStmt's astGen()
    }

    void BlockStmt::analyze() {
        // Implementation for BlockStmt's analyze()
    }

    void BlockStmt::astGen() const {
        // Implementation for BlockStmt's astGen()
    }

    string FuncCallStmt::getName() {
        // Implementation for FuncCallStmt's getName()
        return {};
    }

    void FuncCallStmt::analyze() {
        // Implementation for FuncCallStmt's analyze()
    }

    void FuncCallStmt::astGen() const {
        // Implementation for FuncCallStmt's astGen()
    }

    string FuncDefStmt::getName() {
        // Implementation for FuncDefStmt's getName()
        return {};
    }

    void FuncDefStmt::analyze() {
        // Implementation for FuncDefStmt's analyze()
    }

    void FuncDefStmt::astGen() const {
        // Implementation for FuncDefStmt's astGen()
    }
    void CompUnit::analyze() {
        // 在此处实现analyze函数的代码
    }

    void CompUnit::astGen() const {
        // 在此处实现astGen函数的代码
    }
}