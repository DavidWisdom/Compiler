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
#line 10 "yacc.y"

extern "C" {
    extern int yylex();
    extern void yyerror(const char* s);
}

#line 78 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "yacc.y"

#include "syntax.h"
#include <iostream>
#include <string>
#include <cassert>
#include <cstring>
#include <memory>
Front::CompUnit* root = nullptr;

#line 123 "y.tab.c"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    INT_CONST = 259,               /* INT_CONST  */
    FLOAT_CONST = 260,             /* FLOAT_CONST  */
    CONST = 261,                   /* CONST  */
    INTT = 262,                    /* INTT  */
    FLOATT = 263,                  /* FLOATT  */
    COMMA = 264,                   /* COMMA  */
    SEMICOLON = 265,               /* SEMICOLON  */
    LBRACE = 266,                  /* LBRACE  */
    RBRACE = 267,                  /* RBRACE  */
    LBRACKET = 268,                /* LBRACKET  */
    RBRACKET = 269,                /* RBRACKET  */
    LPAREN = 270,                  /* LPAREN  */
    RPAREN = 271,                  /* RPAREN  */
    ASSIGNN = 272,                 /* ASSIGNN  */
    VOID = 273,                    /* VOID  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    WHILE = 276,                   /* WHILE  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    RETURN = 279,                  /* RETURN  */
    ADDD = 280,                    /* ADDD  */
    SUBB = 281,                    /* SUBB  */
    MULL = 282,                    /* MULL  */
    DIVV = 283,                    /* DIVV  */
    MODD = 284,                    /* MODD  */
    GTT = 285,                     /* GTT  */
    GEQQ = 286,                    /* GEQQ  */
    LTT = 287,                     /* LTT  */
    LEQQ = 288,                    /* LEQQ  */
    EQQ = 289,                     /* EQQ  */
    NEQQ = 290,                    /* NEQQ  */
    ANDD = 291,                    /* ANDD  */
    ORR = 292,                     /* ORR  */
    NOTT = 293,                    /* NOTT  */
    LOWER_THAN_ELSE = 294          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENT 258
#define INT_CONST 259
#define FLOAT_CONST 260
#define CONST 261
#define INTT 262
#define FLOATT 263
#define COMMA 264
#define SEMICOLON 265
#define LBRACE 266
#define RBRACE 267
#define LBRACKET 268
#define RBRACKET 269
#define LPAREN 270
#define RPAREN 271
#define ASSIGNN 272
#define VOID 273
#define IF 274
#define ELSE 275
#define WHILE 276
#define BREAK 277
#define CONTINUE 278
#define RETURN 279
#define ADDD 280
#define SUBB 281
#define MULL 282
#define DIVV 283
#define MODD 284
#define GTT 285
#define GEQQ 286
#define LTT 287
#define LEQQ 288
#define EQQ 289
#define NEQQ 290
#define ANDD 291
#define ORR 292
#define NOTT 293
#define LOWER_THAN_ELSE 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "yacc.y"

    Front::CompUnit* compUnit;
    Front::Stmt* stmt;
    char* data;
    char* name;
    int type;
    int op;

