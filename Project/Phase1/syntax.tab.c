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
  YYSYMBOL_LOWEST = 3,                     /* LOWEST  */
  YYSYMBOL_ILLEGAL_TOKEN = 4,              /* ILLEGAL_TOKEN  */
  YYSYMBOL_LOWER_THAN_ELSE = 5,            /* LOWER_THAN_ELSE  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_TYPE = 7,                       /* TYPE  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_STRUCT = 11,                    /* STRUCT  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_COMMA = 17,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 18,                    /* ASSIGN  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_AND = 20,                       /* AND  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_LE = 22,                        /* LE  */
  YYSYMBOL_GT = 23,                        /* GT  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_NE = 25,                        /* NE  */
  YYSYMBOL_EQ = 26,                        /* EQ  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MUL = 29,                       /* MUL  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_LP = 32,                        /* LP  */
  YYSYMBOL_RP = 33,                        /* RP  */
  YYSYMBOL_LB = 34,                        /* LB  */
  YYSYMBOL_RB = 35,                        /* RB  */
  YYSYMBOL_DOT = 36,                       /* DOT  */
  YYSYMBOL_SEMI = 37,                      /* SEMI  */
  YYSYMBOL_LC = 38,                        /* LC  */
  YYSYMBOL_RC = 39,                        /* RC  */
  YYSYMBOL_INVALID_CHAR = 40,              /* INVALID_CHAR  */
  YYSYMBOL_WRONG_ID = 41,                  /* WRONG_ID  */
  YYSYMBOL_UNKNOWN_CHAR = 42,              /* UNKNOWN_CHAR  */
  YYSYMBOL_INVALID_NUMBER = 43,            /* INVALID_NUMBER  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_Program = 45,                   /* Program  */
  YYSYMBOL_ExtDefList = 46,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 47,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 48,                /* ExtDecList  */
  YYSYMBOL_Specifier = 49,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 50,           /* StructSpecifier  */
  YYSYMBOL_VarDec = 51,                    /* VarDec  */
  YYSYMBOL_FunDec = 52,                    /* FunDec  */
  YYSYMBOL_VarList = 53,                   /* VarList  */
  YYSYMBOL_ParamDec = 54,                  /* ParamDec  */
  YYSYMBOL_CompSt = 55,                    /* CompSt  */
  YYSYMBOL_StmtList = 56,                  /* StmtList  */
  YYSYMBOL_Stmt = 57,                      /* Stmt  */
  YYSYMBOL_DefList = 58,                   /* DefList  */
  YYSYMBOL_Def = 59,                       /* Def  */
  YYSYMBOL_DecList = 60,                   /* DecList  */
  YYSYMBOL_Dec = 61,                       /* Dec  */
  YYSYMBOL_Exp = 62,                       /* Exp  */
  YYSYMBOL_Args = 63                       /* Args  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    66,    69,    75,    79,    83,    87,    92,
      97,   102,   107,   114,   118,   122,   127,   135,   139,   145,
     149,   157,   161,   165,   171,   175,   179,   184,   191,   195,
     199,   204,   211,   215,   224,   231,   234,   240,   244,   248,
     252,   256,   260,   264,   268,   272,   276,   281,   285,   289,
     293,   297,   301,   309,   312,   319,   323,   327,   334,   338,
     342,   349,   353,   360,   362,   367,   369,   371,   373,   375,
     377,   379,   381,   383,   385,   390,   392,   397,   399,   404,
     406,   412,   414,   416,   419,   422,   425,   428,   430,   435,
     437,   439,   441,   443,   447,   451,   455,   460,   464,   469,
     477,   481,   485
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
  "\"end of file\"", "error", "\"invalid token\"", "LOWEST",
  "ILLEGAL_TOKEN", "LOWER_THAN_ELSE", "ELSE", "TYPE", "INT", "CHAR",
  "FLOAT", "STRUCT", "ID", "IF", "WHILE", "RETURN", "FOR", "COMMA",
  "ASSIGN", "OR", "AND", "LT", "LE", "GT", "GE", "NE", "EQ", "PLUS",
  "MINUS", "MUL", "DIV", "NOT", "LP", "RP", "LB", "RB", "DOT", "SEMI",
  "LC", "RC", "INVALID_CHAR", "WRONG_ID", "UNKNOWN_CHAR", "INVALID_NUMBER",
  "$accept", "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     155,     2,   -62,     8,    75,   -62,   155,    61,   -62,    62,
      55,   -62,    78,    51,    83,    97,   -62,   -62,    62,   -62,
       1,    83,    15,   118,   -62,   122,   129,   132,   -62,    60,
     -62,   -62,   -62,   -62,   -62,     6,   -62,   137,    79,   135,
      62,   -62,    41,   137,   137,   289,   132,   130,   189,   134,
     134,   -62,   -62,   197,   -62,   -62,    54,   136,   157,    40,
     -62,   289,   -62,   -62,   -62,   140,     3,    64,    -3,    69,
      -3,    -3,    -3,   -62,   -62,   143,   289,   502,   -62,   -62,
       6,   -62,     6,   -62,    -3,   -62,   153,   -62,   -62,   -62,
      85,    -3,   149,    -3,    -3,   315,    -3,    -3,   294,    86,
     346,   -62,   -62,    -3,   175,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,   185,   211,   221,   247,    -3,   166,   -62,
     745,   -62,   -62,   -62,   -62,   637,    81,   664,   158,   377,
     691,   408,   -62,   -62,   529,   556,   -62,   -62,   772,   -62,
     791,   808,   824,   279,   279,   279,   279,   279,   279,   -62,
     294,   -62,   294,   -62,    86,   -62,    86,   439,   -62,   -62,
     257,   -62,   -62,   289,   289,   289,   289,   289,   289,   289,
      -3,    -3,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   182,
     -62,   -62,   -62,   583,   610,   289,    -3,    -3,   -62,   718,
     475,   289,   289,   289,   -62,   -62,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    17,     0,     0,     2,     0,     0,    18,     0,
      21,    11,     0,    13,     0,    20,     1,     4,     9,     6,
       0,     0,     0,     0,    10,     0,     0,     0,    12,     0,
       8,     5,     7,    21,    16,    27,    25,     0,     0,    29,
      15,    14,     0,     0,     0,    35,     0,     0,     0,    33,
      32,    26,    24,     0,    23,    22,    61,     0,    58,     0,
      93,     0,    90,    92,    91,    89,     0,     0,     0,     0,
       0,     0,     0,    94,    38,     0,    35,     0,    54,    19,
       0,    31,    30,    28,     0,    56,     0,    57,    55,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    83,
       0,    34,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      62,    60,    59,    98,    85,   101,     0,     0,     0,     0,
       0,     0,    46,    39,     0,     0,    96,    81,    95,    64,
      63,    66,    65,    67,    68,    69,    70,    71,    72,    74,
      73,    76,    75,    78,    77,    80,    79,     0,    88,    87,
       0,    97,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,    86,   102,   100,    48,    41,    47,    40,
      50,    49,    44,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,    51,    52,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,   193,   -62,    59,    63,   -62,   -22,   194,    30,
     -62,     5,   126,   -61,    45,   -62,   -27,   -62,   -60,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    12,    37,     8,    13,    14,    38,
      39,    74,    75,    76,    45,    46,    57,    58,    77,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    60,    30,     9,    91,    62,    63,    64,    95,    65,
      98,    99,   100,    49,    10,    50,     9,    59,    33,    28,
      15,    56,    56,    48,   120,    70,    32,    33,    71,    72,
     125,   127,   129,   130,   131,    92,   134,   135,    31,    11,
      73,    87,    54,   138,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   150,   152,   154,   156,   157,    49,   122,
      49,    43,    18,     7,    56,    93,    20,     2,    25,     7,
      96,     3,    84,    10,    47,    16,    55,    88,    81,    22,
      51,    34,   161,    83,    41,    26,   123,    23,    26,    60,
      44,    78,    44,    62,    63,    64,    94,    65,    19,   -53,
     125,    97,   176,   177,   178,   179,   180,   181,   182,    44,
     183,   184,    52,    70,   162,    24,    71,    72,   124,    35,
     117,    27,   118,    40,   188,     2,   189,   190,    73,     3,
     194,   195,   196,    43,    33,    29,   -53,    42,   -53,     2,
     -53,   -53,   -53,     3,   -53,   -53,   -53,   -53,   -53,    33,
     128,    36,    53,    60,   121,    -3,     1,    62,    63,    64,
     -53,    65,     2,   -53,   -53,    33,     3,   158,    26,    79,
     -53,   -53,    90,    85,    86,   -53,   139,    70,   159,    60,
      71,    72,   101,    62,    63,    64,   149,    65,   185,    60,
      80,   164,    73,    62,    63,    64,     2,    65,    82,    17,
       3,    21,   102,    70,     2,     0,    71,    72,     3,   175,
       0,     0,   151,    70,     0,    60,    71,    72,    73,    62,
      63,    64,   153,    65,     0,    60,     0,     0,    73,    62,
      63,    64,     0,    65,     0,     0,     0,     0,     0,    70,
       0,     0,    71,    72,     0,     0,     0,     0,   155,    70,
       0,    60,    71,    72,    73,    62,    63,    64,   174,    65,
       0,    60,     0,     0,    73,    62,    63,    64,     0,    65,
       0,     0,     0,     0,     0,    70,     0,     0,    71,    72,
       0,     0,     0,     0,     0,    70,     0,     0,    71,    72,
      73,     0,     0,    60,     0,    61,     0,    62,    63,    64,
      73,    65,    66,    67,    68,    69,   113,   114,   115,   116,
       0,     0,     0,   117,     0,   118,   132,    70,     0,   103,
      71,    72,     0,   115,   116,     0,     0,    27,   117,     0,
     118,     0,    73,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,   136,     0,   117,
     103,   118,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,     0,   165,   137,
     117,   103,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,     0,   168,
     166,   117,   103,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,     0,
     172,   169,   117,   103,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       0,     0,     0,   117,   173,   118,   192,     0,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   103,     0,   193,   117,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   103,     0,     0,   117,     0,   118,   119,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     103,     0,     0,   117,     0,   118,   170,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   103,     0,     0,
     117,     0,   118,   171,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   103,     0,     0,   117,     0,   118,
     186,     0,     0,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   103,     0,     0,   117,     0,   118,   187,     0,     0,
       0,     0,     0,     0,   160,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   103,     0,
       0,   117,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   103,     0,   163,   117,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   103,     0,   167,   117,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   103,
       0,   191,   117,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   -54,     0,     0,   117,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,     0,     0,     0,   117,     0,   118,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,     0,     0,     0,   117,     0,   118,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,     0,
       0,     0,   117,     0,   118,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,     0,     0,     0,   117,     0,
     118
};

static const yytype_int16 yycheck[] =
{
      61,     4,     1,     1,     1,     8,     9,    10,    68,    12,
      70,    71,    72,    35,    12,    37,     1,    44,    12,    14,
      12,    43,    44,    17,    84,    28,    21,    12,    31,    32,
      90,    91,    92,    93,    94,    32,    96,    97,    37,    37,
      43,     1,     1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    80,    86,
      82,     1,     1,     0,    86,     1,     7,     7,    17,     6,
       1,    11,    18,    12,    29,     0,    35,    37,    48,    17,
       1,    22,     1,    53,    25,    34,     1,    32,    34,     4,
      27,    46,    29,     8,     9,    10,    32,    12,    37,    39,
     160,    32,   163,   164,   165,   166,   167,   168,   169,    46,
     170,   171,    33,    28,    33,    37,    31,    32,    33,     1,
      34,    38,    36,     1,   185,     7,   186,   187,    43,    11,
     191,   192,   193,     1,    12,    38,     4,     8,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    12,
       1,    33,    17,     4,     1,     0,     1,     8,     9,    10,
      28,    12,     7,    31,    32,    12,    11,     1,    34,    39,
      38,    39,    32,    37,    17,    43,     1,    28,    12,     4,
      31,    32,    39,     8,     9,    10,     1,    12,     6,     4,
       1,    33,    43,     8,     9,    10,     7,    12,     1,     6,
      11,     7,    76,    28,     7,    -1,    31,    32,    11,   160,
      -1,    -1,     1,    28,    -1,     4,    31,    32,    43,     8,
       9,    10,     1,    12,    -1,     4,    -1,    -1,    43,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,     1,    28,
      -1,     4,    31,    32,    43,     8,     9,    10,     1,    12,
      -1,     4,    -1,    -1,    43,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,
      43,    -1,    -1,     4,    -1,     6,    -1,     8,     9,    10,
      43,    12,    13,    14,    15,    16,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,     1,    28,    -1,     4,
      31,    32,    -1,    29,    30,    -1,    -1,    38,    34,    -1,
      36,    -1,    43,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,     1,    -1,    34,
       4,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,     1,    33,
      34,     4,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,     1,
      33,    34,     4,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
       1,    33,    34,     4,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    35,    36,     1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     4,    -1,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     4,    -1,    -1,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       4,    -1,    -1,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     4,    -1,    -1,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     4,    -1,    -1,    34,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     4,    -1,    -1,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     4,    -1,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     4,    -1,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     4,    -1,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     4,
      -1,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     4,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    11,    45,    46,    47,    49,    50,     1,
      12,    37,    48,    51,    52,    12,     0,    46,     1,    37,
      48,    52,    17,    32,    37,    17,    34,    38,    55,    38,
       1,    37,    55,    12,    48,     1,    33,    49,    53,    54,
       1,    48,     8,     1,    49,    58,    59,    58,    17,    51,
      51,     1,    33,    17,     1,    35,    51,    60,    61,    60,
       4,     6,     8,     9,    10,    12,    13,    14,    15,    16,
      28,    31,    32,    43,    55,    56,    57,    62,    58,    39,
       1,    53,     1,    53,    18,    37,    17,     1,    37,    57,
      32,     1,    32,     1,    32,    62,     1,    32,    62,    62,
      62,    39,    56,     4,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    34,    36,    37,
      62,     1,    60,     1,    33,    62,    63,    62,     1,    62,
      62,    62,     1,    37,    62,    62,     1,    33,    62,     1,
      62,    62,    62,    62,    62,    62,    62,    62,    62,     1,
      62,     1,    62,     1,    62,     1,    62,    62,     1,    12,
      17,     1,    33,    33,    33,     1,    33,    33,     1,    33,
      37,    37,     1,    35,     1,    63,    57,    57,    57,    57,
      57,    57,    57,    62,    62,     6,    37,    37,    57,    62,
      62,    33,     1,    33,    57,    57,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    51,    52,    52,    52,    52,    53,    53,
      53,    53,    54,    54,    55,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    60,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     3,     2,
       3,     2,     3,     1,     3,     3,     3,     1,     1,     5,
       2,     1,     4,     4,     4,     3,     4,     3,     3,     1,
       3,     3,     2,     2,     4,     0,     2,     2,     1,     3,
       5,     5,     7,     2,     5,     9,     3,     5,     5,     5,
       5,     9,     9,     0,     2,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     4,     3,     4,     3,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     3,     4,
       3,     1,     3
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
#line 56 "syntax.y"
    {
        /*@$.first_line is to get the starting line number of the current convention symbol*/
        (yyval.node_ptr) = new Node(NONTERMINAL, "Program", 1, (yyloc).first_line, (yyvsp[0].node_ptr)); 
        if(has_error == 0) {
            printTree((yyval.node_ptr), 0);
        }
    }
