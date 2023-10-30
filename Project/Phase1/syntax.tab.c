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
#define YYLAST   872

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

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
      96,   101,   106,   113,   117,   121,   129,   133,   139,   143,
     151,   155,   159,   165,   169,   173,   178,   185,   189,   193,
     200,   204,   213,   222,   225,   231,   235,   239,   243,   247,
     251,   255,   259,   263,   267,   271,   276,   280,   284,   288,
     292,   296,   304,   307,   313,   317,   322,   328,   332,   336,
     343,   347,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   379,   381,   386,   388,   393,   395,   401,
     403,   405,   408,   411,   414,   417,   419,   424,   426,   428,
     430,   432,   436,   440,   444,   449,   453,   458,   466,   470,
     474
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

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     163,    84,   -58,    -5,    18,   -58,   163,     2,   -58,    37,
     -58,    36,    40,    34,    38,   -58,   -58,   -58,   -58,     1,
      34,   117,   -58,     8,    67,    79,   -58,    60,   -58,   -58,
     -58,   101,   -58,   101,    25,    98,   -58,   -58,   -58,    24,
     101,   101,   300,    79,    77,    86,    86,   -58,   -58,   165,
     -58,   -58,     0,    90,   120,     3,   -58,   300,   -58,   -58,
     -58,   103,    80,    82,   293,   131,   293,   293,   293,   -58,
     -58,   102,   300,   515,   -58,   -58,   101,   -58,   293,   -58,
      66,   -58,   -58,   -58,   147,   293,   179,   293,   293,   331,
     293,   293,   118,   -28,   360,   -58,   -58,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   192,   217,   230,
     255,   293,    68,   -58,   758,   -58,   -58,   -58,   -58,   650,
      64,   677,   127,   393,   704,   426,   -58,   -58,   542,   569,
     -58,   -58,   785,   804,   821,   837,   312,   312,   312,   312,
     312,   312,   -58,   118,   -58,   118,   -58,   -28,   -58,   -28,
     459,   -58,   -58,   268,   -58,   -58,   300,   130,   300,   300,
     300,   300,   300,   293,   293,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   160,   -58,   -58,   -58,   596,   623,   300,
     293,   293,   -58,   731,   488,   300,   300,   300,   -58,   -58,
     -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    16,     0,     0,     2,     0,     0,    17,    20,
      11,     0,    13,     0,    19,     1,     4,     9,     6,     0,
       0,     0,    10,     0,     0,     0,    12,     0,     8,     5,
       7,    26,    24,     0,     0,    28,    15,    20,    14,     0,
       0,     0,    33,     0,     0,    31,    30,    25,    23,     0,
      22,    21,    60,     0,    57,     0,    91,     0,    88,    90,
      89,    87,     0,     0,     0,     0,     0,     0,     0,    92,
      36,     0,    33,     0,    53,    18,    29,    27,     0,    56,
       0,    55,    54,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,     0,    32,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    61,    59,    58,    96,    83,    99,
       0,     0,     0,     0,     0,     0,    45,    37,     0,     0,
      94,    79,    93,    62,    64,    63,    65,    66,    67,    68,
      69,    70,    72,    71,    74,    73,    76,    75,    78,    77,
       0,    86,    85,     0,    95,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    84,   100,    98,    47,
      40,    39,    46,    38,    49,    48,    43,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,    50,    51,
      44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   146,   -58,    53,    15,   -58,   -17,   161,   121,
     -58,     7,   104,   -57,    35,   -58,   -40,   -58,   -56,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    11,    41,     8,    12,    13,    34,
      35,    70,    71,    72,    42,    43,    53,    54,    73,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      83,    55,    28,    17,    81,   111,    14,   112,    89,    36,
      92,    93,    94,     9,    45,     7,    46,    78,    15,    37,
      26,     7,   114,    52,    52,    50,    47,    30,   119,   121,
     123,   124,   125,    24,   128,   129,    33,    29,    18,    82,
     116,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   143,   145,   147,   149,   150,    23,    48,    51,    45,
      19,    40,    44,    52,    33,   154,     2,   115,    21,   151,
       3,    25,    22,    24,    39,    27,    38,    37,    74,   152,
      40,    85,   -52,    87,   -52,     2,   -52,   -52,   -52,     3,
     -52,   -52,   -52,   -52,   -52,     9,   155,   119,   -52,   169,
     171,   172,   173,   174,   175,   176,   -52,   177,   178,   -52,
     -52,    86,    37,    88,    49,    75,   -52,   -52,    31,    24,
      10,   -52,   182,     2,   183,   184,    79,     3,   188,   189,
     190,   170,    90,    56,    84,    57,    80,    58,    59,    60,
      95,    61,    62,    63,    64,    65,   109,   110,   117,    32,
      56,   111,    16,   112,    58,    59,    60,    66,    61,   157,
      67,    68,    91,    -3,     1,   179,    76,    25,    20,     2,
      77,     2,    69,     3,    66,     3,    96,    67,    68,   118,
     122,   168,    56,     0,     0,     0,    58,    59,    60,    69,
      61,     0,     0,   142,     0,    56,     0,     0,     0,    58,
      59,    60,     0,    61,     0,     0,    66,     0,     0,    67,
      68,     0,     0,     0,     0,     0,     0,     0,   144,    66,
      56,    69,    67,    68,    58,    59,    60,     0,    61,     0,
       0,   146,     0,    56,    69,     0,     0,    58,    59,    60,
       0,    61,     0,     0,    66,     0,     0,    67,    68,     0,
       0,     0,     0,     0,     0,     0,   148,    66,    56,    69,
      67,    68,    58,    59,    60,     0,    61,     0,     0,   167,
       0,    56,    69,     0,     0,    58,    59,    60,     0,    61,
       0,     0,    66,     0,     0,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    56,    69,    67,    68,
      58,    59,    60,    56,    61,    57,     0,    58,    59,    60,
      69,    61,    62,    63,    64,    65,     0,     0,     0,     0,
      66,     0,     0,    67,    68,     0,     0,    66,     0,     0,
      67,    68,   126,     0,    97,    69,     0,    25,   107,   108,
     109,   110,    69,     0,     0,   111,     0,   112,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   130,     0,    97,   111,     0,   112,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   131,   111,   158,   112,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,     0,   159,   111,   161,   112,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,   162,   111,
     165,   112,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   186,
       0,    97,   111,   166,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    97,     0,
     187,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    97,     0,     0,   111,     0,
     112,   113,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    97,     0,     0,   111,     0,   112,   163,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    97,
       0,     0,   111,     0,   112,   164,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    97,     0,     0,   111,
       0,   112,   180,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    97,     0,     0,   111,     0,   112,   181,
       0,     0,     0,     0,     0,     0,   153,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      97,     0,     0,   111,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    97,     0,   156,
     111,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    97,     0,   160,   111,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    97,     0,   185,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   -53,     0,
       0,   111,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,     0,     0,   111,     0,
     112,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,     0,   111,     0,   112,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,     0,     0,   111,     0,   112,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,     0,     0,
     111,     0,   112
};

