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

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ILLEGAL_TOKEN = 258,           /* ILLEGAL_TOKEN  */
    TYPE = 259,                    /* TYPE  */
    INT = 260,                     /* INT  */
    CHAR = 261,                    /* CHAR  */
    FLOAT = 262,                   /* FLOAT  */
    STRUCT = 263,                  /* STRUCT  */
    ID = 264,                      /* ID  */
    IF = 265,                      /* IF  */
    WHILE = 266,                   /* WHILE  */
    RETURN = 267,                  /* RETURN  */
    COMMA = 268,                   /* COMMA  */
    ASSIGN = 269,                  /* ASSIGN  */
    OR = 270,                      /* OR  */
    AND = 271,                     /* AND  */
    LT = 272,                      /* LT  */
    LE = 273,                      /* LE  */
    GT = 274,                      /* GT  */
    GE = 275,                      /* GE  */
    NE = 276,                      /* NE  */
    EQ = 277,                      /* EQ  */
    PLUS = 278,                    /* PLUS  */
    MINUS = 279,                   /* MINUS  */
    MUL = 280,                     /* MUL  */
    DIV = 281,                     /* DIV  */
    NOT = 282,                     /* NOT  */
    DOT = 283,                     /* DOT  */
    LP = 284,                      /* LP  */
    RP = 285,                      /* RP  */
    LB = 286,                      /* LB  */
    RB = 287,                      /* RB  */
    ELSE = 288,                    /* ELSE  */
    SEMI = 289,                    /* SEMI  */
    LC = 290,                      /* LC  */
    RC = 291,                      /* RC  */
    INVALID_CHAR = 292,            /* INVALID_CHAR  */
    WRONG_ID = 293,                /* WRONG_ID  */
    UNKNOWN_CHAR = 294,            /* UNKNOWN_CHAR  */
    INVALID_NUMBER = 295           /* INVALID_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "syntax.y"

    Node* node_ptr;

#line 108 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
