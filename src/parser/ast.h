#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// AST Node Types
typedef enum {
    NODE_PROGRAM,
    NODE_FUNCTION,
    NODE_IF,
    NODE_FOR,
    NODE_BINARY_OP,
    NODE_LITERAL,
    NODE_IDENTIFIER,
    NODE_CALL,
    NODE_STRUCT,
    NODE_INTERFACE,
    NODE_IMPORT,
    NODE_FIELD,
    NODE_METHOD,
    NODE_RECEIVER,
    NODE_PARAMETER,
    NODE_RETURN,
    NODE_VAR_DECL,
    NODE_VAR_DECL_ASSIGN,
    NODE_ASSIGN,
    NODE_STRUCT_FIELD_ASSIGN,
    NODE_METHOD_CALL,
    NODE_STRUCT_FIELD_ACCESS,
    NODE_MAP_TYPE,
    NODE_SLICE_TYPE,
    NODE_CHAN_TYPE,
    NODE_TYPE,
    NODE_ARGUMENT
} NodeType;

// AST Node Structure
typedef struct ASTNode {
    NodeType type;
    
    struct ASTNode* next; // Pointer to the next statement
    
    union {
        // Program Node
        struct {
            struct ASTNode* imports;
            struct ASTNode* type_decls;
            struct ASTNode* functions;
        } program;

        // Function Node
        struct {
            char* name;
            struct ASTNode* receiver;
            struct ASTNode* parameters;
            struct ASTNode* return_type; // Add return_type field
            struct ASTNode* body;
            struct ASTNode* next;
        } function;

        // If Node
        struct {
            struct ASTNode* condition;
            struct ASTNode* thenBranch;
            struct ASTNode* elseBranch;
        } ifStmt;

        // For Node
        struct {
            struct ASTNode* init;
            struct ASTNode* condition;
            struct ASTNode* update;
            struct ASTNode* body;
        } forStmt;

        // Binary Operation Node
        struct {
            char* op;
            struct ASTNode* left;
            struct ASTNode* right;
        } binaryOp;

        // Literal Node
        struct {
            char* type;
            union {
                int intValue;
                double floatValue;
                char* stringValue;
                bool boolValue;
            };
        } literal;

        // Identifier Node
        struct {
            char* name;
        } identifier;

        // Call Node
        struct {
            char* functionName;
            struct ASTNode* arguments;
        } call;

        // Struct Node
        struct {
            char* name;
            struct ASTNode* fields;
        } structDecl;

        // Interface Node
        struct {
            char* name;
            struct ASTNode* methods;
        } interfaceDecl;

        // Import Node
        struct {
            char* path;
            struct ASTNode* next;
        } import;

        // Field Node
        struct {
            char* name;
            struct ASTNode* type;
            struct ASTNode* next;
        } field;

        // Method Node
        struct {
            char* name;
            struct ASTNode* parameters;
            struct ASTNode* returnType;
            struct ASTNode* next;
        } method;

        // Receiver Node
        struct {
            char* name;
            char* type;
        } receiver;

        // Parameter Node
        struct {
            char* name;
            struct ASTNode* type;
            struct ASTNode* next;
        } parameter;

        // Return Node
        struct {
            struct ASTNode* expression;
            struct ASTNode* next;
        } returnStmt;

        // Variable Declaration Node
        struct {
            char* name;
            struct ASTNode* type;
            struct ASTNode* next;
        } varDecl;

        // Variable Declaration with Assignment Node
        struct {
            char* name;
            struct ASTNode* type;
            struct ASTNode* expression;
            struct ASTNode* next;
        } varDeclAssign;

        // Assignment Node
        struct {
            char* name;
            struct ASTNode* expression;
            struct ASTNode* next;
        } assign;

        // Struct Field Assignment Node
        struct {
            char* structName;
            char* fieldName;
            struct ASTNode* expression;
            struct ASTNode* next;
        } structFieldAssign;

        // Method Call Node
        struct {
            char* structName;
            char* methodName;
            struct ASTNode* arguments;
            struct ASTNode* next;
        } methodCall;

        // Struct Field Access Node
        struct {
            char* structName;
            char* fieldName;
        } structFieldAccess;

        // Map Type Node
        struct {
            struct ASTNode* keyType;
            struct ASTNode* valueType;
        } mapType;

        // Slice Type Node
        struct {
            struct ASTNode* elementType;
        } sliceType;

        // Channel Type Node
        struct {
            struct ASTNode* elementType;
        } chanType;

        // Type Node
        struct {
            char* name;
        } typeDecl;

        // Argument Node
        struct {
            struct ASTNode* expression;
            struct ASTNode* next;
        } argument;
    };
} ASTNode;

// Function Declarations
ASTNode* createProgramNode(ASTNode* imports, ASTNode* type_decls, ASTNode* functions);
ASTNode* createFunctionNode(char* name, ASTNode* receiver, ASTNode* parameters, ASTNode* return_type, ASTNode* body, ASTNode* next);
ASTNode* createIfNode(ASTNode* condition, ASTNode* thenBranch, ASTNode* elseBranch);
ASTNode* createForNode(ASTNode* init, ASTNode* condition, ASTNode* update, ASTNode* body);
ASTNode* createBinaryOpNode(char* op, ASTNode* left, ASTNode* right);
ASTNode* createLiteralNode(char* type, void* value);
ASTNode* createIdentifierNode(char* name);
ASTNode* createCallNode(char* functionName, ASTNode* arguments);
ASTNode* createStructNode(char* name, ASTNode* fields);
ASTNode* createInterfaceNode(char* name, ASTNode* methods);
ASTNode* createImportNode(char* path, ASTNode* next);
ASTNode* createFieldNode(char* name, ASTNode* type, ASTNode* next);
ASTNode* createMethodNode(char* name, ASTNode* parameters, ASTNode* returnType, ASTNode* next);
ASTNode* createReceiverNode(char* name, char* type);
ASTNode* createParameterNode(char* name, ASTNode* type, ASTNode* next);
ASTNode* createReturnNode(ASTNode* expression, ASTNode* next);
ASTNode* createVarDeclNode(char* name, ASTNode* type, ASTNode* next);
ASTNode* createVarDeclAssignNode(char* name, ASTNode* type, ASTNode* expression, ASTNode* next);
ASTNode* createAssignNode(char* name, ASTNode* expression, ASTNode* next);
ASTNode* createStructFieldAssignNode(char* structName, char* fieldName, ASTNode* expression, ASTNode* next);
ASTNode* createMethodCallNode(char* structName, char* methodName, ASTNode* arguments, ASTNode* next);
ASTNode* createStructFieldAccessNode(char* structName, char* fieldName);
ASTNode* createMapTypeNode(ASTNode* keyType, ASTNode* valueType);
ASTNode* createSliceTypeNode(ASTNode* elementType);
ASTNode* createChanTypeNode(ASTNode* elementType);
ASTNode* createTypeNode(char* type);
ASTNode* createArgumentNode(ASTNode* expression, ASTNode* next);

void printAST(ASTNode* node, int indent, int asJSON, const char* filename);

#endif // AST_H