#line 230 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_INT_CONST = 4,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 5,                /* FLOAT_CONST  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_INTT = 7,                       /* INTT  */
  YYSYMBOL_FLOATT = 8,                     /* FLOATT  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_SEMICOLON = 10,                 /* SEMICOLON  */
  YYSYMBOL_LBRACE = 11,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 12,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 13,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 14,                  /* RBRACKET  */
  YYSYMBOL_LPAREN = 15,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 16,                    /* RPAREN  */
  YYSYMBOL_ASSIGNN = 17,                   /* ASSIGNN  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_WHILE = 21,                     /* WHILE  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_ADDD = 25,                      /* ADDD  */
  YYSYMBOL_SUBB = 26,                      /* SUBB  */
  YYSYMBOL_MULL = 27,                      /* MULL  */
  YYSYMBOL_DIVV = 28,                      /* DIVV  */
  YYSYMBOL_MODD = 29,                      /* MODD  */
  YYSYMBOL_GTT = 30,                       /* GTT  */
  YYSYMBOL_GEQQ = 31,                      /* GEQQ  */
  YYSYMBOL_LTT = 32,                       /* LTT  */
  YYSYMBOL_LEQQ = 33,                      /* LEQQ  */
  YYSYMBOL_EQQ = 34,                       /* EQQ  */
  YYSYMBOL_NEQQ = 35,                      /* NEQQ  */
  YYSYMBOL_ANDD = 36,                      /* ANDD  */
  YYSYMBOL_ORR = 37,                       /* ORR  */
  YYSYMBOL_NOTT = 38,                      /* NOTT  */
  YYSYMBOL_LOWER_THAN_ELSE = 39,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Program = 41,                   /* Program  */
  YYSYMBOL_CompUnit = 42,                  /* CompUnit  */
  YYSYMBOL_Decl = 43,                      /* Decl  */
  YYSYMBOL_ConstDecl = 44,                 /* ConstDecl  */
  YYSYMBOL_BType = 45,                     /* BType  */
  YYSYMBOL_ConstDef = 46,                  /* ConstDef  */
  YYSYMBOL_ArrayOpt = 47,                  /* ArrayOpt  */
  YYSYMBOL_ConstInitVal = 48,              /* ConstInitVal  */
  YYSYMBOL_ConstInitArray = 49,            /* ConstInitArray  */
  YYSYMBOL_ConstArrayBody = 50,            /* ConstArrayBody  */
  YYSYMBOL_VarDecl = 51,                   /* VarDecl  */
  YYSYMBOL_VarDef = 52,                    /* VarDef  */
  YYSYMBOL_InitVal = 53,                   /* InitVal  */
  YYSYMBOL_InitArray = 54,                 /* InitArray  */
  YYSYMBOL_InitArrayBody = 55,             /* InitArrayBody  */
  YYSYMBOL_FuncDef = 56,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 57,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 58,                /* FuncFParam  */
  YYSYMBOL_Block = 59,                     /* Block  */
  YYSYMBOL_BlockItems = 60,                /* BlockItems  */
  YYSYMBOL_BlockItem = 61,                 /* BlockItem  */
  YYSYMBOL_Stmt = 62,                      /* Stmt  */
  YYSYMBOL_IfStmt = 63,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 64,                 /* WhileStmt  */
  YYSYMBOL_BreakStmt = 65,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 66,              /* ContinueStmt  */
  YYSYMBOL_ReturnStmt = 67,                /* ReturnStmt  */
  YYSYMBOL_Exp = 68,                       /* Exp  */
  YYSYMBOL_Cond = 69,                      /* Cond  */
  YYSYMBOL_LVal = 70,                      /* LVal  */
  YYSYMBOL_PrimaryExp = 71,                /* PrimaryExp  */
  YYSYMBOL_Number = 72,                    /* Number  */
  YYSYMBOL_UnaryExp = 73,                  /* UnaryExp  */
  YYSYMBOL_FuncCall = 74,                  /* FuncCall  */
  YYSYMBOL_UnaryOp = 75,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 76,               /* FuncRParams  */
  YYSYMBOL_MulExp = 77,                    /* MulExp  */
  YYSYMBOL_MulOp = 78,                     /* MulOp  */
  YYSYMBOL_AddExp = 79,                    /* AddExp  */
  YYSYMBOL_AddOp = 80,                     /* AddOp  */
  YYSYMBOL_RelExp = 81,                    /* RelExp  */
  YYSYMBOL_RelOp = 82,                     /* RelOp  */
  YYSYMBOL_EqExp = 83,                     /* EqExp  */
  YYSYMBOL_LAndExp = 84,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 85,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 86                   /* ConstExp  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    62,    67,    72,    76,    82,    83,    86,
      87,    90,    91,    94,    95,    97,    98,   103,   107,   108,
     110,   111,   112,   113,   117,   118,   122,   123,   124,   125,
     128,   132,   133,   135,   136,   137,   138,   141,   142,   143,
     144,   148,   149,   152,   153,   156,   157,   159,   163,   169,
     170,   177,   182,   183,   184,   185,   186,   187,   188,   189,
     191,   196,   203,   209,   211,   213,   217,   222,   225,   228,
     229,   234,   235,   236,   239,   240,   244,   245,   246,   248,
     249,   252,   253,   254,   257,   258,   260,   261,   263,   264,
     265,   268,   269,   271,   272,   275,   276,   278,   279,   280,
     281,   284,   285,   286,   289,   290,   293,   294,   297
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "INT_CONST",
  "FLOAT_CONST", "CONST", "INTT", "FLOATT", "COMMA", "SEMICOLON", "LBRACE",
  "RBRACE", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN", "ASSIGNN", "VOID",
  "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN", "ADDD", "SUBB",
  "MULL", "DIVV", "MODD", "GTT", "GEQQ", "LTT", "LEQQ", "EQQ", "NEQQ",
  "ANDD", "ORR", "NOTT", "LOWER_THAN_ELSE", "$accept", "Program",
  "CompUnit", "Decl", "ConstDecl", "BType", "ConstDef", "ArrayOpt",
  "ConstInitVal", "ConstInitArray", "ConstArrayBody", "VarDecl", "VarDef",
  "InitVal", "InitArray", "InitArrayBody", "FuncDef", "FuncFParams",
  "FuncFParam", "Block", "BlockItems", "BlockItem", "Stmt", "IfStmt",
  "WhileStmt", "BreakStmt", "ContinueStmt", "ReturnStmt", "Exp", "Cond",
  "LVal", "PrimaryExp", "Number", "UnaryExp", "FuncCall", "UnaryOp",
  "FuncRParams", "MulExp", "MulOp", "AddExp", "AddOp", "RelExp", "RelOp",
  "EqExp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-146)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,    53,  -146,  -146,    13,    30,    44,  -146,    78,    34,
      83,  -146,    42,    20,  -146,  -146,  -146,    42,  -146,    40,
    -146,    91,  -146,    95,  -146,    32,  -146,   232,    75,   232,
      12,   100,  -146,   232,   107,    87,   127,   115,   123,   118,
    -146,  -146,   232,  -146,  -146,  -146,   121,  -146,  -146,  -146,
    -146,   232,    43,    85,   122,    87,   119,  -146,  -146,    85,
      16,   232,  -146,  -146,  -146,   137,   139,  -146,   140,    87,
      53,    81,   136,   232,  -146,  -146,  -146,  -146,   232,  -146,
    -146,   232,  -146,  -146,    87,  -146,  -146,  -146,    68,   141,
      64,  -146,  -146,  -146,   142,   144,   146,   162,   190,  -146,
      91,  -146,   163,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
     166,   108,   167,  -146,  -146,  -146,  -146,     6,  -146,   165,
    -146,    43,  -146,   215,  -146,  -146,  -146,  -146,  -146,    69,
     232,   232,  -146,  -146,  -146,   171,  -146,  -146,  -146,   232,
     232,  -146,  -146,  -146,  -146,   218,  -146,   180,    85,    96,
      66,   147,   170,   183,  -146,   193,  -146,  -146,  -146,   187,
    -146,  -146,  -146,  -146,   232,   232,   232,   232,   232,   187,
    -146,   184,    85,    96,    96,    66,   147,  -146,   187,  -146
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    11,    12,     0,     0,     2,     5,     0,     0,
       0,     6,     0,     0,     1,     3,     4,     0,     7,    26,
      24,     0,     8,     0,     9,     0,    10,     0,     0,     0,
      27,    26,    25,     0,     0,     0,     0,     0,    42,    69,
      74,    75,     0,    81,    82,    83,    72,    76,    73,    86,
      77,     0,    91,   108,     0,     0,     0,    28,    30,    67,
       0,     0,    29,    13,    17,     0,     0,    40,    43,     0,
       0,     0,     0,     0,    78,    88,    89,    90,     0,    93,
      94,     0,    15,    38,     0,    31,    36,    35,     0,     0,
       0,    14,    53,    46,     0,     0,     0,     0,     0,    49,
       0,    54,     0,    47,    50,    55,    56,    57,    58,    59,
       0,    72,    44,    39,    41,    80,    84,     0,    71,     0,
      87,    92,    37,     0,    32,    16,    18,    23,    22,     0,
       0,     0,    63,    64,    66,     0,    45,    48,    52,     0,
       0,    79,    70,    34,    33,     0,    19,     0,    95,   101,
     104,   106,    68,     0,    65,     0,    85,    21,    20,     0,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
      51,    60,    96,   102,   103,   105,   107,    62,     0,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,    26,  -146,     7,   197,   -12,   -86,   -80,
    -146,  -146,   196,   -59,   -57,  -146,   221,   203,   154,   -26,
    -146,   130,  -145,  -146,  -146,  -146,  -146,  -146,   -24,   103,
     -64,  -146,  -146,   -34,  -146,  -146,  -146,   157,  -146,   -27,
    -146,   -43,  -146,    72,    74,  -146,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    99,     8,    36,    24,    30,    63,    91,
     129,    10,    20,    57,    62,    88,    11,    37,    38,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   147,
      46,    47,    48,    49,    50,    51,   117,    52,    78,    59,
      81,   149,   164,   150,   151,   152,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    86,   111,    87,   127,    58,    53,     9,    12,    67,
     128,    34,    54,     9,   171,   140,    13,    74,    72,    39,
      40,    41,   141,    60,   177,    61,     7,    60,    85,    83,
      14,    42,    15,   179,    53,    25,    58,    19,   111,     2,
       3,    43,    44,   113,   120,    23,    89,   116,    35,   119,
       1,     2,     3,    27,    45,    28,   112,    29,   122,   157,
       2,     3,     4,    53,   143,   158,   144,    39,    40,    41,
      75,    76,    77,   100,   135,    90,   126,   123,   145,    42,
     124,   146,     2,     3,    39,    40,    41,    17,    18,    43,
      44,    55,    21,    22,    31,   111,    42,   115,    66,    58,
     165,   166,    45,   148,   148,   111,    43,    44,    27,   100,
      79,    80,    33,    27,   111,   155,   156,    29,    53,    45,
      61,    73,   173,   174,    65,   139,   160,   161,   162,   163,
      68,    69,    70,    71,    73,    84,    82,   172,   148,   148,
     148,   148,    39,    40,    41,     1,     2,     3,    90,    92,
      66,    93,   118,    27,    42,   125,   132,   130,    94,   131,
      95,    96,    97,    98,    43,    44,    39,    40,    41,     1,
       2,     3,   133,    92,    66,   136,   138,    45,    42,   142,
      61,   154,    94,   167,    95,    96,    97,    98,    43,    44,
      39,    40,    41,    39,    40,    41,   159,    92,    66,   169,
     134,    45,    42,   170,   178,    42,    94,   168,    95,    96,
      97,    98,    43,    44,    26,    43,    44,    32,    39,    40,
      41,    39,    40,    41,   114,    45,    60,    16,    45,    90,
      42,    56,   137,    42,   153,    39,    40,    41,   121,   175,
      43,    44,   176,    43,    44,     0,     0,    42,     0,     0,
       0,     0,     0,    45,     0,     0,    45,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45
};

static const yytype_int16 yycheck[] =
{
      27,    60,    66,    60,    90,    29,    33,     0,     1,    35,
      90,    23,    27,     6,   159,     9,     3,    51,    42,     3,
       4,     5,    16,    11,   169,    13,     0,    11,    12,    55,
       0,    15,     6,   178,    61,    15,    60,     3,   102,     7,
       8,    25,    26,    69,    78,     3,    61,    71,    16,    73,
       6,     7,     8,    13,    38,    15,    68,    17,    84,   145,
       7,     8,    18,    90,   123,   145,   123,     3,     4,     5,
      27,    28,    29,    66,    98,    11,    12,     9,     9,    15,
      12,    12,     7,     8,     3,     4,     5,     9,    10,    25,
      26,    16,     9,    10,     3,   159,    15,    16,    11,   123,
      34,    35,    38,   130,   131,   169,    25,    26,    13,   102,
      25,    26,    17,    13,   178,   139,   140,    17,   145,    38,
      13,    13,   165,   166,    17,    17,    30,    31,    32,    33,
       3,    16,     9,    15,    13,    16,    14,   164,   165,   166,
     167,   168,     3,     4,     5,     6,     7,     8,    11,    10,
      11,    12,    16,    13,    15,    14,    10,    15,    19,    15,
      21,    22,    23,    24,    25,    26,     3,     4,     5,     6,
       7,     8,    10,    10,    11,    12,    10,    38,    15,    14,
      13,    10,    19,    36,    21,    22,    23,    24,    25,    26,
       3,     4,     5,     3,     4,     5,    16,    10,    11,    16,
      10,    38,    15,    10,    20,    15,    19,    37,    21,    22,
      23,    24,    25,    26,    17,    25,    26,    21,     3,     4,
       5,     3,     4,     5,    70,    38,    11,     6,    38,    11,
      15,    28,   102,    15,   131,     3,     4,     5,    81,   167,
      25,    26,   168,    25,    26,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    38,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,    18,    41,    42,    43,    44,    45,
      51,    56,    45,     3,     0,    43,    56,     9,    10,     3,
      52,     9,    10,     3,    46,    15,    46,    13,    15,    17,
      47,     3,    52,    17,    47,    16,    45,    57,    58,     3,
       4,     5,    15,    25,    26,    38,    70,    71,    72,    73,
      74,    75,    77,    79,    86,    16,    57,    53,    68,    79,
      11,    13,    54,    48,    86,    17,    11,    59,     3,    16,
       9,    15,    68,    13,    73,    27,    28,    29,    78,    25,
      26,    80,    14,    59,    16,    12,    53,    54,    55,    86,
      11,    49,    10,    12,    19,    21,    22,    23,    24,    43,
      45,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    70,    47,    59,    58,    16,    68,    76,    16,    68,
      73,    77,    59,     9,    12,    14,    12,    48,    49,    50,
      15,    15,    10,    10,    10,    68,    12,    61,    10,    17,
       9,    16,    14,    53,    54,     9,    12,    69,    79,    81,
      83,    84,    85,    69,    10,    68,    68,    48,    49,    16,
      30,    31,    32,    33,    82,    34,    35,    36,    37,    16,
      10,    62,    79,    81,    81,    83,    84,    62,    20,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    42,    43,    43,    44,
      44,    45,    45,    46,    46,    47,    47,    48,    49,    49,
      50,    50,    50,    50,    51,    51,    52,    52,    52,    52,
      53,    54,    54,    55,    55,    55,    55,    56,    56,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    65,    66,    67,    67,    68,    69,    70,
      70,    71,    71,    71,    72,    72,    73,    73,    73,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    85,    85,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     2,     2,     3,
       3,     1,     1,     3,     4,     3,     4,     1,     2,     3,
       3,     3,     1,     1,     2,     3,     1,     2,     3,     3,
       1,     2,     3,     3,     3,     1,     1,     6,     5,     6,
       5,     3,     1,     2,     3,     3,     2,     1,     2,     1,
       1,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     5,     2,     2,     3,     2,     1,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     1,     3,     1
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
  case 2: /* Program: CompUnit  */