#line 1512 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 66 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "ExtDefList", 0, (yyloc).first_line);
    }
#line 1520 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 70 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "ExtDefList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1528 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 76 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1536 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 80 "syntax.y"
    {   
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1544 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 84 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDef", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1552 "syntax.tab.c"
    break;

  case 8: /* ExtDef: Specifier ExtDecList error  */
#line 88 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1561 "syntax.tab.c"
    break;

  case 9: /* ExtDef: Specifier error  */
#line 93 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1570 "syntax.tab.c"
    break;

  case 10: /* ExtDef: error ExtDecList SEMI  */
#line 98 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1579 "syntax.tab.c"
    break;

  case 11: /* ExtDef: error SEMI  */
#line 103 "syntax.y"
    {   
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1588 "syntax.tab.c"
    break;

  case 12: /* ExtDef: error FunDec CompSt  */
#line 108 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1597 "syntax.tab.c"
    break;

  case 13: /* ExtDecList: VarDec  */
#line 115 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDecList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1605 "syntax.tab.c"
    break;

  case 14: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 119 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ExtDecList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1613 "syntax.tab.c"
    break;

  case 15: /* ExtDecList: VarDec COMMA error  */
#line 123 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1622 "syntax.tab.c"
    break;

  case 16: /* ExtDecList: error COMMA ExtDecList  */
#line 128 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1631 "syntax.tab.c"
    break;

  case 17: /* Specifier: TYPE  */
#line 136 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Specifier", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1639 "syntax.tab.c"
    break;

  case 18: /* Specifier: StructSpecifier  */
#line 140 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Specifier", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1647 "syntax.tab.c"
    break;

  case 19: /* StructSpecifier: STRUCT ID LC DefList RC  */
#line 146 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StructSpecifier", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1655 "syntax.tab.c"
    break;

  case 20: /* StructSpecifier: STRUCT ID  */
#line 150 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StructSpecifier", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1663 "syntax.tab.c"
    break;

  case 21: /* VarDec: ID  */
#line 158 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarDec", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1671 "syntax.tab.c"
    break;

  case 22: /* VarDec: VarDec LB INT RB  */
#line 162 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarDec", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1679 "syntax.tab.c"
    break;

  case 23: /* VarDec: VarDec LB INT error  */
#line 165 "syntax.y"
                          {
        my_error(MISS_BRACKET, (yyloc).first_line,']');
        has_error=1;
    }
#line 1688 "syntax.tab.c"
    break;

  case 24: /* FunDec: ID LP VarList RP  */
#line 172 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "FunDec", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1696 "syntax.tab.c"
    break;

  case 25: /* FunDec: ID LP RP  */
#line 176 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "FunDec", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1704 "syntax.tab.c"
    break;

  case 26: /* FunDec: ID LP VarList error  */
#line 180 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 1713 "syntax.tab.c"
    break;

  case 27: /* FunDec: ID LP error  */
#line 185 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 1722 "syntax.tab.c"
    break;

  case 28: /* VarList: ParamDec COMMA VarList  */
#line 192 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1730 "syntax.tab.c"
    break;

  case 29: /* VarList: ParamDec  */
#line 196 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "VarList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1738 "syntax.tab.c"
    break;

  case 30: /* VarList: ParamDec COMMA error  */
#line 200 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1747 "syntax.tab.c"
    break;

  case 31: /* VarList: error COMMA VarList  */
#line 205 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1756 "syntax.tab.c"
    break;

  case 32: /* ParamDec: Specifier VarDec  */
#line 212 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "ParamDec", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1764 "syntax.tab.c"
    break;

  case 33: /* ParamDec: error VarDec  */
#line 216 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line);
        has_error=1;
    }
#line 1773 "syntax.tab.c"
    break;

  case 34: /* CompSt: LC DefList StmtList RC  */
#line 225 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "CompSt", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1781 "syntax.tab.c"
    break;

  case 35: /* StmtList: %empty  */
#line 231 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "StmtList", 0, (yyloc).first_line);
    }
