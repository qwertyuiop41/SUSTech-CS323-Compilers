/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ILLEGAL_TOKEN = 258,
     LOWER_ELSE = 259,
     ELSE = 260,
     TYPE = 261,
     INT = 262,
     CHAR = 263,
     FLOAT = 264,
     STRUCT = 265,
     ID = 266,
     IF = 267,
     WHILE = 268,
     RETURN = 269,
     COMMA = 270,
     ASSIGN = 271,
     OR = 272,
     AND = 273,
     EQ = 274,
     NE = 275,
     GE = 276,
     GT = 277,
     LE = 278,
     LT = 279,
     MINUS = 280,
     PLUS = 281,
     DIV = 282,
     MUL = 283,
     NOT = 284,
     RB = 285,
     LB = 286,
     RP = 287,
     LP = 288,
     DOT = 289,
     SEMI = 290,
     LC = 291,
     RC = 292,
     INVALID_CHAR = 293,
     WRONG_ID = 294,
     UNKNOWN_CHAR = 295,
     INVALID_NUMBER = 296
   };
#endif
/* Tokens.  */
#define ILLEGAL_TOKEN 258
#define LOWER_ELSE 259
#define ELSE 260
#define TYPE 261
#define INT 262
#define CHAR 263
#define FLOAT 264
#define STRUCT 265
#define ID 266
#define IF 267
#define WHILE 268
#define RETURN 269
#define COMMA 270
#define ASSIGN 271
#define OR 272
#define AND 273
#define EQ 274
#define NE 275
#define GE 276
#define GT 277
#define LE 278
#define LT 279
#define MINUS 280
#define PLUS 281
#define DIV 282
#define MUL 283
#define NOT 284
#define RB 285
#define LB 286
#define RP 287
#define LP 288
#define DOT 289
#define SEMI 290
#define LC 291
#define RC 292
#define INVALID_CHAR 293
#define WRONG_ID 294
#define UNKNOWN_CHAR 295
#define INVALID_NUMBER 296




