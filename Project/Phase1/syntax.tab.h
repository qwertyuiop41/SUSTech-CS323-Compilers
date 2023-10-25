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
    LOWER_THAN_ELSE = 259,         /* LOWER_THAN_ELSE  */
    ELSE = 260,                    /* ELSE  */
    TYPE = 261,                    /* TYPE  */
    INT = 262,                     /* INT  */
    CHAR = 263,                    /* CHAR  */
    FLOAT = 264,                   /* FLOAT  */
    STRUCT = 265,                  /* STRUCT  */
    ID = 266,                      /* ID  */
    IF = 267,                      /* IF  */
    WHILE = 268,                   /* WHILE  */
    RETURN = 269,                  /* RETURN  */
    FOR = 270,                     /* FOR  */
    COMMA = 271,                   /* COMMA  */
    ASSIGN = 272,                  /* ASSIGN  */
    OR = 273,                      /* OR  */
    AND = 274,                     /* AND  */
    LT = 275,                      /* LT  */
    LE = 276,                      /* LE  */
    GT = 277,                      /* GT  */
    GE = 278,                      /* GE  */
    NE = 279,                      /* NE  */
    EQ = 280,                      /* EQ  */
    PLUS = 281,                    /* PLUS  */
    MINUS = 282,                   /* MINUS  */
    MUL = 283,                     /* MUL  */
    DIV = 284,                     /* DIV  */
    NOT = 285,                     /* NOT  */
    DOT = 286,                     /* DOT  */
    LP = 287,                      /* LP  */
    RP = 288,                      /* RP  */
    LB = 289,                      /* LB  */
    RB = 290,                      /* RB  */
    SEMI = 291,                    /* SEMI  */
    LC = 292,                      /* LC  */
    RC = 293,                      /* RC  */
    INVALID_CHAR = 294,            /* INVALID_CHAR  */
    WRONG_ID = 295,                /* WRONG_ID  */
    UNKNOWN_CHAR = 296,            /* UNKNOWN_CHAR  */
    INVALID_NUMBER = 297           /* INVALID_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "syntax.y"

    Node* node_ptr;

#line 110 "syntax.tab.h"

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