#line 1789 "syntax.tab.c"
    break;

  case 36: /* StmtList: Stmt StmtList  */
#line 235 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "StmtList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1797 "syntax.tab.c"
    break;

  case 37: /* Stmt: Exp SEMI  */
#line 241 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1805 "syntax.tab.c"
    break;

  case 38: /* Stmt: CompSt  */
#line 245 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1813 "syntax.tab.c"
    break;

  case 39: /* Stmt: RETURN Exp SEMI  */
#line 249 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1821 "syntax.tab.c"
    break;

  case 40: /* Stmt: IF LP Exp RP Stmt  */
#line 253 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1829 "syntax.tab.c"
    break;

  case 41: /* Stmt: IF LP error RP Stmt  */
#line 257 "syntax.y"
    {
         my_error(MISS_SPEC, (yyloc).first_line); has_error=1;
    }
#line 1837 "syntax.tab.c"
    break;

  case 42: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 261 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 7, (yyloc).first_line, (yyvsp[-6].node_ptr), (yyvsp[-5].node_ptr), (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1845 "syntax.tab.c"
    break;

  case 43: /* Stmt: ELSE Stmt  */
#line 265 "syntax.y"
    {
        my_error(MISS_IF, (yyloc).first_line); has_error=1;
    }
#line 1853 "syntax.tab.c"
    break;

  case 44: /* Stmt: WHILE LP Exp RP Stmt  */
#line 269 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 5, (yyloc).first_line, (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1861 "syntax.tab.c"
    break;

  case 45: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp RP Stmt  */
#line 273 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Stmt", 9, (yyloc).first_line, (yyvsp[-8].node_ptr), (yyvsp[-7].node_ptr), (yyvsp[-6].node_ptr), (yyvsp[-5].node_ptr), (yyvsp[-4].node_ptr), (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1869 "syntax.tab.c"
    break;

  case 46: /* Stmt: RETURN Exp error  */
#line 277 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line);
        has_error=1;
    }
