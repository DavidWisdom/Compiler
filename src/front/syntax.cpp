#include "syntax.h"
#include <cassert>
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