static const yytype_int16 yycheck[] =
{
      57,    41,     1,     1,     1,    33,    11,    35,    64,     1,
      66,    67,    68,    11,    31,     0,    33,    17,     0,    11,
      13,     6,    78,    40,    41,     1,     1,    20,    84,    85,
      86,    87,    88,    33,    90,    91,    21,    36,    36,    36,
      80,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    16,    32,    34,    76,
       7,     1,    27,    80,    49,     1,     6,     1,    31,     1,
      10,    37,    36,    33,     7,    37,    23,    11,    43,    11,
       1,     1,     3,     1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    11,    32,   153,    38,   156,
     157,   158,   159,   160,   161,   162,    27,   163,   164,    30,
      31,    31,    11,    31,    16,    38,    37,    38,     1,    33,
      36,    42,   179,     6,   180,   181,    36,    10,   185,   186,
     187,     1,     1,     3,    31,     5,    16,     7,     8,     9,
      38,    11,    12,    13,    14,    15,    28,    29,     1,    32,
       3,    33,     6,    35,     7,     8,     9,    27,    11,    32,
      30,    31,    31,     0,     1,     5,     1,    37,     7,     6,
      49,     6,    42,    10,    27,    10,    72,    30,    31,    32,
       1,   153,     3,    -1,    -1,    -1,     7,     8,     9,    42,
      11,    -1,    -1,     1,    -1,     3,    -1,    -1,    -1,     7,
       8,     9,    -1,    11,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    27,
       3,    42,    30,    31,     7,     8,     9,    -1,    11,    -1,
      -1,     1,    -1,     3,    42,    -1,    -1,     7,     8,     9,
      -1,    11,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    27,     3,    42,
      30,    31,     7,     8,     9,    -1,    11,    -1,    -1,     1,
      -1,     3,    42,    -1,    -1,     7,     8,     9,    -1,    11,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,     3,    42,    30,    31,
       7,     8,     9,     3,    11,     5,    -1,     7,     8,     9,
      42,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    -1,    27,    -1,    -1,
      30,    31,     1,    -1,     3,    42,    -1,    37,    26,    27,
      28,    29,    42,    -1,    -1,    33,    -1,    35,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     1,    -1,     3,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    33,     1,    35,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,     1,    35,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
       1,    35,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     1,
      -1,     3,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     3,    -1,
      32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     3,    -1,    -1,    33,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     3,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     3,
      -1,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     3,    -1,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     3,    -1,    -1,    33,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       3,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     3,    -1,    32,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     3,    -1,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     3,    -1,    32,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     3,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,    10,    44,    45,    46,    48,    49,    11,
      36,    47,    50,    51,    11,     0,    45,     1,    36,    47,
      51,    31,    36,    16,    33,    37,    54,    37,     1,    36,
      54,     1,    32,    48,    52,    53,     1,    11,    47,     7,
       1,    48,    57,    58,    57,    50,    50,     1,    32,    16,
       1,    34,    50,    59,    60,    59,     3,     5,     7,     8,
       9,    11,    12,    13,    14,    15,    27,    30,    31,    42,
      54,    55,    56,    61,    57,    38,     1,    52,    17,    36,
      16,     1,    36,    56,    31,     1,    31,     1,    31,    61,
       1,    31,    61,    61,    61,    38,    55,     3,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    33,    35,    36,    61,     1,    59,     1,    32,    61,
      62,    61,     1,    61,    61,    61,     1,    36,    61,    61,
       1,    32,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,     1,    61,     1,    61,     1,    61,     1,    61,
      61,     1,    11,    16,     1,    32,    32,    32,     1,    32,
      32,     1,    32,    36,    36,     1,    34,     1,    62,    56,
       1,    56,    56,    56,    56,    56,    56,    61,    61,     5,
      36,    36,    56,    61,    61,    32,     1,    32,    56,    56,
      56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    48,    48,    49,    49,
      50,    50,    50,    51,    51,    51,    51,    52,    52,    52,
      53,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    58,    58,    59,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     3,     2,
       3,     2,     3,     1,     3,     3,     1,     1,     5,     2,
       1,     4,     4,     4,     3,     4,     3,     3,     1,     3,
       2,     2,     4,     0,     2,     2,     1,     3,     5,     5,
       5,     7,     2,     5,     9,     3,     5,     5,     5,     5,
       9,     9,     0,     2,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     4,     3,     4,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     3,     4,     3,     1,
       3
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
#line 1513 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 65 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "ExtDefList", 0, (yyloc).first_line);
    }
