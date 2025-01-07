%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ANSI color codes
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_RESET   "\x1b[0m"

extern int line_num; // Declare line_num from lexer
extern FILE* yyin;   // Declare yyin from lexer
extern int yylex();  // Declare yylex

// Define yyerror
void yyerror(const char *s) {
    fprintf(stderr, COLOR_RED "Error at line %d: %s\n" COLOR_RESET, line_num, s);
}
%}

// Union for semantic values
%union {
    int num;
    double fnum;
    char* str;
}

// Token declarations
%token <str> PACKAGE IMPORT FUNC RETURN VAR IF ELSE FOR
%token <str> INT_TYPE FLOAT64_TYPE STRING_TYPE BOOL_TYPE TRUE FALSE STRUCT INTERFACE MAP SLICE CHAN TYPE
%token <str> IDENTIFIER STRING
%token <num> INTEGER
%token <fnum> FLOAT
%token PLUS MINUS MULTIPLY DIVIDE ASSIGN EQ NEQ LT GT LTE GTE AND OR LSHIFT RSHIFT BITAND BITOR BITXOR
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA DOT DECLARE_ASSIGN INCREMENT

// Precedence and associativity
%left OR
%left AND
%left EQ NEQ
%left LT GT LTE GTE
%left LSHIFT RSHIFT
%left PLUS MINUS
%left MULTIPLY DIVIDE
%left BITAND BITOR BITXOR

%%

// Grammar rules
program:
    PACKAGE IDENTIFIER SEMICOLON imports type_decls functions
    { printf(COLOR_GREEN "PARSER: Program parsed successfully\n" COLOR_RESET); }
    ;

imports:
    /* empty */
    | IMPORT STRING SEMICOLON imports
    { printf(COLOR_BLUE "PARSER: Import statement parsed\n" COLOR_RESET); }
    ;

type_decls:
    /* empty */
    | TYPE IDENTIFIER STRUCT LBRACE field_decls RBRACE SEMICOLON type_decls
    { printf(COLOR_BLUE "PARSER: Struct declaration parsed\n" COLOR_RESET); }
    | TYPE IDENTIFIER INTERFACE LBRACE method_decls RBRACE SEMICOLON type_decls
    { printf(COLOR_BLUE "PARSER: Interface declaration parsed\n" COLOR_RESET); }
    ;

field_decls:
    /* empty */
    | IDENTIFIER type SEMICOLON field_decls
    ;

method_decls:
    /* empty */
    | IDENTIFIER LPAREN parameters RPAREN type SEMICOLON method_decls
    { printf(COLOR_BLUE "PARSER: Method declaration parsed\n" COLOR_RESET); }
    ;

type:
    INT_TYPE
    | FLOAT64_TYPE
    | STRING_TYPE
    | BOOL_TYPE
    | MAP LBRACE type RBRACE type
    | SLICE LBRACE RBRACE type
    | CHAN type
    | IDENTIFIER  // Allow IDENTIFIER as a type for structs and interfaces
    ;

functions:
    /* empty */
    | FUNC receiver IDENTIFIER LPAREN parameters RPAREN return_type LBRACE statements RBRACE functions
    { printf(COLOR_BLUE "PARSER: Function parsed\n" COLOR_RESET); }
    ;

receiver:
    /* empty */
    | LPAREN IDENTIFIER IDENTIFIER RPAREN
    { printf(COLOR_BLUE "PARSER: Receiver parsed\n" COLOR_RESET); }
    ;

return_type:
    /* empty */
    | type
    ;

parameters:
    /* empty */
    | IDENTIFIER type COMMA parameters
    | IDENTIFIER type
    ;

statements:
    /* empty */
    | RETURN expression SEMICOLON statements
    { printf(COLOR_BLUE "PARSER: Return statement parsed\n" COLOR_RESET); }
    | VAR IDENTIFIER type SEMICOLON statements
    { printf(COLOR_BLUE "PARSER: Variable declaration parsed\n" COLOR_RESET); }
    | VAR IDENTIFIER type ASSIGN expression SEMICOLON statements
    { printf(COLOR_BLUE "PARSER: Variable declaration with assignment parsed\n" COLOR_RESET); }
    | IDENTIFIER ASSIGN expression SEMICOLON statements
    { printf(COLOR_BLUE "PARSER: Assignment statement parsed\n" COLOR_RESET); }
    | IDENTIFIER DOT IDENTIFIER ASSIGN expression SEMICOLON statements
    { printf(COLOR_BLUE "PARSER: Struct field assignment parsed\n" COLOR_RESET); }
    | IDENTIFIER DOT IDENTIFIER LPAREN arguments RPAREN SEMICOLON statements
    { printf(COLOR_BLUE "PARSER: Method call parsed\n" COLOR_RESET); }
    | IF expression LBRACE statements RBRACE ELSE LBRACE statements RBRACE statements
    { printf(COLOR_BLUE "PARSER: If-else statement parsed\n" COLOR_RESET); }
    | FOR IDENTIFIER DECLARE_ASSIGN expression SEMICOLON expression SEMICOLON IDENTIFIER INCREMENT LBRACE statements RBRACE statements
    { printf(COLOR_BLUE "PARSER: For loop parsed\n" COLOR_RESET); }
    | error SEMICOLON statements
    { printf(COLOR_RED "PARSER: Error recovery\n" COLOR_RESET); }
    ;