#line 1878 "syntax.tab.c"
    break;

  case 47: /* Stmt: IF LP Exp error Stmt  */
#line 282 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1886 "syntax.tab.c"
    break;

  case 48: /* Stmt: IF error Exp RP Stmt  */
#line 286 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1894 "syntax.tab.c"
    break;

  case 49: /* Stmt: WHILE LP Exp error Stmt  */
#line 290 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1902 "syntax.tab.c"
    break;

  case 50: /* Stmt: WHILE error Exp RP Stmt  */
#line 294 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1910 "syntax.tab.c"
    break;

  case 51: /* Stmt: FOR error Exp SEMI Exp SEMI Exp RP Stmt  */
#line 298 "syntax.y"
    {
         my_error(MISS_PAREMTHESIS, (yyloc).first_line,'('); has_error=1;
    }
#line 1918 "syntax.tab.c"
    break;

  case 52: /* Stmt: FOR LP Exp SEMI Exp SEMI Exp error Stmt  */
#line 302 "syntax.y"
    {
         my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 1926 "syntax.tab.c"
    break;

  case 53: /* DefList: %empty  */
#line 309 "syntax.y"
    {
        (yyval.node_ptr) = new Node(NONTERMINAL, "DefList", 0, (yyloc).first_line);
    }
#line 1934 "syntax.tab.c"
    break;

  case 54: /* DefList: Def DefList  */
#line 313 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DefList", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1942 "syntax.tab.c"
    break;

  case 55: /* Def: Specifier DecList SEMI  */
#line 320 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Def", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1950 "syntax.tab.c"
    break;

  case 56: /* Def: error DecList SEMI  */
#line 324 "syntax.y"
    {
        my_error(MISS_SPEC, (yyloc).first_line +1); has_error=1;
    }
#line 1958 "syntax.tab.c"
    break;

  case 57: /* Def: Specifier DecList error  */
#line 328 "syntax.y"
    {
        my_error(MISS_SEMI, (yyloc).first_line); 
        has_error=1;
    }
#line 1967 "syntax.tab.c"
    break;

  case 58: /* DecList: Dec  */
#line 335 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DecList", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 1975 "syntax.tab.c"
    break;

  case 59: /* DecList: Dec COMMA DecList  */
#line 339 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "DecList", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 1983 "syntax.tab.c"
    break;

  case 60: /* DecList: Dec COMMA error  */
#line 343 "syntax.y"
    {
        my_error(MISS_VAR, (yyloc).first_line); 
        has_error=1;
    }
#line 1992 "syntax.tab.c"
    break;

  case 61: /* Dec: VarDec  */
#line 350 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Dec", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 2000 "syntax.tab.c"
    break;

  case 62: /* Dec: VarDec ASSIGN Exp  */
#line 354 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Dec", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));
    }