#line 1521 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 69 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "ExtDefList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1529 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 75 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1537 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 79 "syntax.y"
    {   
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1545 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 83 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1553 "syntax.tab.c"
    break;

  case 8: /* ExtDef: Specifier ExtDecList error  */
#line 87 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1562 "syntax.tab.c"
    break;

  case 9: /* ExtDef: Specifier error  */
#line 92 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1571 "syntax.tab.c"
    break;

  case 10: /* ExtDef: error ExtDecList SEMI  */
#line 97 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1580 "syntax.tab.c"
    break;

  case 11: /* ExtDef: error SEMI  */
#line 102 "syntax.y"
    {   
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1589 "syntax.tab.c"
    break;

  case 12: /* ExtDef: error FunDec CompSt  */
#line 107 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1598 "syntax.tab.c"
    break;

  case 13: /* ExtDecList: VarDec  */
#line 114 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDecList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1606 "syntax.tab.c"
    break;

  case 14: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 118 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDecList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1614 "syntax.tab.c"
    break;

  case 15: /* ExtDecList: VarDec COMMA error  */
#line 122 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1623 "syntax.tab.c"
    break;

  case 16: /* Specifier: TYPE  */
#line 130 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Specifier", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1631 "syntax.tab.c"
    break;

  case 17: /* Specifier: StructSpecifier  */
#line 134 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Specifier", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1639 "syntax.tab.c"
    break;

  case 18: /* StructSpecifier: STRUCT ID LC DefList RC  */
#line 140 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StructSpecifier", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1647 "syntax.tab.c"
    break;

  case 19: /* StructSpecifier: STRUCT ID  */
#line 144 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StructSpecifier", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1655 "syntax.tab.c"
    break;

  case 20: /* VarDec: ID  */
#line 152 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarDec", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1663 "syntax.tab.c"
    break;

  case 21: /* VarDec: VarDec LB INT RB  */
#line 156 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarDec", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1671 "syntax.tab.c"
    break;

  case 22: /* VarDec: VarDec LB INT error  */
#line 159 "syntax.y"
                          {
        my_error(MISS_BRACKET, (yyloc).first_line,']');
        has_error=1;
    }
#line 1680 "syntax.tab.c"
    break;

  case 23: /* FunDec: ID LP VarList RP  */
#line 166 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "FunDec", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1688 "syntax.tab.c"
    break;

  case 24: /* FunDec: ID LP RP  */
#line 170 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "FunDec", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1696 "syntax.tab.c"
    break;

  case 25: /* FunDec: ID LP VarList error  */
#line 174 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 1705 "syntax.tab.c"
    break;

  case 26: /* FunDec: ID LP error  */
#line 179 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 1714 "syntax.tab.c"
    break;

  case 27: /* VarList: ParamDec COMMA VarList  */
#line 186 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1722 "syntax.tab.c"
    break;

  case 28: /* VarList: ParamDec  */
#line 190 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1730 "syntax.tab.c"
    break;

  case 29: /* VarList: ParamDec COMMA error  */
#line 194 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1739 "syntax.tab.c"
    break;

  case 30: /* ParamDec: Specifier VarDec  */
#line 201 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ParamDec", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1747 "syntax.tab.c"
    break;

  case 31: /* ParamDec: error VarDec  */
#line 205 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1756 "syntax.tab.c"
    break;

  case 32: /* CompSt: LC DefList StmtList RC  */
#line 214 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "CompSt", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1764 "syntax.tab.c"
    break;

  case 33: /* StmtList: %empty  */
#line 222 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "StmtList", 0, (yyloc).first_line);
    }
#line 1772 "syntax.tab.c"
    break;

  case 34: /* StmtList: Stmt StmtList  */
#line 226 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StmtList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1780 "syntax.tab.c"
    break;

  case 35: /* Stmt: Exp SEMI  */
#line 232 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1788 "syntax.tab.c"
    break;

  case 36: /* Stmt: CompSt  */
#line 236 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1796 "syntax.tab.c"
    break;

  case 37: /* Stmt: RETURN Exp SEMI  */
#line 240 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1804 "syntax.tab.c"
    break;

  case 38: /* Stmt: IF LP Exp RP Stmt  */
#line 244 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1812 "syntax.tab.c"
    break;

  case 39: /* Stmt: IF LP error RP Stmt  */
#line 248 "syntax.y"
    {
         my_error(MISS_SPEC, (yyloc).first_line); has_error=1;
    }
#line 1820 "syntax.tab.c"
    break;

  case 40: /* Stmt: IF LP error RP error  */
#line 252 "syntax.y"
    {
         my_error(MISS_SPEC, (yyloc).first_line); has_error=1;
    }
#line 1828 "syntax.tab.c"
    break;

  case 41: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 256 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 7, (yyloc).first_line, (yyvsp[-6].node_ptr), (yyvsp[-5].node_ptr), (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1836 "syntax.tab.c"
    break;

  case 42: /* Stmt: ELSE Stmt  */
#line 260 "syntax.y"
    {
        my_error(MISS_IF, (yyloc).first_line); has_error=1;
    }
#line 1844 "syntax.tab.c"
    break;

  case 43: /* Stmt: WHILE LP Exp RP Stmt  */
#line 264 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1852 "syntax.tab.c"
    break;

  case 44: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp RP Stmt  */
#line 268 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 9, (yyloc).first_line, (yyvsp[-8].node_ptr), (yyvsp[-7].node_ptr), (yyvsp[-6].node_ptr), (yyvsp[-5].node_ptr), (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1860 "syntax.tab.c"
    break;

  case 45: /* Stmt: RETURN Exp error  */
#line 272 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1869 "syntax.tab.c"
    break;

  case 46: /* Stmt: IF LP Exp error Stmt  */
#line 277 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1877 "syntax.tab.c"
    break;

  case 47: /* Stmt: IF error Exp RP Stmt  */
#line 281 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1885 "syntax.tab.c"
    break;

  case 48: /* Stmt: WHILE LP Exp error Stmt  */
#line 285 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1893 "syntax.tab.c"
    break;

  case 49: /* Stmt: WHILE error Exp RP Stmt  */
#line 289 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1901 "syntax.tab.c"
    break;

  case 50: /* Stmt: FOR error Exp SEMI Exp SEMI Exp RP Stmt  */
#line 293 "syntax.y"
    {
         my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1909 "syntax.tab.c"
    break;

  case 51: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp error Stmt  */
#line 297 "syntax.y"
    {
         my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1917 "syntax.tab.c"
    break;

  case 52: /* DefList: %empty  */
#line 304 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "DefList", 0, (yyloc).first_line);
    }
#line 1925 "syntax.tab.c"
    break;

  case 53: /* DefList: Def DefList  */
#line 308 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DefList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1933 "syntax.tab.c"
    break;

  case 54: /* Def: Specifier DecList SEMI  */
#line 314 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Def", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1941 "syntax.tab.c"
    break;

  case 55: /* Def: Specifier DecList error  */
#line 318 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line); 
        has_error=1;
    }
#line 1950 "syntax.tab.c"
    break;

  case 56: /* Def: error DecList SEMI  */
#line 323 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line +1); has_error=1;
    }
#line 1958 "syntax.tab.c"
    break;

  case 57: /* DecList: Dec  */
#line 329 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DecList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1966 "syntax.tab.c"
    break;

  case 58: /* DecList: Dec COMMA DecList  */
#line 333 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DecList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1974 "syntax.tab.c"
    break;

  case 59: /* DecList: Dec COMMA error  */
#line 337 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1983 "syntax.tab.c"
    break;

  case 60: /* Dec: VarDec  */
#line 344 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Dec", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1991 "syntax.tab.c"
    break;

  case 61: /* Dec: VarDec ASSIGN Exp  */
#line 348 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Dec", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1999 "syntax.tab.c"
    break;

  case 62: /* Exp: Exp ASSIGN Exp  */
#line 355 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2005 "syntax.tab.c"
    break;

  case 63: /* Exp: Exp AND Exp  */
#line 357 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2011 "syntax.tab.c"
    break;

  case 64: /* Exp: Exp OR Exp  */
#line 359 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2017 "syntax.tab.c"
    break;

  case 65: /* Exp: Exp LT Exp  */
#line 361 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2023 "syntax.tab.c"
    break;

  case 66: /* Exp: Exp LE Exp  */
#line 363 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2029 "syntax.tab.c"
    break;

  case 67: /* Exp: Exp GT Exp  */
#line 365 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2035 "syntax.tab.c"
    break;

  case 68: /* Exp: Exp GE Exp  */
#line 367 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2041 "syntax.tab.c"
    break;

  case 69: /* Exp: Exp NE Exp  */
#line 369 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2047 "syntax.tab.c"
    break;

  case 70: /* Exp: Exp EQ Exp  */
#line 371 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2053 "syntax.tab.c"
    break;

  case 71: /* Exp: Exp PLUS Exp  */
#line 373 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2059 "syntax.tab.c"
    break;

  case 72: /* Exp: Exp PLUS error  */
#line 375 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'+'); 
        has_error=1;
    }
