%{
#include "parser.tab.h" // Include parser header
#include <stdlib.h>
#include <string.h>

#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_RESET   "\x1b[0m"

extern FILE* yyin; // Declare yyin
extern int line_num; // Declare line_num
extern void yyerror(const char *s); // Declare yyerror

int line_num = 1; // Define line_num
%}

%%

\n              { line_num++; } // Increment line number but ignore newline
"//".*          ; // Skip single-line comments
"/*"([^*]|"*"+[^*/])*"*"+"/" ; // Skip multi-line comments


"package"       { printf(COLOR_YELLOW "LEXER: PACKAGE\n" COLOR_RESET); return PACKAGE; }
"import"        { printf(COLOR_YELLOW "LEXER: IMPORT\n" COLOR_RESET); return IMPORT; }
"func"          { printf(COLOR_YELLOW "LEXER: FUNC\n" COLOR_RESET); return FUNC; }
"return"        { printf(COLOR_YELLOW "LEXER: RETURN\n" COLOR_RESET); return RETURN; }
"var"           { printf(COLOR_YELLOW "LEXER: VAR\n" COLOR_RESET); return VAR; }
"if"            { printf(COLOR_YELLOW "LEXER: IF\n" COLOR_RESET); return IF; }
"else"          { printf(COLOR_YELLOW "LEXER: ELSE\n" COLOR_RESET); return ELSE; }
"for"           { printf(COLOR_YELLOW "LEXER: FOR\n" COLOR_RESET); return FOR; }
"int"           { printf(COLOR_YELLOW "LEXER: INT_TYPE\n" COLOR_RESET); return INT_TYPE; }
"float64"       { printf(COLOR_YELLOW "LEXER: FLOAT64_TYPE\n" COLOR_RESET); return FLOAT64_TYPE; }
"string"        { printf(COLOR_YELLOW "LEXER: STRING_TYPE\n" COLOR_RESET); return STRING_TYPE; }
"bool"          { printf(COLOR_YELLOW "LEXER: BOOL_TYPE\n" COLOR_RESET); return BOOL_TYPE; }
"true"          { printf(COLOR_YELLOW "LEXER: TRUE\n" COLOR_RESET); return TRUE; }
"false"         { printf(COLOR_YELLOW "LEXER: FALSE\n" COLOR_RESET); return FALSE; }
"struct"        { printf(COLOR_YELLOW "LEXER: STRUCT\n" COLOR_RESET); return STRUCT; }
"interface"     { printf(COLOR_YELLOW "LEXER: INTERFACE\n" COLOR_RESET); return INTERFACE; }
"type"          { printf(COLOR_YELLOW "LEXER: TYPE\n" COLOR_RESET); return TYPE; }
"map"           { printf(COLOR_YELLOW "LEXER: MAP\n" COLOR_RESET); return MAP; }
"slice"         { printf(COLOR_YELLOW "LEXER: SLICE\n" COLOR_RESET); return SLICE; }
"chan"          { printf(COLOR_YELLOW "LEXER: CHAN\n" COLOR_RESET); return CHAN; }


[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); printf(COLOR_YELLOW "LEXER: IDENTIFIER (%s)\n" COLOR_RESET, yytext); return IDENTIFIER; }


[0-9]+          { yylval.num = atoi(yytext); printf(COLOR_YELLOW "LEXER: INTEGER (%d)\n" COLOR_RESET, yylval.num); return INTEGER; }
[0-9]+"."[0-9]+ { yylval.fnum = atof(yytext); printf(COLOR_YELLOW "LEXER: FLOAT (%f)\n" COLOR_RESET, yylval.fnum); return FLOAT; }
\"([^"\\]|\\.)*\" { yylval.str = strdup(yytext); printf(COLOR_YELLOW "LEXER: STRING (%s)\n" COLOR_RESET, yytext); return STRING; }


"+"             { printf(COLOR_YELLOW "LEXER: PLUS\n" COLOR_RESET); return PLUS; }
"-"             { printf(COLOR_YELLOW "LEXER: MINUS\n" COLOR_RESET); return MINUS; }
"*"             { printf(COLOR_YELLOW "LEXER: MULTIPLY\n" COLOR_RESET); return MULTIPLY; }
"/"             { printf(COLOR_YELLOW "LEXER: DIVIDE\n" COLOR_RESET); return DIVIDE; }
"="             { printf(COLOR_YELLOW "LEXER: ASSIGN\n" COLOR_RESET); return ASSIGN; }
"=="            { printf(COLOR_YELLOW "LEXER: EQ\n" COLOR_RESET); return EQ; }
"!="            { printf(COLOR_YELLOW "LEXER: NEQ\n" COLOR_RESET); return NEQ; }
"<"             { printf(COLOR_YELLOW "LEXER: LT\n" COLOR_RESET); return LT; }
">"             { printf(COLOR_YELLOW "LEXER: GT\n" COLOR_RESET); return GT; }
"<="            { printf(COLOR_YELLOW "LEXER: LTE\n" COLOR_RESET); return LTE; }
">="            { printf(COLOR_YELLOW "LEXER: GTE\n" COLOR_RESET); return GTE; }
"&&"            { printf(COLOR_YELLOW "LEXER: AND\n" COLOR_RESET); return AND; }
"||"            { printf(COLOR_YELLOW "LEXER: OR\n" COLOR_RESET); return OR; }
"<<"            { printf(COLOR_YELLOW "LEXER: LSHIFT\n" COLOR_RESET); return LSHIFT; }
">>"            { printf(COLOR_YELLOW "LEXER: RSHIFT\n" COLOR_RESET); return RSHIFT; }
"&"             { printf(COLOR_YELLOW "LEXER: BITAND\n" COLOR_RESET); return BITAND; }
"|"             { printf(COLOR_YELLOW "LEXER: BITOR\n" COLOR_RESET); return BITOR; }
"^"             { printf(COLOR_YELLOW "LEXER: BITXOR\n" COLOR_RESET); return BITXOR; }
"("             { printf(COLOR_YELLOW "LEXER: LPAREN\n" COLOR_RESET); return LPAREN; }
")"             { printf(COLOR_YELLOW "LEXER: RPAREN\n" COLOR_RESET); return RPAREN; }
"{"             { printf(COLOR_YELLOW "LEXER: LBRACE\n" COLOR_RESET); return LBRACE; }
"}"             { printf(COLOR_YELLOW "LEXER: RBRACE\n" COLOR_RESET); return RBRACE; }
";"             { printf(COLOR_YELLOW "LEXER: SEMICOLON\n" COLOR_RESET); return SEMICOLON; }
","             { printf(COLOR_YELLOW "LEXER: COMMA\n" COLOR_RESET); return COMMA; }
"."             { printf(COLOR_YELLOW "LEXER: DOT\n" COLOR_RESET); return DOT; }
":="            { printf(COLOR_YELLOW "LEXER: DECLARE_ASSIGN\n" COLOR_RESET); return DECLARE_ASSIGN; }
"++"            { printf(COLOR_YELLOW "LEXER: INCREMENT\n" COLOR_RESET); return INCREMENT; }


[ \t]+          ; // Ignore spaces and tabs


.               { fprintf(stderr, "Unknown character at line %d: %s\n", line_num, yytext); }

%%

int yywrap() {
    return 1;
}