#line 2008 "syntax.tab.c"
    break;

  case 63: /* Exp: Exp ASSIGN Exp  */
#line 361 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2014 "syntax.tab.c"
    break;

  case 64: /* Exp: Exp ASSIGN error  */
#line 363 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'='); 
        has_error=1;
    }
#line 2023 "syntax.tab.c"
    break;

  case 65: /* Exp: Exp AND Exp  */
#line 368 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2029 "syntax.tab.c"
    break;

  case 66: /* Exp: Exp OR Exp  */
#line 370 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2035 "syntax.tab.c"
    break;

  case 67: /* Exp: Exp LT Exp  */
#line 372 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2041 "syntax.tab.c"
    break;

  case 68: /* Exp: Exp LE Exp  */
#line 374 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2047 "syntax.tab.c"
    break;

  case 69: /* Exp: Exp GT Exp  */
#line 376 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2053 "syntax.tab.c"
    break;

  case 70: /* Exp: Exp GE Exp  */
#line 378 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2059 "syntax.tab.c"
    break;

  case 71: /* Exp: Exp NE Exp  */
#line 380 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2065 "syntax.tab.c"
    break;

  case 72: /* Exp: Exp EQ Exp  */
#line 382 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2071 "syntax.tab.c"
    break;

  case 73: /* Exp: Exp PLUS Exp  */