#line 2068 "syntax.tab.c"
    break;

  case 73: /* Exp: Exp MINUS Exp  */
#line 380 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2074 "syntax.tab.c"
    break;

  case 74: /* Exp: Exp MINUS error  */
#line 382 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'-'); 
        has_error=1;
    }
#line 2083 "syntax.tab.c"
    break;

  case 75: /* Exp: Exp MUL Exp  */
#line 387 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2089 "syntax.tab.c"
    break;

  case 76: /* Exp: Exp MUL error  */
#line 389 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'*'); 
        has_error=1;
    }
#line 2098 "syntax.tab.c"
    break;

  case 77: /* Exp: Exp DIV Exp  */
#line 394 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2104 "syntax.tab.c"
    break;

  case 78: /* Exp: Exp DIV error  */
#line 396 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'/'); 
        has_error=1;
    }
#line 2113 "syntax.tab.c"
    break;

  case 79: /* Exp: LP Exp RP  */
#line 402 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2119 "syntax.tab.c"
    break;

  case 80: /* Exp: MINUS Exp  */
#line 404 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2125 "syntax.tab.c"
    break;

  case 81: /* Exp: NOT Exp  */
#line 406 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2131 "syntax.tab.c"
    break;

  case 82: /* Exp: ID LP Args RP  */