#line 58 "yacc.y"
                  {
    root = (yyvsp[0].compUnit);
}
#line 1442 "y.tab.c"
    break;

  case 3: /* CompUnit: CompUnit Decl  */
#line 62 "yacc.y"
                        { 
    std::shared_ptr<Front::Stmt> tmp((yyvsp[0].stmt));
    auto unit = std::make_shared<Front::CompUnit>(tmp);
    (yyval.compUnit)->push_back(unit);
}
#line 1452 "y.tab.c"
    break;

  case 4: /* CompUnit: CompUnit FuncDef  */
#line 67 "yacc.y"
                       {
    std::shared_ptr<Front::Stmt> tmp((yyvsp[0].stmt));
    auto unit = std::make_shared<Front::CompUnit>(tmp);
    (yyval.compUnit)->push_back(unit);
}
#line 1462 "y.tab.c"
    break;

  case 5: /* CompUnit: Decl  */
#line 72 "yacc.y"
           {
    std::shared_ptr<Front::Stmt> unit((yyvsp[0].stmt));
    (yyval.compUnit) = new Front::CompUnit(unit);
}
#line 1471 "y.tab.c"
    break;

  case 6: /* CompUnit: FuncDef  */
#line 76 "yacc.y"
              {
    std::shared_ptr<Front::Stmt> unit((yyvsp[0].stmt));
    (yyval.compUnit) = new Front::CompUnit(unit);
}
#line 1480 "y.tab.c"
    break;

  case 7: /* Decl: ConstDecl SEMICOLON  */