#line 384 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2077 "syntax.tab.c"
    break;

  case 74: /* Exp: Exp PLUS error  */
#line 386 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'+'); 
        has_error=1;
    }
#line 2086 "syntax.tab.c"
    break;

  case 75: /* Exp: Exp MINUS Exp  */
#line 391 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2092 "syntax.tab.c"
    break;

  case 76: /* Exp: Exp MINUS error  */
#line 393 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'-'); 
        has_error=1;
    }
#line 2101 "syntax.tab.c"
    break;

  case 77: /* Exp: Exp MUL Exp  */
#line 398 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2107 "syntax.tab.c"
    break;

  case 78: /* Exp: Exp MUL error  */
#line 400 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'*'); 
        has_error=1;
    }
#line 2116 "syntax.tab.c"
    break;

  case 79: /* Exp: Exp DIV Exp  */
#line 405 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2122 "syntax.tab.c"
    break;

  case 80: /* Exp: Exp DIV error  */
#line 407 "syntax.y"
    {
        my_error(MISS_EXP, (yyloc).first_line,'/'); 
        has_error=1;
    }
#line 2131 "syntax.tab.c"
    break;

  case 81: /* Exp: LP Exp RP  */
#line 413 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2137 "syntax.tab.c"
    break;

  case 82: /* Exp: MINUS Exp  */
