/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_PARSER_TAB_H_INCLUDED
# define YY_YY_BUILD_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "src/parser/parser.y"

#include "ast.h"
#include "semantic.h"

#line 54 "build/parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORT = 259,                  /* IMPORT  */
    FUNC = 260,                    /* FUNC  */
    RETURN = 261,                  /* RETURN  */
    VAR = 262,                     /* VAR  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    FOR = 265,                     /* FOR  */
    INT_TYPE = 266,                /* INT_TYPE  */
    FLOAT64_TYPE = 267,            /* FLOAT64_TYPE  */
    STRING_TYPE = 268,             /* STRING_TYPE  */
    BOOL_TYPE = 269,               /* BOOL_TYPE  */
    VOID_TYPE = 270,               /* VOID_TYPE  */
    TRUE = 271,                    /* TRUE  */
    FALSE = 272,                   /* FALSE  */
    STRUCT = 273,                  /* STRUCT  */
    INTERFACE = 274,               /* INTERFACE  */
    MAP = 275,                     /* MAP  */
    SLICE = 276,                   /* SLICE  */
    CHAN = 277,                    /* CHAN  */
    TYPE = 278,                    /* TYPE  */
    IDENTIFIER = 279,              /* IDENTIFIER  */
    STRING = 280,                  /* STRING  */
    INTEGER = 281,                 /* INTEGER  */
    INCREMENT = 282,               /* INCREMENT  */
    FLOAT = 283,                   /* FLOAT  */
    PLUS = 284,                    /* PLUS  */
    MINUS = 285,                   /* MINUS  */
    MULTIPLY = 286,                /* MULTIPLY  */
    DIVIDE = 287,                  /* DIVIDE  */
    ASSIGN = 288,                  /* ASSIGN  */
    EQ = 289,                      /* EQ  */
    NEQ = 290,                     /* NEQ  */
    LT = 291,                      /* LT  */
    GT = 292,                      /* GT  */
    LTE = 293,                     /* LTE  */
    GTE = 294,                     /* GTE  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    LSHIFT = 297,                  /* LSHIFT  */
    RSHIFT = 298,                  /* RSHIFT  */
    BITAND = 299,                  /* BITAND  */
    BITOR = 300,                   /* BITOR  */
    BITXOR = 301,                  /* BITXOR  */
    LPAREN = 302,                  /* LPAREN  */
    RPAREN = 303,                  /* RPAREN  */
    LBRACE = 304,                  /* LBRACE  */
    RBRACE = 305,                  /* RBRACE  */
    SEMICOLON = 306,               /* SEMICOLON  */
    COMMA = 307,                   /* COMMA  */
    DOT = 308,                     /* DOT  */
    DECLARE_ASSIGN = 309           /* DECLARE_ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "src/parser/parser.y"

    int num;
    double fnum;
    char* str;
    ASTNode* node;

#line 132 "build/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD_PARSER_TAB_H_INCLUDED  */
