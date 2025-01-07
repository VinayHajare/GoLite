/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser/parser.y"

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

#line 92 "build/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORT = 4,                     /* IMPORT  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_INT_TYPE = 11,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT64_TYPE = 12,              /* FLOAT64_TYPE  */
  YYSYMBOL_STRING_TYPE = 13,               /* STRING_TYPE  */
  YYSYMBOL_BOOL_TYPE = 14,                 /* BOOL_TYPE  */
  YYSYMBOL_TRUE = 15,                      /* TRUE  */
  YYSYMBOL_FALSE = 16,                     /* FALSE  */
  YYSYMBOL_STRUCT = 17,                    /* STRUCT  */
  YYSYMBOL_INTERFACE = 18,                 /* INTERFACE  */
  YYSYMBOL_MAP = 19,                       /* MAP  */
  YYSYMBOL_SLICE = 20,                     /* SLICE  */
  YYSYMBOL_CHAN = 21,                      /* CHAN  */
  YYSYMBOL_TYPE = 22,                      /* TYPE  */
  YYSYMBOL_IDENTIFIER = 23,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 26,                     /* FLOAT  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 29,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 30,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 31,                    /* ASSIGN  */
  YYSYMBOL_EQ = 32,                        /* EQ  */
  YYSYMBOL_NEQ = 33,                       /* NEQ  */
  YYSYMBOL_LT = 34,                        /* LT  */
  YYSYMBOL_GT = 35,                        /* GT  */
  YYSYMBOL_LTE = 36,                       /* LTE  */
  YYSYMBOL_GTE = 37,                       /* GTE  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_LSHIFT = 40,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 41,                    /* RSHIFT  */
  YYSYMBOL_BITAND = 42,                    /* BITAND  */
  YYSYMBOL_BITOR = 43,                     /* BITOR  */
  YYSYMBOL_BITXOR = 44,                    /* BITXOR  */
  YYSYMBOL_LPAREN = 45,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 46,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 47,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 48,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 49,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 50,                     /* COMMA  */
  YYSYMBOL_DOT = 51,                       /* DOT  */
  YYSYMBOL_DECLARE_ASSIGN = 52,            /* DECLARE_ASSIGN  */
  YYSYMBOL_INCREMENT = 53,                 /* INCREMENT  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_imports = 56,                   /* imports  */
  YYSYMBOL_type_decls = 57,                /* type_decls  */
  YYSYMBOL_field_decls = 58,               /* field_decls  */
  YYSYMBOL_method_decls = 59,              /* method_decls  */
  YYSYMBOL_type = 60,                      /* type  */
  YYSYMBOL_functions = 61,                 /* functions  */
  YYSYMBOL_receiver = 62,                  /* receiver  */
  YYSYMBOL_return_type = 63,               /* return_type  */
  YYSYMBOL_parameters = 64,                /* parameters  */
  YYSYMBOL_statements = 65,                /* statements  */
  YYSYMBOL_arguments = 66,                 /* arguments  */
  YYSYMBOL_expression = 67                 /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   370

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    56,    58,    62,    64,    66,    70,    72,
      75,    77,    82,    83,    84,    85,    86,    87,    88,    89,
      92,    94,    98,   100,   104,   106,   109,   111,   112,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   137,
     139,   140,   144,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   166,   168,   170,   172,   174,   176,   178,
     180,   182,   184,   186,   188,   190,   192,   194
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PACKAGE", "IMPORT",
  "FUNC", "RETURN", "VAR", "IF", "ELSE", "FOR", "INT_TYPE", "FLOAT64_TYPE",
  "STRING_TYPE", "BOOL_TYPE", "TRUE", "FALSE", "STRUCT", "INTERFACE",
  "MAP", "SLICE", "CHAN", "TYPE", "IDENTIFIER", "STRING", "INTEGER",
  "FLOAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "ASSIGN", "EQ", "NEQ",
  "LT", "GT", "LTE", "GTE", "AND", "OR", "LSHIFT", "RSHIFT", "BITAND",
  "BITOR", "BITXOR", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "SEMICOLON",
  "COMMA", "DOT", "DECLARE_ASSIGN", "INCREMENT", "$accept", "program",
  "imports", "type_decls", "field_decls", "method_decls", "type",
  "functions", "receiver", "return_type", "parameters", "statements",
  "arguments", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -10,    15,   -19,  -143,    17,     2,    10,   -15,    13,
      33,    17,    39,    16,  -143,  -143,    21,    25,    37,    51,
      53,    55,    58,    44,   345,    14,    48,    36,    50,    74,
    -143,  -143,  -143,  -143,    52,    54,   345,  -143,    59,    61,
      74,    67,  -143,   345,    56,   345,    82,  -143,    53,    10,
      57,    10,   207,   345,   210,   345,  -143,  -143,   345,  -143,
      74,  -143,    60,   345,  -143,   215,  -143,    63,  -143,    55,
     229,   -14,   261,   -14,   269,   -28,   254,  -143,    63,  -143,
    -143,   258,  -143,  -143,  -143,   -14,   104,   345,   212,   268,
     -14,   287,    33,  -143,   298,   233,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,    63,   -24,    63,   -14,   122,   -23,  -143,
     277,  -143,    62,    62,   -25,   -25,   289,   289,   307,   307,
     307,   307,   271,   253,   311,   311,  -143,  -143,  -143,  -143,
     -14,    63,   279,   140,    63,   -14,   -14,   -14,   158,  -143,
     319,   -14,  -143,   176,   296,    85,   297,    63,   299,   194,
      63,   295,   -14,  -143,  -143,    63,   322,  -143,    63,  -143,
     304,   308,  -143,    63,   313,  -143,    63,   314,    63,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,     5,     0,     0,
      20,     3,     0,    22,     2,     4,     0,     0,     0,     0,
       8,    10,     0,     0,     0,     0,     0,     0,     0,    26,
      12,    13,    14,    15,     0,     0,     0,    19,     0,     0,
      26,     0,    23,     0,     0,     0,     0,    18,     8,     5,
       0,     5,    28,    24,     0,     0,     9,     6,     0,     7,
      26,    25,     0,     0,    17,     0,    27,     0,    16,    10,
       0,     0,     0,     0,     0,     0,     0,    11,     0,    45,
      46,    47,    44,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    20,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      48,    67,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    30,
       0,     0,     0,     0,     0,     0,    39,    39,     0,    31,
       0,     0,    33,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    39,    49,    32,     0,     0,    34,     0,    41,
       0,     0,    35,     0,     0,    36,     0,     0,     0,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,   352,   -22,   321,   301,    22,   275,  -143,  -143,
     -36,   -78,  -142,   -57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     7,    10,    25,    27,    38,    14,    19,    62,
      44,    76,   154,   155
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    79,    80,    90,    50,   156,     1,   140,   145,    81,
      82,    83,    84,     3,    86,     4,    88,   110,   111,   112,
     169,     6,   146,    91,    66,   141,     8,    57,    95,    59,
       5,    85,     9,   117,    11,   139,    12,   142,    13,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    16,    17,    47,   143,
      22,    18,    39,   149,    70,    52,   152,    54,    20,    71,
      72,    73,    21,    74,    23,    61,    24,    64,    26,   164,
      65,    28,   167,   148,    41,    68,    75,   170,   153,    29,
     172,    98,    99,    40,   159,   175,    42,    43,   177,    45,
     179,    46,    53,    58,   110,   111,   112,    67,    48,   114,
      49,   -29,    96,    97,    98,    99,    51,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      55,    96,    97,    98,    99,   162,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    96,
      97,    98,    99,   113,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    96,    97,    98,
      99,   144,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    96,    97,    98,    99,   151,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    96,    97,    98,    99,   157,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    96,    97,    98,    99,   160,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    96,
      97,    98,    99,   166,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    60,    63,   115,
      96,    97,    98,    99,    69,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    78,   121,
      96,    97,    98,    99,    87,   100,   101,   102,   103,   104,
     105,   106,    89,   108,   109,   110,   111,   112,    96,    97,
      98,    99,    92,   100,   101,   102,   103,   104,   105,    94,
     118,   108,   109,   110,   111,   112,    96,    97,    98,    99,
     116,   120,   147,   102,   103,   104,   105,   150,   158,   108,
     109,   110,   111,   112,    96,    97,    98,    99,    96,    97,
      98,    99,   161,   163,   168,   171,   165,   108,   109,   110,
     111,   112,   173,   110,   111,   112,    30,    31,    32,    33,
     176,   174,   178,    15,    34,    35,    36,   119,    37,    56,
      77
};

