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
#line 1 "syntax.y"

    #include "tree.hpp"
    #include "lex.yy.c"
    #include <stdio.h>
    #include "stdlib.h"
    #include <string.h>
    #include "my_error.hpp"
    void yyerror(const char* s);
    int has_error=0;

#line 82 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ILLEGAL_TOKEN = 3,              /* ILLEGAL_TOKEN  */
  YYSYMBOL_LOWER_THAN_ELSE = 4,            /* LOWER_THAN_ELSE  */
  YYSYMBOL_ELSE = 5,                       /* ELSE  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_FLOAT = 9,                      /* FLOAT  */
  YYSYMBOL_STRUCT = 10,                    /* STRUCT  */
  YYSYMBOL_ID = 11,                        /* ID  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_COMMA = 16,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_LT = 20,                        /* LT  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_GE = 23,                        /* GE  */
  YYSYMBOL_NE = 24,                        /* NE  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_PLUS = 26,                      /* PLUS  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_MUL = 28,                       /* MUL  */
  YYSYMBOL_DIV = 29,                       /* DIV  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_LP = 31,                        /* LP  */
  YYSYMBOL_RP = 32,                        /* RP  */
  YYSYMBOL_LB = 33,                        /* LB  */
  YYSYMBOL_RB = 34,                        /* RB  */
  YYSYMBOL_DOT = 35,                       /* DOT  */
  YYSYMBOL_SEMI = 36,                      /* SEMI  */
  YYSYMBOL_LC = 37,                        /* LC  */
  YYSYMBOL_RC = 38,                        /* RC  */
  YYSYMBOL_INVALID_CHAR = 39,              /* INVALID_CHAR  */
  YYSYMBOL_WRONG_ID = 40,                  /* WRONG_ID  */
  YYSYMBOL_UNKNOWN_CHAR = 41,              /* UNKNOWN_CHAR  */
  YYSYMBOL_INVALID_NUMBER = 42,            /* INVALID_NUMBER  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_Program = 44,                   /* Program  */
  YYSYMBOL_ExtDefList = 45,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 46,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 47,                /* ExtDecList  */
  YYSYMBOL_Specifier = 48,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 49,           /* StructSpecifier  */
  YYSYMBOL_VarDec = 50,                    /* VarDec  */
  YYSYMBOL_FunDec = 51,                    /* FunDec  */
  YYSYMBOL_VarList = 52,                   /* VarList  */
  YYSYMBOL_ParamDec = 53,                  /* ParamDec  */
  YYSYMBOL_CompSt = 54,                    /* CompSt  */
  YYSYMBOL_StmtList = 55,                  /* StmtList  */
  YYSYMBOL_Stmt = 56,                      /* Stmt  */
  YYSYMBOL_DefList = 57,                   /* DefList  */
  YYSYMBOL_Def = 58,                       /* Def  */
  YYSYMBOL_DecList = 59,                   /* DecList  */
  YYSYMBOL_Dec = 60,                       /* Dec  */
  YYSYMBOL_Exp = 61,                       /* Exp  */
  YYSYMBOL_Args = 62                       /* Args  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   703

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    65,    68,    74,    78,    82,    86,    91,
      96,   101,   106,   113,   117,   124,   128,   134,   138,   146,
     150,   154,   160,   164,   168,   173,   180,   184,   190,   194,
     203,   212,   215,   221,   225,   229,   233,   237,   241,   245,
     249,   254,   258,   262,   266,   270,   274,   282,   285,   291,
     295,   300,   306,   310,   316,   320,   327,   329,   331,   333,
     335,   337,   339,   341,   343,   345,   347,   349,   351,   354,
     356,   358,   361,   364,   367,   370,   372,   374,   376,   378,
     380,   384,   388,   392,   397,   401,   406,   414,   418
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
  "\"end of file\"", "error", "\"invalid token\"", "ILLEGAL_TOKEN",
  "LOWER_THAN_ELSE", "ELSE", "TYPE", "INT", "CHAR", "FLOAT", "STRUCT",
  "ID", "IF", "WHILE", "RETURN", "FOR", "COMMA", "ASSIGN", "OR", "AND",
  "LT", "LE", "GT", "GE", "NE", "EQ", "PLUS", "MINUS", "MUL", "DIV", "NOT",
  "LP", "RP", "LB", "RB", "DOT", "SEMI", "LC", "RC", "INVALID_CHAR",
  "WRONG_ID", "UNKNOWN_CHAR", "INVALID_NUMBER", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "VarDec", "FunDec", "VarList", "ParamDec", "CompSt", "StmtList", "Stmt",
  "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-63)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-48)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     228,    -6,   -63,    -4,    11,   -63,   228,    17,   -63,    21,
     -63,    51,    62,    39,    61,   -63,   -63,   -63,   -63,    12,
      39,    93,   -63,   111,   109,    55,   -63,    73,   -63,   -63,
     -63,   111,   -63,   111,    28,   107,   -63,   -63,    23,   111,
     111,   106,    55,    86,    94,    94,   -63,   -63,   154,   -63,
     -63,    79,    92,   119,    14,   -63,   -63,   -63,   -63,   113,
       0,    58,   131,    70,   131,   131,   131,   -63,   -63,   108,
     106,   346,   -63,   -63,   111,   -63,   131,   -63,   111,   -63,
     -63,    99,   131,   131,   131,   131,   162,   131,   131,   171,
      40,   191,   -63,   -63,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   134,
     -63,   589,   -63,   -63,   -63,   481,    48,   508,   224,   535,
     257,   -63,   -63,   373,   400,   -63,   -63,   616,   635,   652,
     668,   204,   204,   204,   204,   204,   204,   171,   171,    40,
      40,   290,   -63,   131,   -63,   -63,   106,   106,   106,   106,
     106,   106,   131,   131,   -63,   -63,   -63,   -63,   -63,   151,
     -63,   -63,   -63,   427,   454,   106,   131,   131,   -63,   562,
     319,   106,   106,   106,   -63,   -63,   -63
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    15,     0,     0,     2,     0,     0,    16,    19,
      11,     0,    13,     0,    18,     1,     4,     9,     6,     0,
       0,     0,    10,     0,     0,     0,    12,     0,     8,     5,
       7,    25,    23,     0,     0,    27,    19,    14,     0,     0,
       0,    31,     0,     0,    29,    28,    24,    22,     0,    21,
      20,    54,     0,    52,     0,    80,    77,    79,    78,    76,
       0,     0,     0,     0,     0,     0,     0,    81,    34,     0,
      31,     0,    48,    17,     0,    26,     0,    51,     0,    50,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      71,     0,    30,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    55,    53,    85,    73,    88,     0,     0,     0,     0,
       0,    40,    35,     0,     0,    83,    69,    82,    56,    58,
      57,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    75,     0,    84,    72,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    74,    87,    42,    41,    36,
      44,    43,    38,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,    45,    46,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   153,   -63,    65,     6,   -63,   -23,   150,   118,
     -63,    64,    97,     3,   105,   -63,   -31,   -63,   -62,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    11,    40,     8,    12,    13,    34,
      35,    68,    69,    70,    41,    42,    52,    53,    71,   116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    82,    89,    90,    91,     9,     7,    14,    44,    54,
      45,    15,     7,    28,   111,    79,    51,    51,    17,   115,
     117,   118,   119,   120,    49,   123,   124,    33,     9,    46,
      10,    83,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   112,    29,   144,
      80,    44,    21,    18,    33,    51,    39,    50,   -47,    84,
      47,     2,   -47,   -47,   -47,     3,   -47,   -47,   -47,   -47,
     -47,    87,    19,   108,    39,   109,    25,    26,    23,     2,
     145,   115,   -47,     3,    30,   -47,   -47,    22,    37,    85,
     163,   164,   -47,   -47,    31,    24,    76,   -47,    27,     2,
     113,    88,    55,     3,   169,   170,    56,    57,    58,    55,
      59,   -47,    24,    56,    57,    58,    38,    59,    60,    61,
      62,    63,    36,    48,    73,    32,    64,    24,    77,    65,
      66,   114,    43,    64,    55,    78,    65,    66,    56,    57,
      58,    67,    59,    25,    81,   142,    92,    72,    67,   157,
     158,   159,   160,   161,   162,    74,   165,    20,    64,    16,
       2,    65,    66,   121,     3,    94,    75,    93,   168,   156,
       0,     0,     0,    67,   174,   175,   176,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   125,     0,    94,   108,     0,   109,   122,   106,
     107,     0,     0,     0,   108,     0,   109,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,     0,   126,   108,   147,   109,    94,    -3,     1,
     104,   105,   106,   107,     2,     0,     0,   108,     3,   109,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,     0,   148,   108,   150,   109,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,     0,   151,
     108,   154,   109,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     172,     0,    94,   108,   155,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    94,
       0,   173,   108,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    94,     0,     0,   108,
       0,   109,   110,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    94,     0,     0,   108,     0,   109,   152,
       0,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      94,     0,     0,   108,     0,   109,   153,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    94,     0,     0,
     108,     0,   109,   166,     0,     0,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    94,     0,     0,   108,     0,   109,
     167,     0,     0,     0,     0,     0,     0,   143,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    94,     0,     0,   108,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    94,     0,
     146,   108,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    94,     0,   149,   108,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    94,     0,   171,   108,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   -48,
       0,     0,   108,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,     0,     0,     0,   108,
       0,   109,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,     0,   108,     0,
     109,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     0,     0,     0,   108,     0,   109,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,   108,     0,   109
};

static const yytype_int16 yycheck[] =
{
      62,     1,    64,    65,    66,    11,     0,    11,    31,    40,
      33,     0,     6,     1,    76,     1,    39,    40,     1,    81,
      82,    83,    84,    85,     1,    87,    88,    21,    11,     1,
      36,    31,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    78,    36,     1,
      36,    74,    31,    36,    48,    78,     1,    34,     3,     1,
      32,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     1,     7,    33,     1,    35,    37,    13,    16,     6,
      32,   143,    27,    10,    20,    30,    31,    36,    23,    31,
     152,   153,    37,    38,     1,    33,    17,    42,    37,     6,
       1,    31,     3,    10,   166,   167,     7,     8,     9,     3,
      11,    38,    33,     7,     8,     9,     7,    11,    12,    13,
      14,    15,    11,    16,    38,    32,    27,    33,    36,    30,
      31,    32,    27,    27,     3,    16,    30,    31,     7,     8,
       9,    42,    11,    37,    31,    11,    38,    42,    42,   146,
     147,   148,   149,   150,   151,     1,     5,     7,    27,     6,
       6,    30,    31,     1,    10,     3,    48,    70,   165,   143,
      -1,    -1,    -1,    42,   171,   172,   173,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     1,    -1,     3,    33,    -1,    35,    36,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,     1,    35,     3,     0,     1,
      26,    27,    28,    29,     6,    -1,    -1,    33,    10,    35,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,     1,    35,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,     1,    35,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       1,    -1,     3,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     3,
      -1,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     3,    -1,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     3,    -1,    -1,    33,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       3,    -1,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     3,    -1,    -1,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     3,    -1,    -1,    33,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     3,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     3,    -1,
      32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     3,    -1,    32,    33,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     3,    -1,    32,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     3,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,    10,    44,    45,    46,    48,    49,    11,
      36,    47,    50,    51,    11,     0,    45,     1,    36,    47,
      51,    31,    36,    16,    33,    37,    54,    37,     1,    36,
      54,     1,    32,    48,    52,    53,    11,    47,     7,     1,
      48,    57,    58,    57,    50,    50,     1,    32,    16,     1,
      34,    50,    59,    60,    59,     3,     7,     8,     9,    11,
      12,    13,    14,    15,    27,    30,    31,    42,    54,    55,
      56,    61,    57,    38,     1,    52,    17,    36,    16,     1,
      36,    31,     1,    31,     1,    31,    61,     1,    31,    61,
      61,    61,    38,    55,     3,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    33,    35,
      36,    61,    59,     1,    32,    61,    62,    61,    61,    61,
      61,     1,    36,    61,    61,     1,    32,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    11,    16,     1,    32,    32,     1,    32,    32,
       1,    32,    36,    36,     1,    34,    62,    56,    56,    56,
      56,    56,    56,    61,    61,     5,    36,    36,    56,    61,
      61,    32,     1,    32,    56,    56,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    50,    51,    51,    51,    51,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     3,     2,
       3,     2,     3,     1,     3,     1,     1,     5,     2,     1,
       4,     4,     4,     3,     4,     3,     3,     1,     2,     2,
       4,     0,     2,     2,     1,     3,     5,     7,     5,     9,
       3,     5,     5,     5,     5,     9,     9,     0,     2,     3,
       3,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     3,     4,     3,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ExtDefList  */