/* Copy the first part of user declarations.  */
#line 1 "syntax.y"

    #include "tree.hpp"
    #include "lex.yy.c"
    #include <stdio.h>
    #include "stdlib.h"
    #include <string.h>
    #include "my_error.hpp"
    #include "semantic.hpp"
    #include "type.hpp"
    #include "inter_code.h"
    void yyerror(const char* s);
    int has_error=0;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "syntax.y"
{
    Node* node_ptr;
}
/* Line 193 of yacc.c.  */
#line 196 "syntax.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 221 "syntax.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    16,    20,    24,
      27,    29,    33,    35,    37,    43,    46,    52,    54,    59,
      64,    69,    73,    78,    82,    86,    88,    91,    96,    97,
     100,   103,   105,   109,   115,   123,   129,   132,   136,   142,
     148,   149,   152,   156,   160,   164,   166,   170,   172,   176,
     180,   184,   188,   192,   196,   200,   204,   208,   212,   216,
     220,   224,   228,   232,   235,   238,   243,   247,   252,   256,
     258,   260,   262,   264,   266,   268,   272,   276,   281,   285,
     290,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    -1,    45,    44,    -1,    47,
      46,    35,    -1,    47,    35,    -1,    47,    50,    53,    -1,
      47,    46,     1,    -1,    47,     1,    -1,    49,    -1,    49,
      15,    46,    -1,     6,    -1,    48,    -1,    10,    11,    36,
      56,    37,    -1,    10,    11,    -1,    10,    11,    36,    56,
       1,    -1,    11,    -1,    49,    31,     7,    30,    -1,    49,
      31,     7,     1,    -1,    11,    33,    51,    32,    -1,    11,
      33,    32,    -1,    11,    33,    51,     1,    -1,    11,    33,
       1,    -1,    52,    15,    51,    -1,    52,    -1,    47,    49,
      -1,    36,    56,    54,    37,    -1,    -1,    55,    54,    -1,
      60,    35,    -1,    53,    -1,    14,    60,    35,    -1,    12,
      33,    60,    32,    55,    -1,    12,    33,    60,    32,    55,
       5,    55,    -1,    13,    33,    60,    32,    55,    -1,    60,
       1,    -1,    14,    60,     1,    -1,    12,    33,    60,     1,
      55,    -1,    13,    33,    60,     1,    55,    -1,    -1,    57,
      56,    -1,    47,    58,    35,    -1,    47,    58,     1,    -1,
       1,    58,    35,    -1,    59,    -1,    59,    15,    58,    -1,
      49,    -1,    49,    16,    60,    -1,    60,    16,    60,    -1,
      60,    18,    60,    -1,    60,    17,    60,    -1,    60,    24,
      60,    -1,    60,    23,    60,    -1,    60,    22,    60,    -1,
      60,    21,    60,    -1,    60,    20,    60,    -1,    60,    19,
      60,    -1,    60,    26,    60,    -1,    60,    25,    60,    -1,
      60,    28,    60,    -1,    60,    27,    60,    -1,    33,    60,
      32,    -1,    25,    60,    -1,    29,    60,    -1,    11,    33,
      61,    32,    -1,    11,    33,    32,    -1,    60,    31,    60,
      30,    -1,    60,    34,    11,    -1,    11,    -1,     7,    -1,
       9,    -1,     8,    -1,     3,    -1,    41,    -1,    60,     3,
      60,    -1,    33,    60,     1,    -1,    11,    33,    61,     1,
      -1,    11,    33,     1,    -1,    60,    31,    60,     1,    -1,
      60,    15,    61,    -1,    60,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    56,    57,    60,    61,    62,    63,    64,
      67,    68,    72,    73,    76,    77,    78,    82,    83,    84,
      87,    88,    89,    90,    93,    94,    97,   101,   104,   105,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     121,   122,   125,   126,   127,   130,   131,   134,   135,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     173,   174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ILLEGAL_TOKEN", "LOWER_ELSE", "ELSE",
  "TYPE", "INT", "CHAR", "FLOAT", "STRUCT", "ID", "IF", "WHILE", "RETURN",
  "COMMA", "ASSIGN", "OR", "AND", "EQ", "NE", "GE", "GT", "LE", "LT",
  "MINUS", "PLUS", "DIV", "MUL", "NOT", "RB", "LB", "RP", "LP", "DOT",
  "SEMI", "LC", "RC", "INVALID_CHAR", "WRONG_ID", "UNKNOWN_CHAR",
  "INVALID_NUMBER", "$accept", "Program", "ExtDefList", "ExtDef",
  "ExtDecList", "Specifier", "StructSpecifier", "VarDec", "FunDec",
  "VarList", "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def",
  "DecList", "Dec", "Exp", "Args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    46,    47,    47,    48,    48,    48,    49,    49,    49,
      50,    50,    50,    50,    51,    51,    52,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     3,     2,
       1,     3,     1,     1,     5,     2,     5,     1,     4,     4,
       4,     3,     4,     3,     3,     1,     2,     4,     0,     2,
       2,     1,     3,     5,     7,     5,     2,     3,     5,     5,
       0,     2,     3,     3,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     4,     3,     4,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     3,     4,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    12,     0,     0,     2,     3,     0,    13,    15,     1,
       4,     9,    17,     6,     0,    10,     0,     0,     0,     8,
       5,     0,     0,     0,     7,     0,     0,     0,     0,    23,
      21,     0,     0,    25,    17,    11,     0,    28,    47,     0,
      45,     0,    16,    14,    41,    26,    22,    20,     0,    19,
      18,    73,    70,    72,    71,    69,     0,     0,     0,     0,
       0,     0,    74,    31,     0,    28,     0,     0,    44,     0,
      43,    42,    24,     0,     0,     0,     0,    63,    64,     0,
      27,    29,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      48,    46,    78,    66,    81,     0,     0,     0,    37,    32,
      76,    62,    75,    49,    51,    50,    57,    56,    55,    54,
      53,    52,    59,    58,    61,    60,     0,    68,     0,    77,
      65,     0,     0,     0,     0,    79,    67,    80,    38,    33,
      39,    35,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    14,    26,     7,    38,    16,    32,
      33,    63,    64,    65,    27,    28,    39,    40,    66,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
      14,   -59,     3,    21,   -59,    14,     7,   -59,    16,   -59,
     -59,   -59,     8,   -59,    10,    -9,    29,    65,    85,   -59,
     -59,    77,    69,    48,   -59,    77,    77,     6,    48,   -59,
     -59,    77,    12,    75,   -59,   -59,    39,   102,    32,    59,
      82,    11,   -59,   -59,   -59,    67,   -59,   -59,    14,   -59,
     -59,   -59,   -59,   -59,   -59,    66,    68,    73,   115,   115,
     115,   115,   -59,   -59,    70,   102,   144,   115,   -59,    77,
     -59,   -59,   -59,    71,   115,   115,   173,   105,    33,   202,
     -59,   -59,   -59,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,    97,   -59,
     350,   -59,   -59,   -59,   324,    18,   234,   266,   -59,   -59,
     -59,   -59,   376,   395,   412,   428,   124,   124,   124,   124,
     124,   124,   105,   105,    33,    33,   298,   -59,   115,   -59,
     -59,   102,   102,   102,   102,   -59,   -59,   -59,   -59,   114,
     -59,   -59,   102,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   116,   -59,    99,     5,   -59,    62,   -59,    80,
     -59,   109,    72,   107,    64,   -59,   -22,   -59,   -58,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -41
