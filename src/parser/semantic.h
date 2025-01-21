#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Symbol types
typedef enum {
    SYMBOL_VARIABLE,
    SYMBOL_FUNCTION,
    SYMBOL_STRUCT,
    SYMBOL_INTERFACE,
    SYMBOL_TYPE
} SymbolType;

// Symbol table entry
typedef struct Symbol {
    char* name;          // Identifier name
    SymbolType type;     // Symbol type (variable, function, type)
    char* dataType;      // Data type (e.g., "int", "float", "string")
    struct Symbol* next; // Pointer to the next symbol in the table
    ASTNode* parameters; // Parameters for functions
    struct ASTNode* fields;      // For structs
} Symbol;

// Scope structure
typedef struct Scope {
    Symbol* symbols;     // List of symbols in this scope
    struct Scope* parent; // Pointer to the parent scope
} Scope;

// Semantic analysis functions
void semanticAnalyze(ASTNode* node);
void enterScope();
void exitScope();
Symbol* addSymbol(char* name, SymbolType type, char* dataType);
Symbol* findSymbol(char* name);
void checkTypes(ASTNode* node);

#endif // SEMANTIC_H