arguments:
    /* empty */
    | expression
    | expression COMMA arguments
    ;

expression:
    INTEGER
    { printf(COLOR_BLUE "PARSER: Integer expression parsed\n" COLOR_RESET); }
    | FLOAT
    { printf(COLOR_BLUE "PARSER: Float expression parsed\n" COLOR_RESET); }
    | STRING
    { printf(COLOR_BLUE "PARSER: String expression parsed\n" COLOR_RESET); }
    | TRUE
    { printf(COLOR_BLUE "PARSER: True expression parsed\n" COLOR_RESET); }
    | FALSE
    { printf(COLOR_BLUE "PARSER: False expression parsed\n" COLOR_RESET); }
    | IDENTIFIER
    { printf(COLOR_BLUE "PARSER: Identifier expression parsed\n" COLOR_RESET); }
    | IDENTIFIER DOT IDENTIFIER
    { printf(COLOR_BLUE "PARSER: Struct field access parsed\n" COLOR_RESET); }
    | IDENTIFIER DOT IDENTIFIER LPAREN arguments RPAREN
    { printf(COLOR_BLUE "PARSER: Method call parsed\n" COLOR_RESET); }
    | expression PLUS expression
    { printf(COLOR_BLUE "PARSER: Addition expression parsed\n" COLOR_RESET); }
    | expression MINUS expression
    { printf(COLOR_BLUE "PARSER: Subtraction expression parsed\n" COLOR_RESET); }
    | expression MULTIPLY expression
    { printf(COLOR_BLUE "PARSER: Multiplication expression parsed\n" COLOR_RESET); }
    | expression DIVIDE expression
    { printf(COLOR_BLUE "PARSER: Division expression parsed\n" COLOR_RESET); }
    | expression EQ expression
    { printf(COLOR_BLUE "PARSER: Equality expression parsed\n" COLOR_RESET); }
    | expression NEQ expression
    { printf(COLOR_BLUE "PARSER: Inequality expression parsed\n" COLOR_RESET); }
    | expression LT expression
    { printf(COLOR_BLUE "PARSER: Less-than expression parsed\n" COLOR_RESET); }
    | expression GT expression
    { printf(COLOR_BLUE "PARSER: Greater-than expression parsed\n" COLOR_RESET); }
    | expression LTE expression
    { printf(COLOR_BLUE "PARSER: Less-than-or-equal expression parsed\n" COLOR_RESET); }
    | expression GTE expression
    { printf(COLOR_BLUE "PARSER: Greater-than-or-equal expression parsed\n" COLOR_RESET); }
    | expression AND expression
    { printf(COLOR_BLUE "PARSER: Logical AND expression parsed\n" COLOR_RESET); }
    | expression OR expression
    { printf(COLOR_BLUE "PARSER: Logical OR expression parsed\n" COLOR_RESET); }
    | expression LSHIFT expression
    { printf(COLOR_BLUE "PARSER: Left shift expression parsed\n" COLOR_RESET); }
    | expression RSHIFT expression
    { printf(COLOR_BLUE "PARSER: Right shift expression parsed\n" COLOR_RESET); }
    | expression BITAND expression
    { printf(COLOR_BLUE "PARSER: Bitwise AND expression parsed\n" COLOR_RESET); }
    | expression BITOR expression
    { printf(COLOR_BLUE "PARSER: Bitwise OR expression parsed\n" COLOR_RESET); }
    | expression BITXOR expression
    { printf(COLOR_BLUE "PARSER: Bitwise XOR expression parsed\n" COLOR_RESET); }
    | LPAREN expression RPAREN
    { printf(COLOR_BLUE "PARSER: Parenthesized expression parsed\n" COLOR_RESET); }
    ;

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Error opening file");
            return 1;
        }
        yyin = file;
    }
    yyparse();
    return 0;
}