static const yytype_int16 yytable[] =
{
      76,    77,    78,    79,    41,     6,    21,    42,    11,   100,
       6,    19,    70,    46,     8,   104,   106,   107,    12,   129,
       1,     9,    22,    31,     2,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      49,    18,    13,    43,    47,    20,    71,   101,    67,    25,
     130,   -40,    17,    31,     1,   -40,   -40,   -40,     2,   -40,
     -40,   -40,   -40,    22,    97,    23,    25,    98,    15,    50,
     104,     1,   102,   -40,    51,     2,    36,   -40,    52,    53,
      54,   -40,    55,    15,   -40,   -40,    29,    37,    34,   -40,
      48,     1,    44,    45,    68,     2,    59,    69,    22,    73,
      60,    74,   -40,   103,    61,    51,    75,    80,   127,    52,
      53,    54,    62,    55,    56,    57,    58,    30,    51,   142,
      35,    10,    52,    53,    54,    24,    55,    59,    72,   137,
       0,    60,    95,    96,     0,    61,    97,    81,    23,    98,
      59,     0,     0,    62,    60,    82,     0,    83,    61,    93,
      94,    95,    96,     0,     0,    97,    62,     0,    98,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   108,    97,    83,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,     0,   110,    97,    83,     0,    98,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     0,     0,    97,   111,   131,    98,    83,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,     0,   143,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,     0,    97,   132,   133,    98,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,     0,    97,   134,   135,
      98,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    83,   136,    97,
       0,     0,    98,     0,     0,     0,     0,     0,     0,   128,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    83,     0,    97,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,   -41,
       0,    97,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,     0,    97,     0,     0,
      98,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,     0,     0,    97,     0,     0,    98,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     0,     0,    97,     0,     0,    98,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,     0,    97,
       0,     0,    98
};