#line 82 "yacc.y"
                          { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1486 "y.tab.c"
    break;

  case 8: /* Decl: VarDecl SEMICOLON  */
#line 83 "yacc.y"
                        { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1492 "y.tab.c"
    break;

  case 9: /* ConstDecl: CONST BType ConstDef  */
#line 86 "yacc.y"
                                {}
#line 1498 "y.tab.c"
    break;

  case 10: /* ConstDecl: ConstDecl COMMA ConstDef  */
#line 87 "yacc.y"
                               {}
#line 1504 "y.tab.c"
    break;

  case 11: /* BType: INTT  */
#line 90 "yacc.y"
            { (yyval.type) |= Front::Type::INT; }
#line 1510 "y.tab.c"
    break;

  case 12: /* BType: FLOATT  */
#line 91 "yacc.y"
             { (yyval.type) |= Front::Type::FLOAT; }
#line 1516 "y.tab.c"
    break;

  case 13: /* ConstDef: IDENT ASSIGNN ConstInitVal  */
#line 94 "yacc.y"
                                     {}
#line 1522 "y.tab.c"
    break;

  case 14: /* ConstDef: IDENT ArrayOpt ASSIGNN ConstInitArray  */
#line 95 "yacc.y"
                                            {}
#line 1528 "y.tab.c"
    break;

  case 15: /* ArrayOpt: LBRACKET ConstExp RBRACKET  */
#line 97 "yacc.y"
                                     {}
#line 1534 "y.tab.c"
    break;

  case 16: /* ArrayOpt: ArrayOpt LBRACKET ConstExp RBRACKET  */
#line 98 "yacc.y"
                                          {}
#line 1540 "y.tab.c"
    break;

  case 17: /* ConstInitVal: ConstExp  */
#line 103 "yacc.y"
                       {}
#line 1546 "y.tab.c"
    break;

  case 18: /* ConstInitArray: LBRACE RBRACE  */
#line 107 "yacc.y"
                              {}
#line 1552 "y.tab.c"
    break;

  case 19: /* ConstInitArray: LBRACE ConstArrayBody RBRACE  */
#line 108 "yacc.y"
                                   {}
#line 1558 "y.tab.c"
    break;

  case 20: /* ConstArrayBody: ConstArrayBody COMMA ConstInitArray  */
#line 110 "yacc.y"
                                                    {}
#line 1564 "y.tab.c"
    break;

  case 21: /* ConstArrayBody: ConstArrayBody COMMA ConstInitVal  */
#line 111 "yacc.y"
                                        {}
#line 1570 "y.tab.c"
    break;

  case 22: /* ConstArrayBody: ConstInitArray  */
#line 112 "yacc.y"
                     {}
#line 1576 "y.tab.c"
    break;

  case 23: /* ConstArrayBody: ConstInitVal  */
#line 113 "yacc.y"
                   {}
#line 1582 "y.tab.c"
    break;

  case 24: /* VarDecl: BType VarDef  */
#line 117 "yacc.y"
                      {}
#line 1588 "y.tab.c"
    break;

  case 25: /* VarDecl: VarDecl COMMA VarDef  */
#line 118 "yacc.y"
                           {}
#line 1594 "y.tab.c"
    break;

  case 26: /* VarDef: IDENT  */
#line 122 "yacc.y"
              { std::string name = std::string((yyvsp[0].name)); (yyval.stmt) = new Front::VarStmt(name); }
#line 1600 "y.tab.c"
    break;

  case 27: /* VarDef: IDENT ArrayOpt  */
#line 123 "yacc.y"
                     {}
#line 1606 "y.tab.c"
    break;

  case 28: /* VarDef: IDENT ASSIGNN InitVal  */
#line 124 "yacc.y"
                            { std::string name = std::string((yyvsp[-2].name)); auto var = new Front::VarStmt(name); std::shared_ptr<Front::Stmt> val((yyvsp[0].stmt)); var->push_back(val); (yyval.stmt) = var; }
#line 1612 "y.tab.c"
    break;

  case 29: /* VarDef: IDENT ArrayOpt InitArray  */
#line 125 "yacc.y"
                               {}
#line 1618 "y.tab.c"
    break;

  case 30: /* InitVal: Exp  */
#line 128 "yacc.y"
             { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1624 "y.tab.c"
    break;

  case 31: /* InitArray: LBRACE RBRACE  */
#line 132 "yacc.y"
                         {}
#line 1630 "y.tab.c"
    break;

  case 32: /* InitArray: LBRACE InitArrayBody RBRACE  */
#line 133 "yacc.y"
                                  {}
#line 1636 "y.tab.c"
    break;

  case 33: /* InitArrayBody: InitArrayBody COMMA InitArray  */
#line 135 "yacc.y"
                                             {}
#line 1642 "y.tab.c"
    break;

  case 34: /* InitArrayBody: InitArrayBody COMMA InitVal  */
#line 136 "yacc.y"
                                  {}
#line 1648 "y.tab.c"
    break;

  case 35: /* InitArrayBody: InitArray  */
#line 137 "yacc.y"
                {}
#line 1654 "y.tab.c"
    break;

  case 36: /* InitArrayBody: InitVal  */
#line 138 "yacc.y"
              {}
#line 1660 "y.tab.c"
    break;

  case 37: /* FuncDef: BType IDENT LPAREN FuncFParams RPAREN Block  */
#line 141 "yacc.y"
                                                     {}
#line 1666 "y.tab.c"
    break;

  case 38: /* FuncDef: BType IDENT LPAREN RPAREN Block  */
#line 142 "yacc.y"
                                      {}
#line 1672 "y.tab.c"
    break;

  case 39: /* FuncDef: VOID IDENT LPAREN FuncFParams RPAREN Block  */
#line 143 "yacc.y"
                                                 {}
#line 1678 "y.tab.c"
    break;

  case 40: /* FuncDef: VOID IDENT LPAREN RPAREN Block  */
#line 144 "yacc.y"
                                     {}
#line 1684 "y.tab.c"
    break;

  case 41: /* FuncFParams: FuncFParam COMMA FuncFParam  */
#line 148 "yacc.y"
                                         {}
#line 1690 "y.tab.c"
    break;

  case 42: /* FuncFParams: FuncFParam  */
#line 149 "yacc.y"
                 {}
#line 1696 "y.tab.c"
    break;

  case 43: /* FuncFParam: BType IDENT  */
#line 152 "yacc.y"
                        {}
#line 1702 "y.tab.c"
    break;

  case 44: /* FuncFParam: BType IDENT ArrayOpt  */
#line 153 "yacc.y"
                           {}
#line 1708 "y.tab.c"
    break;

  case 45: /* Block: LBRACE BlockItems RBRACE  */
#line 156 "yacc.y"
                                { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1714 "y.tab.c"
    break;

  case 46: /* Block: LBRACE RBRACE  */
#line 157 "yacc.y"
                    { (yyval.stmt) = new Front::BlockStmt(); }
#line 1720 "y.tab.c"
    break;

  case 47: /* BlockItems: BlockItem  */
#line 159 "yacc.y"
                      {
    std::shared_ptr<Front::Stmt> stmt((yyvsp[0].stmt));
    (yyval.stmt) = new Front::BlockStmt(stmt);
}
#line 1729 "y.tab.c"
    break;

  case 48: /* BlockItems: BlockItems BlockItem  */
#line 163 "yacc.y"
                           {
    std::shared_ptr<Front::Stmt> stmt((yyvsp[0].stmt));
    (yyvsp[-1].stmt)->push_back(stmt); 
    (yyval.stmt) = (yyvsp[-1].stmt);
}
#line 1739 "y.tab.c"
    break;

  case 49: /* BlockItem: Decl  */
#line 169 "yacc.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1745 "y.tab.c"
    break;

  case 50: /* BlockItem: Stmt  */
#line 170 "yacc.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1751 "y.tab.c"
    break;

  case 51: /* Stmt: LVal ASSIGNN Exp SEMICOLON  */
#line 177 "yacc.y"
                                 { 
    std::shared_ptr<Front::Stmt> lval((yyvsp[-3].stmt));
    std::shared_ptr<Front::Stmt> rval((yyvsp[-1].stmt));
    (yyval.stmt) = new Front::AssignStmt(lval, rval);
}
#line 1761 "y.tab.c"
    break;

  case 52: /* Stmt: Exp SEMICOLON  */
#line 182 "yacc.y"
                    { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 1767 "y.tab.c"
    break;

  case 53: /* Stmt: SEMICOLON  */
#line 183 "yacc.y"
                { (yyval.stmt) = nullptr; }
#line 1773 "y.tab.c"
    break;

  case 54: /* Stmt: Block  */
#line 184 "yacc.y"
            { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1779 "y.tab.c"
    break;

  case 55: /* Stmt: IfStmt  */
#line 185 "yacc.y"
             { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1785 "y.tab.c"
    break;

  case 56: /* Stmt: WhileStmt  */
#line 186 "yacc.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1791 "y.tab.c"
    break;

  case 57: /* Stmt: BreakStmt  */
#line 187 "yacc.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1797 "y.tab.c"
    break;

  case 58: /* Stmt: ContinueStmt  */
#line 188 "yacc.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1803 "y.tab.c"
    break;

  case 59: /* Stmt: ReturnStmt  */
#line 189 "yacc.y"
                 { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1809 "y.tab.c"
    break;

  case 60: /* IfStmt: IF LPAREN Cond RPAREN Stmt  */
#line 191 "yacc.y"
                                                         {
    std::shared_ptr<Front::Stmt> cond((yyvsp[-2].stmt));
    std::shared_ptr<Front::Stmt> true_block((yyvsp[0].stmt));
    (yyval.stmt) = new Front::IfStmt(cond, true_block);
}
#line 1819 "y.tab.c"
    break;

  case 61: /* IfStmt: IF LPAREN Cond RPAREN Stmt ELSE Stmt  */
#line 196 "yacc.y"
                                           {
    std::shared_ptr<Front::Stmt> cond((yyvsp[-4].stmt));
    std::shared_ptr<Front::Stmt> true_block((yyvsp[-2].stmt));
    std::shared_ptr<Front::Stmt> false_block((yyvsp[0].stmt));
    (yyval.stmt) = new Front::IfStmt(cond, true_block, false_block);
}
#line 1830 "y.tab.c"
    break;

  case 62: /* WhileStmt: WHILE LPAREN Cond RPAREN Stmt  */
#line 203 "yacc.y"
                                         {
    std::shared_ptr<Front::Stmt> cond((yyvsp[-2].stmt));
    std::shared_ptr<Front::Stmt> true_block((yyvsp[0].stmt));
    (yyval.stmt) = new Front::WhileStmt(cond, true_block);
}
#line 1840 "y.tab.c"
    break;

  case 63: /* BreakStmt: BREAK SEMICOLON  */
#line 209 "yacc.y"
                           { (yyval.stmt) = new Front::BreakStmt(); }
#line 1846 "y.tab.c"
    break;

  case 64: /* ContinueStmt: CONTINUE SEMICOLON  */
#line 211 "yacc.y"
                                 { (yyval.stmt) = new Front::ContinueStmt(); }
#line 1852 "y.tab.c"
    break;

  case 65: /* ReturnStmt: RETURN Exp SEMICOLON  */
#line 213 "yacc.y"
                                 {
    std::shared_ptr<Front::Stmt> stmt((yyvsp[-1].stmt));
    (yyval.stmt) = new Front::ReturnStmt(stmt);
}
#line 1861 "y.tab.c"
    break;

  case 66: /* ReturnStmt: RETURN SEMICOLON  */
#line 217 "yacc.y"
                       {
    (yyval.stmt) = new Front::ReturnStmt();
}
#line 1869 "y.tab.c"
    break;

  case 67: /* Exp: AddExp  */
#line 222 "yacc.y"
            { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1875 "y.tab.c"
    break;

  case 68: /* Cond: LOrExp  */
#line 225 "yacc.y"
             { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1881 "y.tab.c"
    break;

  case 69: /* LVal: IDENT  */
#line 228 "yacc.y"
            { std::string name((yyvsp[0].name)); (yyval.stmt) = new Front::VarStmt(name); }
#line 1887 "y.tab.c"
    break;

  case 70: /* LVal: LVal LBRACKET Exp RBRACKET  */
#line 229 "yacc.y"
                                 {

}
#line 1895 "y.tab.c"
    break;

  case 71: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 234 "yacc.y"
                              {}
#line 1901 "y.tab.c"
    break;

  case 72: /* PrimaryExp: LVal  */
#line 235 "yacc.y"
           {}
#line 1907 "y.tab.c"
    break;

  case 73: /* PrimaryExp: Number  */
#line 236 "yacc.y"
             {}
#line 1913 "y.tab.c"
    break;

  case 74: /* Number: INT_CONST  */
#line 239 "yacc.y"
                  {}
#line 1919 "y.tab.c"
    break;

  case 75: /* Number: FLOAT_CONST  */
#line 240 "yacc.y"
                  {}
#line 1925 "y.tab.c"
    break;

  case 76: /* UnaryExp: PrimaryExp  */
#line 244 "yacc.y"
                     {}
#line 1931 "y.tab.c"
    break;

  case 77: /* UnaryExp: FuncCall  */
#line 245 "yacc.y"
               {}
#line 1937 "y.tab.c"
    break;

  case 78: /* UnaryExp: UnaryOp UnaryExp  */
#line 246 "yacc.y"
                       {}
#line 1943 "y.tab.c"
    break;

  case 79: /* FuncCall: IDENT LPAREN FuncRParams RPAREN  */
#line 248 "yacc.y"
                                          {}
#line 1949 "y.tab.c"
    break;

  case 80: /* FuncCall: IDENT LPAREN RPAREN  */
#line 249 "yacc.y"
                          {}
#line 1955 "y.tab.c"
    break;

  case 81: /* UnaryOp: ADDD  */
#line 252 "yacc.y"
              { (yyval.op) = Front::Op::ADD; }
#line 1961 "y.tab.c"
    break;

  case 82: /* UnaryOp: SUBB  */
#line 253 "yacc.y"
           { (yyval.op) = Front::Op::SUB; }
#line 1967 "y.tab.c"
    break;

  case 83: /* UnaryOp: NOTT  */
#line 254 "yacc.y"
           {  }
#line 1973 "y.tab.c"
    break;

  case 84: /* FuncRParams: Exp  */
#line 257 "yacc.y"
                 {}
#line 1979 "y.tab.c"
    break;

  case 85: /* FuncRParams: FuncRParams COMMA Exp  */
#line 258 "yacc.y"
                            {}
#line 1985 "y.tab.c"
    break;

  case 86: /* MulExp: UnaryExp  */
#line 260 "yacc.y"
                 {}
#line 1991 "y.tab.c"
    break;

  case 87: /* MulExp: MulExp MulOp UnaryExp  */
#line 261 "yacc.y"
                            {}
#line 1997 "y.tab.c"
    break;

  case 88: /* MulOp: MULL  */
#line 263 "yacc.y"
            { (yyval.op) = Front::Op::MUL; }
#line 2003 "y.tab.c"
    break;

  case 89: /* MulOp: DIVV  */
#line 264 "yacc.y"
           { (yyval.op) = Front::Op::DIV; }
#line 2009 "y.tab.c"
    break;

  case 90: /* MulOp: MODD  */
#line 265 "yacc.y"
           { (yyval.op) = Front::Op::MOD; }
#line 2015 "y.tab.c"
    break;

  case 91: /* AddExp: MulExp  */
#line 268 "yacc.y"
               {}
#line 2021 "y.tab.c"
    break;

  case 92: /* AddExp: AddExp AddOp MulExp  */
#line 269 "yacc.y"
                          {}
#line 2027 "y.tab.c"
    break;

  case 93: /* AddOp: ADDD  */
#line 271 "yacc.y"
            { (yyval.op) = Front::Op::ADD; }
#line 2033 "y.tab.c"
    break;

  case 94: /* AddOp: SUBB  */
#line 272 "yacc.y"
           { (yyval.op) = Front::Op::SUB; }
#line 2039 "y.tab.c"
    break;

  case 95: /* RelExp: AddExp  */
#line 275 "yacc.y"
               {}
#line 2045 "y.tab.c"
    break;

  case 96: /* RelExp: RelExp RelOp AddExp  */
#line 276 "yacc.y"
                          {}
#line 2051 "y.tab.c"
    break;

  case 97: /* RelOp: GTT  */
#line 278 "yacc.y"
           { (yyval.op) = Front::Op::GT; }
#line 2057 "y.tab.c"
    break;

  case 98: /* RelOp: GEQQ  */
#line 279 "yacc.y"
           { (yyval.op) = Front::Op::GEQ; }
#line 2063 "y.tab.c"
    break;

  case 99: /* RelOp: LTT  */
#line 280 "yacc.y"
          {  (yyval.op) = Front::Op::LT; }
#line 2069 "y.tab.c"
    break;

  case 100: /* RelOp: LEQQ  */
#line 281 "yacc.y"
           { (yyval.op) = Front::Op::LEQ; }
#line 2075 "y.tab.c"
    break;

  case 101: /* EqExp: RelExp  */
#line 284 "yacc.y"
              {}
#line 2081 "y.tab.c"
    break;

  case 102: /* EqExp: EqExp EQQ RelExp  */
#line 285 "yacc.y"
                       {}
#line 2087 "y.tab.c"
    break;

  case 103: /* EqExp: EqExp NEQQ RelExp  */
#line 286 "yacc.y"
                        {}
#line 2093 "y.tab.c"
    break;

  case 104: /* LAndExp: EqExp  */
#line 289 "yacc.y"
               {}
#line 2099 "y.tab.c"
    break;

  case 105: /* LAndExp: LAndExp ANDD EqExp  */
#line 290 "yacc.y"
                         {}
#line 2105 "y.tab.c"
    break;

  case 106: /* LOrExp: LAndExp  */
#line 293 "yacc.y"
                {}
#line 2111 "y.tab.c"
    break;

  case 107: /* LOrExp: LOrExp ORR LAndExp  */
#line 294 "yacc.y"
                         {}
#line 2117 "y.tab.c"
    break;

  case 108: /* ConstExp: AddExp  */
#line 297 "yacc.y"
                 {}
#line 2123 "y.tab.c"
    break;


#line 2127 "y.tab.c"

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

#line 299 "yacc.y"

void yyerror(const char* s) {
    assert(false && "语法分析错误");
}
int main() {
    FILE* fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("未找到文件，程序异常退出\n"); 
        return 0;
    }
    extern FILE* yyin;
    yyin = fp;
	yyparse(); 
    root->analyze();
    fclose(fp);
    return 0;
}