static const yytype_uint8 yycheck[] =
{
      78,    15,    16,    31,    40,   147,     3,    31,    31,    23,
      24,    25,    26,    23,    71,     0,    73,    42,    43,    44,
     162,     4,    45,    51,    60,    49,    24,    49,    85,    51,
      49,    45,    22,    90,    49,   113,    23,   115,     5,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    17,    18,    36,   116,
      23,    45,    48,   141,     1,    43,   144,    45,    47,     6,
       7,     8,    47,    10,    23,    53,    23,    55,    23,   157,
      58,    23,   160,   140,    48,    63,    23,   165,   145,    45,
     168,    29,    30,    45,   151,   173,    46,    23,   176,    47,
     178,    47,    46,    46,    42,    43,    44,    47,    49,    87,
      49,    48,    27,    28,    29,    30,    49,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      48,    27,    28,    29,    30,    50,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    27,
      28,    29,    30,    49,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    27,    28,    29,
      30,    49,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    27,    28,    29,    30,    49,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    27,    28,    29,    30,    49,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    27,    28,    29,    30,    49,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    27,
      28,    29,    30,    49,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    50,    48,    47,
      27,    28,    29,    30,    49,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    49,    46,
      27,    28,    29,    30,    23,    32,    33,    34,    35,    36,
      37,    38,    23,    40,    41,    42,    43,    44,    27,    28,
      29,    30,    48,    32,    33,    34,    35,    36,    37,    51,
      23,    40,    41,    42,    43,    44,    27,    28,    29,    30,
      52,    23,    45,    34,    35,    36,    37,    48,     9,    40,
      41,    42,    43,    44,    27,    28,    29,    30,    27,    28,
      29,    30,    46,    46,    49,    23,    47,    40,    41,    42,
      43,    44,    48,    42,    43,    44,    11,    12,    13,    14,
      47,    53,    48,    11,    19,    20,    21,    92,    23,    48,
      69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    55,    23,     0,    49,     4,    56,    24,    22,
      57,    49,    23,     5,    61,    56,    17,    18,    45,    62,
      47,    47,    23,    23,    23,    58,    23,    59,    23,    45,
      11,    12,    13,    14,    19,    20,    21,    23,    60,    48,
      45,    48,    46,    23,    64,    47,    47,    60,    49,    49,
      64,    49,    60,    46,    60,    48,    58,    57,    46,    57,
      50,    60,    63,    48,    60,    60,    64,    47,    60,    49,
       1,     6,     7,     8,    10,    23,    65,    59,    49,    15,
      16,    23,    24,    25,    26,    45,    67,    23,    67,    23,
      31,    51,    48,    65,    51,    67,    27,    28,    29,    30,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    49,    60,    47,    52,    67,    23,    61,
      23,    46,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    65,
      31,    49,    65,    67,    49,    31,    45,    45,    67,    65,
      48,    49,    65,    67,    66,    67,    66,    49,     9,    67,
      49,    46,    50,    46,    65,    47,    49,    65,    49,    66,
      65,    23,    65,    48,    53,    65,    47,    65,    48,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     4,     0,     8,     8,     0,     4,
       0,     7,     1,     1,     1,     1,     5,     4,     2,     1,
       0,    11,     0,     4,     0,     1,     0,     4,     2,     0,
       4,     5,     7,     5,     7,     8,    10,    13,     3,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: PACKAGE IDENTIFIER SEMICOLON imports type_decls functions  */
#line 53 "src/parser/parser.y"
    { printf(COLOR_GREEN "PARSER: Program parsed successfully\n" COLOR_RESET); }
#line 1291 "build/parser.tab.c"
    break;

  case 4: /* imports: IMPORT STRING SEMICOLON imports  */
#line 59 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Import statement parsed\n" COLOR_RESET); }
#line 1297 "build/parser.tab.c"
    break;

  case 6: /* type_decls: TYPE IDENTIFIER STRUCT LBRACE field_decls RBRACE SEMICOLON type_decls  */
#line 65 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Struct declaration parsed\n" COLOR_RESET); }
#line 1303 "build/parser.tab.c"
    break;

  case 7: /* type_decls: TYPE IDENTIFIER INTERFACE LBRACE method_decls RBRACE SEMICOLON type_decls  */
#line 67 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Interface declaration parsed\n" COLOR_RESET); }
#line 1309 "build/parser.tab.c"
    break;

  case 11: /* method_decls: IDENTIFIER LPAREN parameters RPAREN type SEMICOLON method_decls  */
#line 78 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Method declaration parsed\n" COLOR_RESET); }
#line 1315 "build/parser.tab.c"
    break;

  case 21: /* functions: FUNC receiver IDENTIFIER LPAREN parameters RPAREN return_type LBRACE statements RBRACE functions  */
#line 95 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Function parsed\n" COLOR_RESET); }
#line 1321 "build/parser.tab.c"
    break;

  case 23: /* receiver: LPAREN IDENTIFIER IDENTIFIER RPAREN  */
#line 101 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Receiver parsed\n" COLOR_RESET); }
#line 1327 "build/parser.tab.c"
    break;

  case 30: /* statements: RETURN expression SEMICOLON statements  */
#line 118 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Return statement parsed\n" COLOR_RESET); }
#line 1333 "build/parser.tab.c"
    break;

  case 31: /* statements: VAR IDENTIFIER type SEMICOLON statements  */
#line 120 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Variable declaration parsed\n" COLOR_RESET); }
#line 1339 "build/parser.tab.c"
    break;

  case 32: /* statements: VAR IDENTIFIER type ASSIGN expression SEMICOLON statements  */
#line 122 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Variable declaration with assignment parsed\n" COLOR_RESET); }
#line 1345 "build/parser.tab.c"
    break;

  case 33: /* statements: IDENTIFIER ASSIGN expression SEMICOLON statements  */
#line 124 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Assignment statement parsed\n" COLOR_RESET); }
#line 1351 "build/parser.tab.c"
    break;

  case 34: /* statements: IDENTIFIER DOT IDENTIFIER ASSIGN expression SEMICOLON statements  */
#line 126 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Struct field assignment parsed\n" COLOR_RESET); }
#line 1357 "build/parser.tab.c"
    break;

  case 35: /* statements: IDENTIFIER DOT IDENTIFIER LPAREN arguments RPAREN SEMICOLON statements  */
#line 128 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Method call parsed\n" COLOR_RESET); }
#line 1363 "build/parser.tab.c"
    break;

  case 36: /* statements: IF expression LBRACE statements RBRACE ELSE LBRACE statements RBRACE statements  */
#line 130 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: If-else statement parsed\n" COLOR_RESET); }
#line 1369 "build/parser.tab.c"
    break;

  case 37: /* statements: FOR IDENTIFIER DECLARE_ASSIGN expression SEMICOLON expression SEMICOLON IDENTIFIER INCREMENT LBRACE statements RBRACE statements  */
#line 132 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: For loop parsed\n" COLOR_RESET); }
#line 1375 "build/parser.tab.c"
    break;

  case 38: /* statements: error SEMICOLON statements  */
#line 134 "src/parser/parser.y"
    { printf(COLOR_RED "PARSER: Error recovery\n" COLOR_RESET); }
#line 1381 "build/parser.tab.c"
    break;

  case 42: /* expression: INTEGER  */
#line 145 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Integer expression parsed\n" COLOR_RESET); }
#line 1387 "build/parser.tab.c"
    break;

  case 43: /* expression: FLOAT  */
#line 147 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Float expression parsed\n" COLOR_RESET); }
#line 1393 "build/parser.tab.c"
    break;

  case 44: /* expression: STRING  */
#line 149 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: String expression parsed\n" COLOR_RESET); }
#line 1399 "build/parser.tab.c"
    break;

  case 45: /* expression: TRUE  */
#line 151 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: True expression parsed\n" COLOR_RESET); }
#line 1405 "build/parser.tab.c"
    break;

  case 46: /* expression: FALSE  */
#line 153 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: False expression parsed\n" COLOR_RESET); }
#line 1411 "build/parser.tab.c"
    break;

  case 47: /* expression: IDENTIFIER  */
#line 155 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Identifier expression parsed\n" COLOR_RESET); }
#line 1417 "build/parser.tab.c"
    break;

  case 48: /* expression: IDENTIFIER DOT IDENTIFIER  */
#line 157 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Struct field access parsed\n" COLOR_RESET); }
#line 1423 "build/parser.tab.c"
    break;

  case 49: /* expression: IDENTIFIER DOT IDENTIFIER LPAREN arguments RPAREN  */
#line 159 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Method call parsed\n" COLOR_RESET); }
#line 1429 "build/parser.tab.c"
    break;

  case 50: /* expression: expression PLUS expression  */
#line 161 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Addition expression parsed\n" COLOR_RESET); }
#line 1435 "build/parser.tab.c"
    break;

  case 51: /* expression: expression MINUS expression  */
#line 163 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Subtraction expression parsed\n" COLOR_RESET); }
#line 1441 "build/parser.tab.c"
    break;

  case 52: /* expression: expression MULTIPLY expression  */
#line 165 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Multiplication expression parsed\n" COLOR_RESET); }
#line 1447 "build/parser.tab.c"
    break;

  case 53: /* expression: expression DIVIDE expression  */
#line 167 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Division expression parsed\n" COLOR_RESET); }
#line 1453 "build/parser.tab.c"
    break;

  case 54: /* expression: expression EQ expression  */
#line 169 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Equality expression parsed\n" COLOR_RESET); }
#line 1459 "build/parser.tab.c"
    break;

  case 55: /* expression: expression NEQ expression  */
#line 171 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Inequality expression parsed\n" COLOR_RESET); }
#line 1465 "build/parser.tab.c"
    break;

  case 56: /* expression: expression LT expression  */
#line 173 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Less-than expression parsed\n" COLOR_RESET); }
#line 1471 "build/parser.tab.c"
    break;

  case 57: /* expression: expression GT expression  */
#line 175 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Greater-than expression parsed\n" COLOR_RESET); }
#line 1477 "build/parser.tab.c"
    break;

  case 58: /* expression: expression LTE expression  */
#line 177 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Less-than-or-equal expression parsed\n" COLOR_RESET); }
#line 1483 "build/parser.tab.c"
    break;

  case 59: /* expression: expression GTE expression  */
#line 179 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Greater-than-or-equal expression parsed\n" COLOR_RESET); }
#line 1489 "build/parser.tab.c"
    break;

  case 60: /* expression: expression AND expression  */
#line 181 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Logical AND expression parsed\n" COLOR_RESET); }
#line 1495 "build/parser.tab.c"
    break;

  case 61: /* expression: expression OR expression  */
#line 183 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Logical OR expression parsed\n" COLOR_RESET); }
#line 1501 "build/parser.tab.c"
    break;

  case 62: /* expression: expression LSHIFT expression  */
#line 185 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Left shift expression parsed\n" COLOR_RESET); }
#line 1507 "build/parser.tab.c"
    break;

  case 63: /* expression: expression RSHIFT expression  */
#line 187 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Right shift expression parsed\n" COLOR_RESET); }
#line 1513 "build/parser.tab.c"
    break;

  case 64: /* expression: expression BITAND expression  */
#line 189 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Bitwise AND expression parsed\n" COLOR_RESET); }
#line 1519 "build/parser.tab.c"
    break;

  case 65: /* expression: expression BITOR expression  */
#line 191 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Bitwise OR expression parsed\n" COLOR_RESET); }
#line 1525 "build/parser.tab.c"
    break;

  case 66: /* expression: expression BITXOR expression  */
#line 193 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Bitwise XOR expression parsed\n" COLOR_RESET); }
#line 1531 "build/parser.tab.c"
    break;

  case 67: /* expression: LPAREN expression RPAREN  */
#line 195 "src/parser/parser.y"
    { printf(COLOR_BLUE "PARSER: Parenthesized expression parsed\n" COLOR_RESET); }
#line 1537 "build/parser.tab.c"
    break;


#line 1541 "build/parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 198 "src/parser/parser.y"


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