#line 415 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2143 "syntax.tab.c"
    break;

  case 83: /* Exp: NOT Exp  */
#line 417 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 2, (yyloc).first_line, (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2149 "syntax.tab.c"
    break;

  case 84: /* Exp: ID LP Args RP  */
#line 420 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2155 "syntax.tab.c"
    break;

  case 85: /* Exp: ID LP RP  */
#line 423 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2161 "syntax.tab.c"
    break;

  case 86: /* Exp: Exp LB Exp RB  */
#line 426 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 4, (yyloc).first_line, (yyvsp[-3].node_ptr), (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2167 "syntax.tab.c"
    break;

  case 87: /* Exp: Exp DOT ID  */
#line 429 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 3, (yyloc).first_line, (yyvsp[-2].node_ptr), (yyvsp[-1].node_ptr), (yyvsp[0].node_ptr));}
#line 2173 "syntax.tab.c"
    break;

  case 88: /* Exp: Exp DOT error  */
#line 431 "syntax.y"
    {
        my_error(MISS_FIELD, (yyloc).first_line); 
        has_error=1;
    }
#line 2182 "syntax.tab.c"
    break;

  case 89: /* Exp: ID  */
#line 436 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2188 "syntax.tab.c"
    break;

  case 90: /* Exp: INT  */
