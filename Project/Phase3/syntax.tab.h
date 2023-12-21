/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "syntax.y"
{
    Node* node_ptr;
}
/* Line 1529 of yacc.c.  */
#line 135 "syntax.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
