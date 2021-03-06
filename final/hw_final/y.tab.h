/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    AUTO_SYM = 260,
    BREAK_SYM = 261,
    CASE_SYM = 262,
    CONTINUE_SYM = 263,
    DEFAULT_SYM = 264,
    DO_SYM = 265,
    ELSE_SYM = 266,
    ENUM_SYM = 267,
    FOR_SYM = 268,
    IF_SYM = 269,
    RETURN_SYM = 270,
    SIZEOF_SYM = 271,
    STATIC_SYM = 272,
    STRUCT_SYM = 273,
    SWITCH_SYM = 274,
    TYPEDEF_SYM = 275,
    UNION_SYM = 276,
    WHILE_SYM = 277,
    CONST_SYM = 278,
    PLUSPLUS = 279,
    MINUSMINUS = 280,
    BAR = 281,
    AMP = 282,
    AMPAMP = 283,
    BARBAR = 284,
    ARROW = 285,
    LSS = 286,
    GTR = 287,
    LEQ = 288,
    GEQ = 289,
    EQL = 290,
    NEQ = 291,
    DOTDOTDOT = 292,
    LP = 293,
    RP = 294,
    LB = 295,
    RB = 296,
    LR = 297,
    RR = 298,
    COLON = 299,
    PERIOD = 300,
    COMMA = 301,
    EXCL = 302,
    STAR = 303,
    SLASH = 304,
    PERCENT = 305,
    SEMICOLON = 306,
    ASSIGN = 307,
    PLUS = 308,
    MINUS = 309,
    INTEGER_CONSTANT = 310,
    FLOAT_CONSTANT = 311,
    STRING_LITERAL = 312,
    CHARACTER_CONSTANT = 313
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define AUTO_SYM 260
#define BREAK_SYM 261
#define CASE_SYM 262
#define CONTINUE_SYM 263
#define DEFAULT_SYM 264
#define DO_SYM 265
#define ELSE_SYM 266
#define ENUM_SYM 267
#define FOR_SYM 268
#define IF_SYM 269
#define RETURN_SYM 270
#define SIZEOF_SYM 271
#define STATIC_SYM 272
#define STRUCT_SYM 273
#define SWITCH_SYM 274
#define TYPEDEF_SYM 275
#define UNION_SYM 276
#define WHILE_SYM 277
#define CONST_SYM 278
#define PLUSPLUS 279
#define MINUSMINUS 280
#define BAR 281
#define AMP 282
#define AMPAMP 283
#define BARBAR 284
#define ARROW 285
#define LSS 286
#define GTR 287
#define LEQ 288
#define GEQ 289
#define EQL 290
#define NEQ 291
#define DOTDOTDOT 292
#define LP 293
#define RP 294
#define LB 295
#define RB 296
#define LR 297
#define RR 298
#define COLON 299
#define PERIOD 300
#define COMMA 301
#define EXCL 302
#define STAR 303
#define SLASH 304
#define PERCENT 305
#define SEMICOLON 306
#define ASSIGN 307
#define PLUS 308
#define MINUS 309
#define INTEGER_CONSTANT 310
#define FLOAT_CONSTANT 311
#define STRING_LITERAL 312
#define CHARACTER_CONSTANT 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