#line 438 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2194 "syntax.tab.c"
    break;

  case 91: /* Exp: FLOAT  */
#line 440 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2200 "syntax.tab.c"
    break;

  case 92: /* Exp: CHAR  */
#line 442 "syntax.y"
    {(yyval.node_ptr)=new Node(NONTERMINAL, "Exp", 1, (yyloc).first_line, (yyvsp[0].node_ptr));}
#line 2206 "syntax.tab.c"
    break;

  case 93: /* Exp: ILLEGAL_TOKEN  */
#line 444 "syntax.y"
    {
        has_error = 1;
    }
#line 2214 "syntax.tab.c"
    break;

  case 94: /* Exp: INVALID_NUMBER  */
#line 448 "syntax.y"
    {
        has_error=1;
    }
#line 2222 "syntax.tab.c"
    break;

  case 95: /* Exp: Exp ILLEGAL_TOKEN Exp  */
#line 452 "syntax.y"
    {
        has_error = 1;
    }
#line 2230 "syntax.tab.c"
    break;

  case 96: /* Exp: LP Exp error  */
#line 456 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 2239 "syntax.tab.c"
    break;

  case 97: /* Exp: ID LP Args error  */
#line 461 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); has_error=1;
    }
#line 2247 "syntax.tab.c"
    break;

  case 98: /* Exp: ID LP error  */
#line 465 "syntax.y"
    {
        my_error(MISS_PAREMTHESIS, (yyloc).first_line,')'); 
        has_error=1;
    }
#line 2256 "syntax.tab.c"
    break;

  case 99: /* Exp: Exp LB Exp error  */
#line 470 "syntax.y"
    {
        my_error(MISS_BRACKET, (yyloc).first_line,']'); 
        has_error=1;
    }
#line 2265 "syntax.tab.c"
    break;

  case 100: /* Args: Exp COMMA Args  */
#line 478 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Args", 3, (yyloc).first_line, (yyvsp[-2].node_ptr));
    }
#line 2273 "syntax.tab.c"
    break;

  case 101: /* Args: Exp  */
#line 482 "syntax.y"
    {
        (yyval.node_ptr)=new Node(NONTERMINAL, "Args", 1, (yyloc).first_line, (yyvsp[0].node_ptr));
    }
#line 2281 "syntax.tab.c"
    break;

  case 102: /* Args: Exp COMMA error  */
#line 486 "syntax.y"
    {
        my_error(MISS_ARG, (yyloc).first_line); 
        has_error=1;
    }
#line 2290 "syntax.tab.c"
    break;


#line 2294 "syntax.tab.c"

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

#line 492 "syntax.y"


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