#line 55 "syntax.y"
    {
        /*@$.first_line is to get the starting line number of the current convention symbol*/
        (yyval.node_ptr) = new Node(NONTERMINAL, "Program", 1, (yyloc).first_line, (yyvsp[0].node_ptr)); 
        if(has_error == 0) {
            printTree((yyval.node_ptr), 0);
        }
    }
#line 1467 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 65 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "ExtDefList", 0, (yyloc).first_line);
    }
#line 1475 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 69 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "ExtDefList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1483 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 75 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1491 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 79 "syntax.y"
    {   
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1499 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 83 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1507 "syntax.tab.c"
    break;

  case 8: /* ExtDef: Specifier ExtDecList error  */
#line 87 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1516 "syntax.tab.c"
    break;

  case 9: /* ExtDef: Specifier error  */
#line 92 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1525 "syntax.tab.c"
    break;

  case 10: /* ExtDef: error ExtDecList SEMI  */
#line 97 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1534 "syntax.tab.c"
    break;

  case 11: /* ExtDef: error SEMI  */
#line 102 "syntax.y"
    {   
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1543 "syntax.tab.c"
    break;

  case 12: /* ExtDef: error FunDec CompSt  */
#line 107 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1552 "syntax.tab.c"
    break;

  case 13: /* ExtDecList: VarDec  */
#line 114 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDecList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1560 "syntax.tab.c"
    break;

  case 14: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 118 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDecList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1568 "syntax.tab.c"
    break;

  case 15: /* Specifier: TYPE  */
#line 125 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Specifier", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1576 "syntax.tab.c"
    break;

  case 16: /* Specifier: StructSpecifier  */
#line 129 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Specifier", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1584 "syntax.tab.c"
    break;

  case 17: /* StructSpecifier: STRUCT ID LC DefList RC  */
#line 135 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StructSpecifier", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1592 "syntax.tab.c"
    break;

  case 18: /* StructSpecifier: STRUCT ID  */
#line 139 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StructSpecifier", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1600 "syntax.tab.c"
    break;

  case 19: /* VarDec: ID  */
#line 147 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarDec", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1608 "syntax.tab.c"
    break;

  case 20: /* VarDec: VarDec LB INT RB  */
#line 151 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarDec", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1616 "syntax.tab.c"
    break;

  case 21: /* VarDec: VarDec LB INT error  */
#line 154 "syntax.y"
                          {
        my_error(MISS_BRACKET, (yyloc).first_line,']');
        has_error=1;
    }
#line 1625 "syntax.tab.c"
    break;

  case 22: /* FunDec: ID LP VarList RP  */
#line 161 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "FunDec", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1633 "syntax.tab.c"
    break;

  case 23: /* FunDec: ID LP RP  */
#line 165 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "FunDec", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1641 "syntax.tab.c"
    break;

  case 24: /* FunDec: ID LP VarList error  */
#line 169 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 1650 "syntax.tab.c"
    break;

  case 25: /* FunDec: ID LP error  */
#line 174 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 1659 "syntax.tab.c"
    break;

  case 26: /* VarList: ParamDec COMMA VarList  */
#line 181 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1667 "syntax.tab.c"
    break;

  case 27: /* VarList: ParamDec  */
#line 185 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1675 "syntax.tab.c"
    break;

  case 28: /* ParamDec: Specifier VarDec  */
#line 191 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ParamDec", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1683 "syntax.tab.c"
    break;

  case 29: /* ParamDec: error VarDec  */
#line 195 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1692 "syntax.tab.c"
    break;

  case 30: /* CompSt: LC DefList StmtList RC  */
#line 204 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "CompSt", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1700 "syntax.tab.c"
    break;

  case 31: /* StmtList: %empty  */
#line 212 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "StmtList", 0, (yyloc).first_line);
    }
#line 1708 "syntax.tab.c"
    break;

  case 32: /* StmtList: Stmt StmtList  */
#line 216 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StmtList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1716 "syntax.tab.c"
    break;

  case 33: /* Stmt: Exp SEMI  */
#line 222 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1724 "syntax.tab.c"
    break;

  case 34: /* Stmt: CompSt  */
#line 226 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1732 "syntax.tab.c"
    break;

  case 35: /* Stmt: RETURN Exp SEMI  */
#line 230 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1740 "syntax.tab.c"
    break;

  case 36: /* Stmt: IF LP Exp RP Stmt  */
#line 234 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1748 "syntax.tab.c"
    break;

  case 37: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 238 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 7, (yyloc).first_line, (yyvsp[-6].node_ptr), (yyvsp[-5].node_ptr), (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1756 "syntax.tab.c"
    break;

  case 38: /* Stmt: WHILE LP Exp RP Stmt  */
#line 242 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1764 "syntax.tab.c"
    break;

  case 39: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp RP Stmt  */
#line 246 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 9, (yyloc).first_line, (yyvsp[-8].node_ptr), (yyvsp[-7].node_ptr), (yyvsp[-6].node_ptr), (yyvsp[-5].node_ptr), (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1772 "syntax.tab.c"
    break;

  case 40: /* Stmt: RETURN Exp error  */
#line 250 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1781 "syntax.tab.c"
    break;

  case 41: /* Stmt: IF LP Exp error Stmt  */
#line 255 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1789 "syntax.tab.c"
    break;

  case 42: /* Stmt: IF error Exp RP Stmt  */
#line 259 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1797 "syntax.tab.c"
    break;

  case 43: /* Stmt: WHILE LP Exp error Stmt  */
#line 263 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1805 "syntax.tab.c"
    break;

  case 44: /* Stmt: WHILE error Exp RP Stmt  */
#line 267 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1813 "syntax.tab.c"
    break;

  case 45: /* Stmt: FOR error Exp SEMI Exp SEMI Exp RP Stmt  */
#line 271 "syntax.y"
    {
         my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1821 "syntax.tab.c"
    break;

  case 46: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp error Stmt  */
#line 275 "syntax.y"
    {
         my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1829 "syntax.tab.c"
    break;

  case 47: /* DefList: %empty  */
#line 282 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "DefList", 0, (yyloc).first_line);
    }
#line 1837 "syntax.tab.c"
    break;

  case 48: /* DefList: Def DefList  */
#line 286 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DefList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1845 "syntax.tab.c"
    break;

  case 49: /* Def: Specifier DecList SEMI  */
#line 292 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Def", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1853 "syntax.tab.c"
    break;

  case 50: /* Def: Specifier DecList error  */
#line 296 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line); 
        has_error=1;
    }
#line 1862 "syntax.tab.c"
    break;

  case 51: /* Def: error DecList SEMI  */
#line 301 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line +1); has_error=1;
    }
#line 1870 "syntax.tab.c"
    break;

  case 52: /* DecList: Dec  */
#line 307 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DecList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1878 "syntax.tab.c"
    break;

  case 53: /* DecList: Dec COMMA DecList  */
#line 311 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DecList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1886 "syntax.tab.c"
    break;

  case 54: /* Dec: VarDec  */
#line 317 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Dec", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1894 "syntax.tab.c"
    break;

  case 55: /* Dec: VarDec ASSIGN Exp  */
#line 321 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Dec", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1902 "syntax.tab.c"
    break;

  case 56: /* Exp: Exp ASSIGN Exp  */
#line 328 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1908 "syntax.tab.c"
    break;

  case 57: /* Exp: Exp AND Exp  */
#line 330 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1914 "syntax.tab.c"
    break;

  case 58: /* Exp: Exp OR Exp  */
#line 332 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1920 "syntax.tab.c"
    break;

  case 59: /* Exp: Exp LT Exp  */
#line 334 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1926 "syntax.tab.c"
    break;

  case 60: /* Exp: Exp LE Exp  */
#line 336 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1932 "syntax.tab.c"
    break;

  case 61: /* Exp: Exp GT Exp  */
#line 338 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1938 "syntax.tab.c"
    break;

  case 62: /* Exp: Exp GE Exp  */
#line 340 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1944 "syntax.tab.c"
    break;

  case 63: /* Exp: Exp NE Exp  */
#line 342 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1950 "syntax.tab.c"
    break;

  case 64: /* Exp: Exp EQ Exp  */
#line 344 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1956 "syntax.tab.c"
    break;

  case 65: /* Exp: Exp PLUS Exp  */
#line 346 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1962 "syntax.tab.c"
    break;

  case 66: /* Exp: Exp MINUS Exp  */
#line 348 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1968 "syntax.tab.c"
    break;

  case 67: /* Exp: Exp MUL Exp  */
#line 350 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1974 "syntax.tab.c"
    break;

  case 68: /* Exp: Exp DIV Exp  */
#line 352 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1980 "syntax.tab.c"
    break;

  case 69: /* Exp: LP Exp RP  */
#line 355 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1986 "syntax.tab.c"
    break;

  case 70: /* Exp: MINUS Exp  */
#line 357 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1992 "syntax.tab.c"
    break;

  case 71: /* Exp: NOT Exp  */
#line 359 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 1998 "syntax.tab.c"
    break;

  case 72: /* Exp: ID LP Args RP  */
#line 362 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2004 "syntax.tab.c"
    break;

  case 73: /* Exp: ID LP RP  */
#line 365 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2010 "syntax.tab.c"
    break;

  case 74: /* Exp: Exp LB Exp RB  */
#line 368 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2016 "syntax.tab.c"
    break;

  case 75: /* Exp: Exp DOT ID  */
#line 371 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2022 "syntax.tab.c"
    break;

  case 76: /* Exp: ID  */
#line 373 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2028 "syntax.tab.c"
    break;

  case 77: /* Exp: INT  */
#line 375 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2034 "syntax.tab.c"
    break;

  case 78: /* Exp: FLOAT  */
#line 377 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2040 "syntax.tab.c"
    break;

  case 79: /* Exp: CHAR  */
#line 379 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2046 "syntax.tab.c"
    break;

  case 80: /* Exp: ILLEGAL_TOKEN  */
#line 381 "syntax.y"
    {
        has_error = 1;
    }
#line 2054 "syntax.tab.c"
    break;

  case 81: /* Exp: INVALID_NUMBER  */
#line 385 "syntax.y"
    {
        has_error=1;
    }
#line 2062 "syntax.tab.c"
    break;

  case 82: /* Exp: Exp ILLEGAL_TOKEN Exp  */
#line 389 "syntax.y"
    {
        has_error = 1;
    }
#line 2070 "syntax.tab.c"
    break;

  case 83: /* Exp: LP Exp error  */
#line 393 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 2079 "syntax.tab.c"
    break;

  case 84: /* Exp: ID LP Args error  */
#line 398 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 2087 "syntax.tab.c"
    break;

  case 85: /* Exp: ID LP error  */
#line 402 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 2096 "syntax.tab.c"
    break;

  case 86: /* Exp: Exp LB Exp error  */
#line 407 "syntax.y"
    {
        my_error(MISS_BRACKET, (yyloc).first_line,']'); 
        has_error=1;
    }
#line 2105 "syntax.tab.c"
    break;

  case 87: /* Args: Exp COMMA Args  */
#line 415 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Args", 3, (yyloc).first_line, (yyvsp[-2].node_ptr));
    }
#line 2113 "syntax.tab.c"
    break;

  case 88: /* Args: Exp  */
#line 419 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Args", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 2121 "syntax.tab.c"
    break;


#line 2125 "syntax.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 423 "syntax.y"


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