#line 409 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2137 "syntax.tab.c"
    break;

  case 83: /* Exp: ID LP RP  */
#line 412 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2143 "syntax.tab.c"
    break;

  case 84: /* Exp: Exp LB Exp RB  */
#line 415 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2149 "syntax.tab.c"
    break;

  case 85: /* Exp: Exp DOT ID  */
#line 418 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2155 "syntax.tab.c"
    break;

  case 86: /* Exp: Exp DOT error  */
#line 420 "syntax.y"
    {
        my_error(MISS_FIELD, (yyloc).first_line); 
        has_error=1;
    }
#line 2164 "syntax.tab.c"
    break;

  case 87: /* Exp: ID  */
#line 425 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2170 "syntax.tab.c"
    break;

  case 88: /* Exp: INT  */
#line 427 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2176 "syntax.tab.c"
    break;

  case 89: /* Exp: FLOAT  */
#line 429 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2182 "syntax.tab.c"
    break;

  case 90: /* Exp: CHAR  */
#line 431 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2188 "syntax.tab.c"
    break;

  case 91: /* Exp: ILLEGAL_TOKEN  */
#line 433 "syntax.y"
    {
        has_error = 1;
    }
#line 2196 "syntax.tab.c"
    break;

  case 92: /* Exp: INVALID_NUMBER  */