static const yytype_int16 yycheck[] =
{
      58,    59,    60,    61,    26,     0,    15,     1,     1,    67,
       5,     1,     1,     1,    11,    73,    74,    75,    11,     1,
       6,     0,    31,    18,    10,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       1,    33,    35,    37,    32,    35,    35,    69,    16,     1,
      32,     3,    36,    48,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    31,    31,    36,     1,    34,     6,    30,
     128,     6,     1,    25,     3,    10,     7,    29,     7,     8,
       9,    33,    11,    21,    36,    37,     1,    23,    11,    41,
      15,     6,    28,    31,    35,    10,    25,    15,    31,    33,
      29,    33,    37,    32,    33,     3,    33,    37,    11,     7,
       8,     9,    41,    11,    12,    13,    14,    32,     3,     5,
      21,     5,     7,     8,     9,    16,    11,    25,    48,   128,
      -1,    29,    27,    28,    -1,    33,    31,    65,    36,    34,
      25,    -1,    -1,    41,    29,     1,    -1,     3,    33,    25,
      26,    27,    28,    -1,    -1,    31,    41,    -1,    34,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,     1,    31,     3,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,     1,    31,     3,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,     1,    34,     3,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,     1,    34,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,     1,
      34,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     3,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     3,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     3,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,    34,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    10,    43,    44,    45,    47,    48,    11,     0,
      44,     1,    11,    35,    46,    49,    50,    36,    33,     1,
      35,    15,    31,    36,    53,     1,    47,    56,    57,     1,
      32,    47,    51,    52,    11,    46,     7,    56,    49,    58,
      59,    58,     1,    37,    56,    49,     1,    32,    15,     1,
      30,     3,     7,     8,     9,    11,    12,    13,    14,    25,
      29,    33,    41,    53,    54,    55,    60,    16,    35,    15,
       1,    35,    51,    33,    33,    33,    60,    60,    60,    60,
      37,    54,     1,     3,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    31,    34,    35,
      60,    58,     1,    32,    60,    61,    60,    60,     1,    35,
       1,    32,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    11,    15,     1,
      32,     1,    32,     1,    32,     1,    30,    61,    55,    55,
      55,    55,     5,    55
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 53 "syntax.y"
    {(yyval.node_ptr) = new Node("Program", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr)); if(has_error == 0) {semantic_analyze((yyval.node_ptr));generate_ir((yyval.node_ptr));};}
    break;

  case 3:
#line 56 "syntax.y"
    {(yyval.node_ptr) = new Node("ExtDefList", 0, (yyloc).first_line);;}
    break;

  case 4:
#line 57 "syntax.y"
    {(yyval.node_ptr) = new Node("ExtDefList", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 5:
#line 60 "syntax.y"
    {(yyval.node_ptr)=new Node("ExtDef", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 6:
#line 61 "syntax.y"
    {(yyval.node_ptr)=new Node("ExtDef", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 7:
#line 62 "syntax.y"
    {(yyval.node_ptr)=new Node("ExtDef", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 8:
#line 63 "syntax.y"
    {my_error(MISS_SEMI, (yyloc).first_line); has_error=1;;}
    break;

  case 9:
#line 64 "syntax.y"
    {my_error(MISS_SEMI, (yyloc).first_line); has_error=1;;}
    break;

  case 10:
#line 67 "syntax.y"
    {(yyval.node_ptr)=new Node("ExtDecList", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 11:
#line 68 "syntax.y"
    {(yyval.node_ptr)=new Node("ExtDecList", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 12:
#line 72 "syntax.y"
    {(yyval.node_ptr)=new Node("Specifier", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 13:
#line 73 "syntax.y"
    {(yyval.node_ptr)=new Node("Specifier", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 14:
#line 76 "syntax.y"
    {(yyval.node_ptr)=new Node("StructSpecifier", 5, (yyloc).first_line, (yyvsp[(1) - (5)].node_ptr), (yyvsp[(2) - (5)].node_ptr), (yyvsp[(3) - (5)].node_ptr), (yyvsp[(4) - (5)].node_ptr), (yyvsp[(5) - (5)].node_ptr));;}
    break;

  case 15:
#line 77 "syntax.y"
    {(yyval.node_ptr)=new Node("StructSpecifier", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 16:
#line 78 "syntax.y"
    {my_error(MISS_RC, (yyloc).first_line); has_error=1;;}
    break;

  case 17:
#line 82 "syntax.y"
    {(yyval.node_ptr)=new Node("VarDec", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 18:
#line 83 "syntax.y"
    {(yyval.node_ptr)=new Node("VarDec", 4, (yyloc).first_line, (yyvsp[(1) - (4)].node_ptr), (yyvsp[(2) - (4)].node_ptr), (yyvsp[(3) - (4)].node_ptr), (yyvsp[(4) - (4)].node_ptr));;}
    break;

  case 19:
#line 84 "syntax.y"
    {my_error(MISS_RB, (yyloc).first_line); has_error=1;;}
    break;

  case 20:
#line 87 "syntax.y"
    {(yyval.node_ptr)=new Node("FunDec", 4, (yyloc).first_line, (yyvsp[(1) - (4)].node_ptr), (yyvsp[(2) - (4)].node_ptr), (yyvsp[(3) - (4)].node_ptr), (yyvsp[(4) - (4)].node_ptr));;}
    break;

  case 21:
#line 88 "syntax.y"
    {(yyval.node_ptr)=new Node("FunDec", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 22:
#line 89 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 23:
#line 90 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 24:
#line 93 "syntax.y"
    {(yyval.node_ptr)=new Node("VarList", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 25:
#line 94 "syntax.y"
    {(yyval.node_ptr)=new Node("VarList", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 26:
#line 97 "syntax.y"
    {(yyval.node_ptr)=new Node("ParamDec", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 27:
#line 101 "syntax.y"
    {(yyval.node_ptr)=new Node("CompSt", 4, (yyloc).first_line, (yyvsp[(1) - (4)].node_ptr), (yyvsp[(2) - (4)].node_ptr), (yyvsp[(3) - (4)].node_ptr), (yyvsp[(4) - (4)].node_ptr));;}
    break;

  case 28:
#line 104 "syntax.y"
    {(yyval.node_ptr) = new Node("StmtList", 0, (yyloc).first_line);;}
    break;

  case 29:
#line 105 "syntax.y"
    {(yyval.node_ptr)=new Node("StmtList", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 30:
#line 108 "syntax.y"
    {(yyval.node_ptr)=new Node("Stmt", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 31:
#line 109 "syntax.y"
    {(yyval.node_ptr)=new Node("Stmt", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 32:
#line 110 "syntax.y"
    {(yyval.node_ptr)=new Node("Stmt", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 33:
#line 111 "syntax.y"
    {(yyval.node_ptr)=new Node("Stmt", 5, (yyloc).first_line, (yyvsp[(1) - (5)].node_ptr), (yyvsp[(2) - (5)].node_ptr), (yyvsp[(3) - (5)].node_ptr), (yyvsp[(4) - (5)].node_ptr), (yyvsp[(5) - (5)].node_ptr));;}
    break;

  case 34:
#line 112 "syntax.y"
    {(yyval.node_ptr)=new Node("Stmt", 7, (yyloc).first_line, (yyvsp[(1) - (7)].node_ptr), (yyvsp[(2) - (7)].node_ptr), (yyvsp[(3) - (7)].node_ptr), (yyvsp[(4) - (7)].node_ptr), (yyvsp[(5) - (7)].node_ptr), (yyvsp[(6) - (7)].node_ptr), (yyvsp[(7) - (7)].node_ptr));;}
    break;

  case 35:
#line 113 "syntax.y"
    {(yyval.node_ptr)=new Node("Stmt", 5, (yyloc).first_line, (yyvsp[(1) - (5)].node_ptr), (yyvsp[(2) - (5)].node_ptr), (yyvsp[(3) - (5)].node_ptr), (yyvsp[(4) - (5)].node_ptr), (yyvsp[(5) - (5)].node_ptr));;}
    break;

  case 36:
#line 114 "syntax.y"
    {my_error(MISS_SEMI, (yyloc).first_line); has_error=1;;}
    break;

  case 37:
#line 115 "syntax.y"
    {my_error(MISS_SEMI, (yyloc).first_line); has_error=1;;}
    break;

  case 38:
#line 116 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 39:
#line 117 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 40:
#line 121 "syntax.y"
    {(yyval.node_ptr) = new Node("DefList", 0, (yyloc).first_line);;}
    break;

  case 41:
#line 122 "syntax.y"
    {(yyval.node_ptr)=new Node("DefList", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 42:
#line 125 "syntax.y"
    {(yyval.node_ptr)=new Node("Def", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 43:
#line 126 "syntax.y"
    {my_error(MISS_SEMI, (yyloc).first_line); has_error=1;;}
    break;

  case 44:
#line 127 "syntax.y"
    {my_error(MISS_SPEC, (yyloc).first_line +1); has_error=1;;}
    break;

  case 45:
#line 130 "syntax.y"
    {(yyval.node_ptr)=new Node("DecList", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 46:
#line 131 "syntax.y"
    {(yyval.node_ptr)=new Node("DecList", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 47:
#line 134 "syntax.y"
    {(yyval.node_ptr)=new Node("Dec", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 48:
#line 135 "syntax.y"
    {(yyval.node_ptr)=new Node("Dec", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 49:
#line 139 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 50:
#line 140 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 51:
#line 141 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 52:
#line 142 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 53:
#line 143 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 54:
#line 144 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 55:
#line 145 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 56:
#line 146 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 57:
#line 147 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 58:
#line 148 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 59:
#line 149 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 60:
#line 150 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 61:
#line 151 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 62:
#line 152 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 63:
#line 154 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 64:
#line 155 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 2, (yyloc).first_line, (yyvsp[(1) - (2)].node_ptr), (yyvsp[(2) - (2)].node_ptr));;}
    break;

  case 65:
#line 156 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 4, (yyloc).first_line, (yyvsp[(1) - (4)].node_ptr), (yyvsp[(2) - (4)].node_ptr), (yyvsp[(3) - (4)].node_ptr), (yyvsp[(4) - (4)].node_ptr));;}
    break;

  case 66:
#line 157 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 67:
#line 158 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 4, (yyloc).first_line, (yyvsp[(1) - (4)].node_ptr), (yyvsp[(2) - (4)].node_ptr), (yyvsp[(3) - (4)].node_ptr), (yyvsp[(4) - (4)].node_ptr));;}
    break;

  case 68:
#line 159 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 69:
#line 160 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 70:
#line 161 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 71:
#line 162 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 72:
#line 163 "syntax.y"
    {(yyval.node_ptr)=new Node("Exp", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;

  case 73:
#line 164 "syntax.y"
    {has_error = 1;;}
    break;

  case 74:
#line 165 "syntax.y"
    {has_error=1;;}
    break;

  case 75:
#line 166 "syntax.y"
    {has_error = 1;;}
    break;

  case 76:
#line 167 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 77:
#line 168 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 78:
#line 169 "syntax.y"
    {my_error(MISS_RP, (yyloc).first_line); has_error=1;;}
    break;

  case 79:
#line 170 "syntax.y"
    {my_error(MISS_RB, (yyloc).first_line); has_error=1;;}
    break;

  case 80:
#line 173 "syntax.y"
    {(yyval.node_ptr)=new Node("Args", 3, (yyloc).first_line, (yyvsp[(1) - (3)].node_ptr), (yyvsp[(2) - (3)].node_ptr), (yyvsp[(3) - (3)].node_ptr));;}
    break;

  case 81:
#line 174 "syntax.y"
    {(yyval.node_ptr)=new Node("Args", 1, (yyloc).first_line, (yyvsp[(1) - (1)].node_ptr));;}
    break;


/* Line 1267 of yacc.c.  */
#line 2036 "syntax.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 176 "syntax.y"


void yyerror(const char* s) {
}
int main(int argc, char **argv){
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        exit(-1);
    }
    else if(!(yyin = fopen(argv[1], "r"))) {
        perror(argv[1]);
        exit(-1);
    }
    yyparse();

    return 0;
}