#line 437 "syntax.y"
    {
        has_error=1;
    }
#line 2204 "syntax.tab.c"
    break;

  case 93: /* Exp: Exp ILLEGAL_TOKEN Exp  */
#line 441 "syntax.y"
    {
        has_error = 1;
    }
#line 2212 "syntax.tab.c"
    break;

  case 94: /* Exp: LP Exp error  */
#line 445 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 2221 "syntax.tab.c"
    break;

  case 95: /* Exp: ID LP Args error  */
#line 450 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 2229 "syntax.tab.c"
    break;

  case 96: /* Exp: ID LP error  */
#line 454 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 2238 "syntax.tab.c"
    break;

  case 97: /* Exp: Exp LB Exp error  */
#line 459 "syntax.y"
    {
        my_error(MISS_BRACKET, (yyloc).first_line,']'); 
        has_error=1;
    }
#line 2247 "syntax.tab.c"
    break;

  case 98: /* Args: Exp COMMA Args  */
#line 467 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Args", 3, (yyloc).first_line, (yyvsp[-2].node_ptr));
    }
#line 2255 "syntax.tab.c"
    break;

  case 99: /* Args: Exp  */
#line 471 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Args", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 2263 "syntax.tab.c"
    break;

  case 100: /* Args: Exp COMMA error  */
#line 475 "syntax.y"
    {
        my_error(MISS_ARG, (yyloc).first_line); 
        has_error=1;
    }
#line 2272 "syntax.tab.c"
    break;


#line 2276 "syntax.tab.c"

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

#line 481 "syntax.y"


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
