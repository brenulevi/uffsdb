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
#line 1 "interface/yacc.y"

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#ifndef FMACROS
   #include "../macros.h"
#endif
#ifndef FTYPES
   #include "../types.h"
#endif
#ifndef FMISC
   #include "../misc.h"
#endif
#ifndef FDICTIONARY
   #include "../dictionary.h"
#endif
#ifndef FSQLCOMMANDS
   #include "../sqlcommands.h"
#endif
#ifndef FDATABASE
   #include "../database.h"
#endif
#ifndef FPARSER
   #include "parser.h"
#endif

extern char* yytext[];
extern FILE * yyin;
extern FILE* outFile_p;

int yywrap() {
    return 1;
}


#line 108 "interface/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INSERT = 3,                     /* INSERT  */
  YYSYMBOL_INTO = 4,                       /* INTO  */
  YYSYMBOL_VALUES = 5,                     /* VALUES  */
  YYSYMBOL_SELECT = 6,                     /* SELECT  */
  YYSYMBOL_FROM = 7,                       /* FROM  */
  YYSYMBOL_CREATE = 8,                     /* CREATE  */
  YYSYMBOL_TABLE = 9,                      /* TABLE  */
  YYSYMBOL_INTEGER = 10,                   /* INTEGER  */
  YYSYMBOL_VARCHAR = 11,                   /* VARCHAR  */
  YYSYMBOL_DOUBLE = 12,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_PRIMARY = 14,                   /* PRIMARY  */
  YYSYMBOL_KEY = 15,                       /* KEY  */
  YYSYMBOL_REFERENCES = 16,                /* REFERENCES  */
  YYSYMBOL_DATABASE = 17,                  /* DATABASE  */
  YYSYMBOL_DROP = 18,                      /* DROP  */
  YYSYMBOL_OBJECT = 19,                    /* OBJECT  */
  YYSYMBOL_NUMBER = 20,                    /* NUMBER  */
  YYSYMBOL_VALUE = 21,                     /* VALUE  */
  YYSYMBOL_QUIT = 22,                      /* QUIT  */
  YYSYMBOL_LIST_TABLES = 23,               /* LIST_TABLES  */
  YYSYMBOL_LIST_TABLE = 24,                /* LIST_TABLE  */
  YYSYMBOL_CONNECT = 25,                   /* CONNECT  */
  YYSYMBOL_HELP = 26,                      /* HELP  */
  YYSYMBOL_LIST_DBASES = 27,               /* LIST_DBASES  */
  YYSYMBOL_CLEAR = 28,                     /* CLEAR  */
  YYSYMBOL_CONTR = 29,                     /* CONTR  */
  YYSYMBOL_WHERE = 30,                     /* WHERE  */
  YYSYMBOL_OPERADOR = 31,                  /* OPERADOR  */
  YYSYMBOL_RELACIONAL = 32,                /* RELACIONAL  */
  YYSYMBOL_LOGICO = 33,                    /* LOGICO  */
  YYSYMBOL_ASTERISCO = 34,                 /* ASTERISCO  */
  YYSYMBOL_SINAL = 35,                     /* SINAL  */
  YYSYMBOL_FECHA_P = 36,                   /* FECHA_P  */
  YYSYMBOL_ABRE_P = 37,                    /* ABRE_P  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_INDEX = 39,                     /* INDEX  */
  YYSYMBOL_ON = 40,                        /* ON  */
  YYSYMBOL_TBEGIN = 41,                    /* TBEGIN  */
  YYSYMBOL_END = 42,                       /* END  */
  YYSYMBOL_COMMIT = 43,                    /* COMMIT  */
  YYSYMBOL_ROLLBACK = 44,                  /* ROLLBACK  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '-'  */
  YYSYMBOL_48_ = 48,                       /* '+'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_start = 50,                     /* start  */
  YYSYMBOL_connection = 51,                /* connection  */
  YYSYMBOL_qualquer_coisa = 52,            /* qualquer_coisa  */
  YYSYMBOL_exit_program = 53,              /* exit_program  */
  YYSYMBOL_clear = 54,                     /* clear  */
  YYSYMBOL_parentesis_open = 55,           /* parentesis_open  */
  YYSYMBOL_parentesis_close = 56,          /* parentesis_close  */
  YYSYMBOL_table_attr = 57,                /* table_attr  */
  YYSYMBOL_list_tables = 58,               /* list_tables  */
  YYSYMBOL_list_databases = 59,            /* list_databases  */
  YYSYMBOL_help_pls = 60,                  /* help_pls  */
  YYSYMBOL_contributors = 61,              /* contributors  */
  YYSYMBOL_insert = 62,                    /* insert  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_semicolon = 64,                 /* semicolon  */
  YYSYMBOL_table = 65,                     /* table  */
  YYSYMBOL_opt_column_list = 66,           /* opt_column_list  */
  YYSYMBOL_column_list = 67,               /* column_list  */
  YYSYMBOL_column = 68,                    /* column  */
  YYSYMBOL_value_list = 69,                /* value_list  */
  YYSYMBOL_value = 70,                     /* value  */
  YYSYMBOL_create_table = 71,              /* create_table  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_table_column_attr = 73,         /* table_column_attr  */
  YYSYMBOL_type = 74,                      /* type  */
  YYSYMBOL_75_3 = 75,                      /* $@3  */
  YYSYMBOL_76_4 = 76,                      /* $@4  */
  YYSYMBOL_column_create = 77,             /* column_create  */
  YYSYMBOL_attribute = 78,                 /* attribute  */
  YYSYMBOL_table_fk = 79,                  /* table_fk  */
  YYSYMBOL_column_fk = 80,                 /* column_fk  */
  YYSYMBOL_drop_table = 81,                /* drop_table  */
  YYSYMBOL_82_5 = 82,                      /* $@5  */
  YYSYMBOL_83_6 = 83,                      /* $@6  */
  YYSYMBOL_create_database = 84,           /* create_database  */
  YYSYMBOL_85_7 = 85,                      /* $@7  */
  YYSYMBOL_86_8 = 86,                      /* $@8  */
  YYSYMBOL_drop_database = 87,             /* drop_database  */
  YYSYMBOL_88_9 = 88,                      /* $@9  */
  YYSYMBOL_89_10 = 89,                     /* $@10  */
  YYSYMBOL_select = 90,                    /* select  */
  YYSYMBOL_91_11 = 91,                     /* $@11  */
  YYSYMBOL_table_select = 92,              /* table_select  */
  YYSYMBOL_projecao = 93,                  /* projecao  */
  YYSYMBOL_94_12 = 94,                     /* $@12  */
  YYSYMBOL_95_13 = 95,                     /* $@13  */
  YYSYMBOL_projecao2 = 96,                 /* projecao2  */
  YYSYMBOL_97_14 = 97,                     /* $@14  */
  YYSYMBOL_where = 98,                     /* where  */
  YYSYMBOL_logicos = 99,                   /* logicos  */
  YYSYMBOL_100_15 = 100,                   /* $@15  */
  YYSYMBOL_adc_abre_p = 101,               /* adc_abre_p  */
  YYSYMBOL_repLogicos = 102,               /* repLogicos  */
  YYSYMBOL_103_16 = 103,                   /* $@16  */
  YYSYMBOL_relacoes = 104,                 /* relacoes  */
  YYSYMBOL_105_17 = 105,                   /* $@17  */
  YYSYMBOL_operacao = 106,                 /* operacao  */
  YYSYMBOL_107_18 = 107,                   /* $@18  */
  YYSYMBOL_108_19 = 108,                   /* $@19  */
  YYSYMBOL_operacao2 = 109,                /* operacao2  */
  YYSYMBOL_operador = 110,                 /* operador  */
  YYSYMBOL_sinal = 111,                    /* sinal  */
  YYSYMBOL_operando = 112,                 /* operando  */
  YYSYMBOL_create_index = 113,             /* create_index  */
  YYSYMBOL_114_20 = 114,                   /* $@20  */
  YYSYMBOL_atributo = 115,                 /* atributo  */
  YYSYMBOL_transaction = 116               /* transaction  */
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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
       2,     2,     2,    48,    46,    47,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    58,    58,
      58,    65,    67,    70,    72,    74,    76,    79,    89,    99,
     106,   109,   116,   116,   126,   128,   130,   130,   132,   132,
     134,   136,   136,   138,   139,   140,   143,   143,   148,   148,
     150,   151,   151,   151,   152,   153,   155,   157,   158,   159,
     161,   163,   166,   166,   166,   169,   169,   169,   172,   172,
     172,   175,   175,   178,   180,   181,   181,   182,   182,   184,
     185,   185,   187,   188,   190,   191,   191,   193,   195,   196,
     196,   198,   198,   200,   201,   202,   202,   203,   203,   205,
     206,   208,   209,   210,   212,   212,   214,   214,   215,   215,
     218,   218,   222,   226,   227,   228,   229
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
  "\"end of file\"", "error", "\"invalid token\"", "INSERT", "INTO",
  "VALUES", "SELECT", "FROM", "CREATE", "TABLE", "INTEGER", "VARCHAR",
  "DOUBLE", "CHAR", "PRIMARY", "KEY", "REFERENCES", "DATABASE", "DROP",
  "OBJECT", "NUMBER", "VALUE", "QUIT", "LIST_TABLES", "LIST_TABLE",
  "CONNECT", "HELP", "LIST_DBASES", "CLEAR", "CONTR", "WHERE", "OPERADOR",
  "RELACIONAL", "LOGICO", "ASTERISCO", "SINAL", "FECHA_P", "ABRE_P",
  "STRING", "INDEX", "ON", "TBEGIN", "END", "COMMIT", "ROLLBACK", "';'",
  "','", "'-'", "'+'", "$accept", "start", "connection", "qualquer_coisa",
  "exit_program", "clear", "parentesis_open", "parentesis_close",
  "table_attr", "list_tables", "list_databases", "help_pls",
  "contributors", "insert", "$@1", "semicolon", "table", "opt_column_list",
  "column_list", "column", "value_list", "value", "create_table", "$@2",
  "table_column_attr", "type", "$@3", "$@4", "column_create", "attribute",
  "table_fk", "column_fk", "drop_table", "$@5", "$@6", "create_database",
  "$@7", "$@8", "drop_database", "$@9", "$@10", "select", "$@11",
  "table_select", "projecao", "$@12", "$@13", "projecao2", "$@14", "where",
  "logicos", "$@15", "adc_abre_p", "repLogicos", "$@16", "relacoes",
  "$@17", "operacao", "$@18", "$@19", "operacao2", "operador", "sinal",
  "operando", "create_index", "$@20", "atributo", "transaction", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      37,    19,  -123,     8,     1,  -123,  -123,  -123,    11,    12,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,    36,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,    -8,
    -123,  -123,    -3,  -123,  -123,  -123,  -123,  -123,    23,  -123,
    -123,    25,    43,    23,    33,  -123,    39,    51,  -123,    34,
      26,  -123,    58,    34,  -123,    23,  -123,  -123,  -123,    65,
      83,    78,  -123,    26,  -123,    68,    80,    55,    34,    55,
      55,  -123,    66,    57,    34,  -123,    69,    48,    55,  -123,
      66,    81,  -123,    82,  -123,  -123,  -123,  -123,    65,    -6,
      26,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
      48,    71,    74,     7,    42,  -123,    55,  -123,  -123,  -123,
    -123,     5,  -123,    66,  -123,  -123,  -123,  -123,    66,    61,
    -123,    42,    72,    74,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,    48,  -123,  -123,    34,    94,    91,    67,    55,
      55,    -6,  -123,  -123,    75,    48,    48,    48,  -123,    92,
    -123,  -123,    77,    80,  -123,  -123,  -123,    71,    42,  -123,
    -123,  -123,  -123,    96,  -123,  -123,  -123,    66,  -123,    84,
    -123,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      19,     0,    71,     0,     0,    22,    23,    28,     0,     0,
      30,    29,    24,    31,   113,   114,   116,   115,    34,     0,
      10,    18,    11,    15,     8,     9,    14,    13,    16,     2,
      12,     4,     6,     5,     7,     3,    17,    20,    32,     0,
      46,    65,     0,    62,    68,    27,    21,     1,     0,    75,
      74,     0,     0,     0,     0,   110,     0,     0,    35,    36,
      79,    77,     0,     0,    66,     0,    63,    69,    25,     0,
       0,     0,    76,    79,    73,    82,     0,     0,     0,     0,
       0,    40,     0,    38,     0,    80,     0,     0,     0,    56,
       0,     0,    67,     0,    64,    70,    26,    37,     0,     0,
      79,    78,    95,   109,   108,    87,    93,   104,   105,    83,
       0,    88,     0,     0,    99,    72,     0,    50,    51,    54,
      55,    57,   112,     0,    39,    44,    43,    45,     0,    41,
      81,    99,     0,    97,    89,    84,    91,   107,   106,   102,
     101,    94,     0,   103,    47,     0,     0,     0,    48,     0,
       0,     0,    96,    85,     0,     0,     0,     0,   100,     0,
      58,    60,     0,     0,   111,    33,    42,    88,    99,    90,
      92,    97,    52,     0,    49,    86,    98,     0,    61,     0,
      53,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,  -123,   -62,   -90,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,   -75,   -41,  -123,    18,  -123,
     -34,  -123,  -123,  -123,   -45,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,   -65,  -123,  -123,
    -104,  -123,  -108,   -48,  -123,  -123,  -123,  -103,  -123,  -123,
    -122,  -123,  -111,  -123,  -123,  -123,  -123,  -123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    19,    20,    21,    22,    23,    69,    97,    24,    25,
      26,    27,    28,    29,    48,    30,    59,    70,    82,    83,
     128,   129,    31,    53,    90,   121,   145,   177,    91,   148,
     162,   179,    32,    56,    79,    33,    54,    77,    34,    57,
      80,    35,    39,    75,    52,    60,    73,    72,   100,    88,
     109,   167,   110,   135,   155,   111,   156,   112,   131,   154,
     141,   142,   113,   114,    36,    65,   123,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     116,    76,    92,   143,    94,    95,   132,   133,    86,   152,
      43,    49,    63,   115,   125,   126,    93,    40,    44,   146,
     143,   147,    99,    38,    78,    41,    50,   137,   138,    51,
      45,    46,   127,   149,   157,   130,    47,    55,   150,   158,
       1,   144,    58,     2,    61,     3,   176,    42,   157,   157,
      62,   169,    64,   170,   171,     4,     5,   143,    66,     6,
       7,     8,     9,    10,    11,    12,    13,   102,   103,   104,
      67,    68,    71,   139,   164,   165,   140,    74,    14,    15,
      16,    17,    18,   159,    81,   105,   106,   180,    84,   107,
     108,   117,   118,   119,   120,   107,   108,    85,    87,    89,
      18,   122,    96,    98,   134,   101,   136,   151,   153,   160,
     161,   168,   172,   163,   173,   178,   124,   166,   174,   175,
     181
};

static const yytype_uint8 yycheck[] =
{
      90,    63,    77,   114,    79,    80,   110,   110,    73,   131,
       9,    19,    53,    88,    20,    21,    78,     9,    17,    14,
     131,    16,    84,     4,    65,    17,    34,    20,    21,    37,
      19,    19,    38,   123,   142,   100,     0,    40,   128,   142,
       3,   116,    19,     6,    19,     8,   168,    39,   156,   157,
       7,   155,    19,   156,   157,    18,    19,   168,    19,    22,
      23,    24,    25,    26,    27,    28,    29,    19,    20,    21,
      19,    37,    46,    31,   149,   150,    34,    19,    41,    42,
      43,    44,    45,   145,    19,    37,    38,   177,     5,    47,
      48,    10,    11,    12,    13,    47,    48,    19,    30,    19,
      45,    19,    36,    46,    33,    36,    32,    46,    36,    15,
      19,    36,    20,    46,    37,    19,    98,   151,   163,   167,
      36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     8,    18,    19,    22,    23,    24,    25,
      26,    27,    28,    29,    41,    42,    43,    44,    45,    50,
      51,    52,    53,    54,    57,    58,    59,    60,    61,    62,
      64,    71,    81,    84,    87,    90,   113,   116,     4,    91,
       9,    17,    39,     9,    17,    19,    19,     0,    63,    19,
      34,    37,    93,    72,    85,    40,    82,    88,    19,    65,
      94,    19,     7,    65,    19,   114,    19,    19,    37,    55,
      66,    46,    96,    95,    19,    92,    55,    86,    65,    83,
      89,    19,    67,    68,     5,    19,    96,    30,    98,    19,
      73,    77,    64,    55,    64,    64,    36,    56,    46,    55,
      97,    36,    19,    20,    21,    37,    38,    47,    48,    99,
     101,   104,   106,   111,   112,    64,    56,    10,    11,    12,
      13,    74,    19,   115,    67,    20,    21,    38,    69,    70,
      96,   107,    99,   106,    33,   102,    32,    20,    21,    31,
      34,   109,   110,   111,    64,    75,    14,    16,    78,    56,
      56,    46,   109,    36,   108,   103,   105,   101,   106,    55,
      15,    19,    79,    46,    64,    64,    69,   100,    36,    99,
     106,   106,    20,    37,    73,   102,   109,    76,    19,    80,
      56,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    63,    62,    64,    65,    66,    66,    67,    67,
      68,    69,    69,    70,    70,    70,    72,    71,    73,    73,
      74,    75,    76,    74,    74,    74,    77,    78,    78,    78,
      79,    80,    82,    83,    81,    85,    86,    84,    88,    89,
      87,    91,    90,    92,    93,    94,    93,    95,    93,    96,
      97,    96,    98,    98,    99,   100,    99,   101,   102,   103,
     102,   105,   104,   106,   106,   107,   106,   108,   106,   109,
     109,   110,   110,   110,   111,   111,   112,   112,   112,   112,
     114,   113,   115,   116,   116,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     0,    10,     1,     1,     0,     3,     1,     3,
       1,     1,     3,     1,     1,     1,     0,     8,     3,     5,
       1,     0,     0,     6,     1,     1,     1,     0,     2,     5,
       1,     1,     0,     0,     6,     0,     0,     6,     0,     0,
       6,     0,     7,     1,     1,     0,     3,     0,     5,     0,
       0,     4,     0,     2,     2,     0,     5,     1,     0,     0,
       3,     0,     4,     1,     2,     0,     3,     0,     5,     0,
       2,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       0,     9,     1,     1,     1,     1,     1
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
  case 12: /* start: semicolon  */
#line 56 "interface/yacc.y"
                                                                        {GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1341 "interface/y.tab.c"
    break;

  case 21: /* connection: CONNECT OBJECT  */
#line 65 "interface/yacc.y"
                           {connect(*yytext); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1347 "interface/y.tab.c"
    break;

  case 22: /* qualquer_coisa: OBJECT  */
#line 67 "interface/yacc.y"
                       {GLOBAL_PARSER.consoleFlag = 1; GLOBAL_PARSER.noerror = 0; return 0;}
#line 1353 "interface/y.tab.c"
    break;

  case 23: /* exit_program: QUIT  */
#line 70 "interface/yacc.y"
                   {exit(0);}
#line 1359 "interface/y.tab.c"
    break;

  case 24: /* clear: CLEAR  */
#line 72 "interface/yacc.y"
             {clear(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1365 "interface/y.tab.c"
    break;

  case 25: /* parentesis_open: ABRE_P  */
#line 74 "interface/yacc.y"
                        {GLOBAL_PARSER.parentesis++;}
#line 1371 "interface/y.tab.c"
    break;

  case 26: /* parentesis_close: FECHA_P  */
#line 76 "interface/yacc.y"
                          {GLOBAL_PARSER.parentesis--;}
#line 1377 "interface/y.tab.c"
    break;

  case 27: /* table_attr: LIST_TABLE OBJECT  */
#line 79 "interface/yacc.y"
                              {
    if(connected.conn_active) {
        printTable(yylval.strval);
        GLOBAL_PARSER.consoleFlag = 1;
    } else
        notConnected();
    return 0;
}
#line 1390 "interface/y.tab.c"
    break;

  case 28: /* list_tables: LIST_TABLES  */
#line 89 "interface/yacc.y"
                         {
    if(connected.conn_active) {
        printTable(NULL);
        GLOBAL_PARSER.consoleFlag = 1;
    } else
        notConnected();
    return 0;
}
#line 1403 "interface/y.tab.c"
    break;

  case 29: /* list_databases: LIST_DBASES  */
#line 99 "interface/yacc.y"
                            {
    showDB();
    GLOBAL_PARSER.consoleFlag = 1;
    return 0;
}
#line 1413 "interface/y.tab.c"
    break;

  case 30: /* help_pls: HELP  */
#line 106 "interface/yacc.y"
               {help(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1419 "interface/y.tab.c"
    break;

  case 31: /* contributors: CONTR  */
#line 109 "interface/yacc.y"
                    {contr(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1425 "interface/y.tab.c"
    break;

  case 32: /* $@1: %empty  */
#line 116 "interface/yacc.y"
                    {setMode(OP_INSERT);}
#line 1431 "interface/y.tab.c"
    break;

  case 33: /* insert: INSERT INTO $@1 table opt_column_list VALUES parentesis_open value_list parentesis_close semicolon  */
#line 116 "interface/yacc.y"
                                                                                                                             {
    if (GLOBAL_PARSER.col_count == GLOBAL_PARSER.val_count || GLOBAL_DATA.columnName == NULL)
        GLOBAL_DATA.N = GLOBAL_PARSER.val_count;
    else {
        printf("ERROR: The column counter doesn't match the value counter.\n");
        GLOBAL_PARSER.noerror=0;
    }
    return 0;
}
#line 1445 "interface/y.tab.c"
    break;

  case 35: /* table: OBJECT  */
#line 128 "interface/yacc.y"
              {setObjName(yytext);}
#line 1451 "interface/y.tab.c"
    break;

  case 40: /* column: OBJECT  */
#line 134 "interface/yacc.y"
               {setColumnInsert(yytext);}
#line 1457 "interface/y.tab.c"
    break;

  case 43: /* value: VALUE  */
#line 138 "interface/yacc.y"
             {setValueInsert(yylval.strval, 'D');}
#line 1463 "interface/y.tab.c"
    break;

  case 44: /* value: NUMBER  */
#line 139 "interface/yacc.y"
              {setValueInsert(yylval.strval, 'I');}
#line 1469 "interface/y.tab.c"
    break;

  case 45: /* value: STRING  */
#line 140 "interface/yacc.y"
              {setValueInsert(yylval.strval, 'S');}
#line 1475 "interface/y.tab.c"
    break;

  case 46: /* $@2: %empty  */
#line 143 "interface/yacc.y"
                           {setMode(OP_CREATE_TABLE);}
#line 1481 "interface/y.tab.c"
    break;

  case 47: /* create_table: CREATE TABLE $@2 table parentesis_open table_column_attr parentesis_close semicolon  */
#line 143 "interface/yacc.y"
                                                                                                                          {
    GLOBAL_DATA.N = GLOBAL_PARSER.col_count;
    return 0;
}
#line 1490 "interface/y.tab.c"
    break;

  case 50: /* type: INTEGER  */
#line 150 "interface/yacc.y"
              {setColumnTypeCreate('I');}
#line 1496 "interface/y.tab.c"
    break;

  case 51: /* $@3: %empty  */
#line 151 "interface/yacc.y"
              {setColumnTypeCreate('S');}
#line 1502 "interface/y.tab.c"
    break;

  case 52: /* $@4: %empty  */
#line 151 "interface/yacc.y"
                                                                 {setColumnSizeCreate(yylval.strval);}
#line 1508 "interface/y.tab.c"
    break;

  case 54: /* type: DOUBLE  */
#line 152 "interface/yacc.y"
             {setColumnTypeCreate('D');}
#line 1514 "interface/y.tab.c"
    break;

  case 55: /* type: CHAR  */
#line 153 "interface/yacc.y"
           {setColumnTypeCreate('C');}
#line 1520 "interface/y.tab.c"
    break;

  case 56: /* column_create: OBJECT  */
#line 155 "interface/yacc.y"
                      {setColumnCreate(yytext);}
#line 1526 "interface/y.tab.c"
    break;

  case 58: /* attribute: PRIMARY KEY  */
#line 158 "interface/yacc.y"
                       {setColumnPKCreate();}
#line 1532 "interface/y.tab.c"
    break;

  case 60: /* table_fk: OBJECT  */
#line 161 "interface/yacc.y"
                 {setColumnFKTableCreate(yytext);}
#line 1538 "interface/y.tab.c"
    break;

  case 61: /* column_fk: OBJECT  */
#line 163 "interface/yacc.y"
                  {setColumnFKColumnCreate(yytext);}
#line 1544 "interface/y.tab.c"
    break;

  case 62: /* $@5: %empty  */
#line 166 "interface/yacc.y"
                       {setMode(OP_DROP_TABLE);}
#line 1550 "interface/y.tab.c"
    break;

  case 63: /* $@6: %empty  */
#line 166 "interface/yacc.y"
                                                        {setObjName(yytext);}
#line 1556 "interface/y.tab.c"
    break;

  case 64: /* drop_table: DROP TABLE $@5 OBJECT $@6 semicolon  */
#line 166 "interface/yacc.y"
                                                                                         {return 0;}
#line 1562 "interface/y.tab.c"
    break;

  case 65: /* $@7: %empty  */
#line 169 "interface/yacc.y"
                                 {setMode(OP_CREATE_DATABASE);}
#line 1568 "interface/y.tab.c"
    break;

  case 66: /* $@8: %empty  */
#line 169 "interface/yacc.y"
                                                                       {setObjName(yytext);}
#line 1574 "interface/y.tab.c"
    break;

  case 67: /* create_database: CREATE DATABASE $@7 OBJECT $@8 semicolon  */
#line 169 "interface/yacc.y"
                                                                                                       {return 0;}
#line 1580 "interface/y.tab.c"
    break;

  case 68: /* $@9: %empty  */
#line 172 "interface/yacc.y"
                             {setMode(OP_DROP_DATABASE);}
#line 1586 "interface/y.tab.c"
    break;

  case 69: /* $@10: %empty  */
#line 172 "interface/yacc.y"
                                                                 {setObjName(yytext);}
#line 1592 "interface/y.tab.c"
    break;

  case 70: /* drop_database: DROP DATABASE $@9 OBJECT $@10 semicolon  */
#line 172 "interface/yacc.y"
                                                                                                 {return 0;}
#line 1598 "interface/y.tab.c"
    break;

  case 71: /* $@11: %empty  */
#line 175 "interface/yacc.y"
               {setMode(OP_SELECT); resetSelect();}
#line 1604 "interface/y.tab.c"
    break;

  case 72: /* select: SELECT $@11 projecao FROM table_select where semicolon  */
#line 176 "interface/yacc.y"
                                          {return 0;}
#line 1610 "interface/y.tab.c"
    break;

  case 73: /* table_select: OBJECT  */
#line 178 "interface/yacc.y"
                     {adcTabelaSelect(yylval.strval);}
#line 1616 "interface/y.tab.c"
    break;

  case 74: /* projecao: ASTERISCO  */
#line 180 "interface/yacc.y"
                    {adcProjSelect(yylval.strval);}
#line 1622 "interface/y.tab.c"
    break;

  case 75: /* $@12: %empty  */
#line 181 "interface/yacc.y"
                  {adcProjSelect(yylval.strval);}
#line 1628 "interface/y.tab.c"
    break;

  case 77: /* $@13: %empty  */
#line 182 "interface/yacc.y"
                         {adcProjSelect(yylval.strval);}
#line 1634 "interface/y.tab.c"
    break;

  case 80: /* $@14: %empty  */
#line 185 "interface/yacc.y"
                       {adcProjSelect(yylval.strval);}
#line 1640 "interface/y.tab.c"
    break;

  case 85: /* $@15: %empty  */
#line 191 "interface/yacc.y"
                                      {adcTokenWhere(yylval.strval,6);}
#line 1646 "interface/y.tab.c"
    break;

  case 87: /* adc_abre_p: ABRE_P  */
#line 193 "interface/yacc.y"
                   {adcTokenWhere(yylval.strval,5);}
#line 1652 "interface/y.tab.c"
    break;

  case 89: /* $@16: %empty  */
#line 196 "interface/yacc.y"
                   {adcTokenWhere(*yytext,1);}
#line 1658 "interface/y.tab.c"
    break;

  case 91: /* $@17: %empty  */
#line 198 "interface/yacc.y"
                              {adcTokenWhere(yylval.strval,2);}
#line 1664 "interface/y.tab.c"
    break;

  case 93: /* operacao: STRING  */
#line 200 "interface/yacc.y"
                 {adcTokenWhere(yylval.strval,7);}
#line 1670 "interface/y.tab.c"
    break;

  case 95: /* $@18: %empty  */
#line 202 "interface/yacc.y"
                 {adcTokenWhere(yylval.strval,8);}
#line 1676 "interface/y.tab.c"
    break;

  case 97: /* $@19: %empty  */
#line 203 "interface/yacc.y"
                              {adcTokenWhere(yylval.strval,6);}
#line 1682 "interface/y.tab.c"
    break;

  case 101: /* operador: ASTERISCO  */
#line 208 "interface/yacc.y"
                    {adcTokenWhere(yylval.strval,4);}
#line 1688 "interface/y.tab.c"
    break;

  case 102: /* operador: OPERADOR  */
#line 209 "interface/yacc.y"
                   {adcTokenWhere(yylval.strval,4);}
#line 1694 "interface/y.tab.c"
    break;

  case 104: /* sinal: '-'  */
#line 212 "interface/yacc.y"
           {adcTokenWhere(*yytext,3);}
#line 1700 "interface/y.tab.c"
    break;

  case 105: /* sinal: '+'  */
#line 212 "interface/yacc.y"
                                             {adcTokenWhere(*yytext,3);}
#line 1706 "interface/y.tab.c"
    break;

  case 106: /* operando: sinal VALUE  */
#line 214 "interface/yacc.y"
                      {adcTokenWhere(yylval.strval,9);}
#line 1712 "interface/y.tab.c"
    break;

  case 107: /* operando: sinal NUMBER  */
#line 214 "interface/yacc.y"
                                                                       {adcTokenWhere(yylval.strval,9);}
#line 1718 "interface/y.tab.c"
    break;

  case 108: /* operando: VALUE  */
#line 215 "interface/yacc.y"
                {adcTokenWhere(yylval.strval,9);}
#line 1724 "interface/y.tab.c"
    break;

  case 109: /* operando: NUMBER  */
#line 215 "interface/yacc.y"
                                                           {adcTokenWhere(yylval.strval,9);}
#line 1730 "interface/y.tab.c"
    break;

  case 110: /* $@20: %empty  */
#line 218 "interface/yacc.y"
                              {setMode(OP_CREATE_INDEX);}
#line 1736 "interface/y.tab.c"
    break;

  case 111: /* create_index: CREATE INDEX ON $@20 table parentesis_open atributo parentesis_close semicolon  */
#line 218 "interface/yacc.y"
                                                                                                                    {
    return 0;
}
#line 1744 "interface/y.tab.c"
    break;

  case 112: /* atributo: OBJECT  */
#line 222 "interface/yacc.y"
                 {setColumnBtreeCreate(yytext);}
#line 1750 "interface/y.tab.c"
    break;

  case 113: /* transaction: TBEGIN  */
#line 226 "interface/yacc.y"
                    {begin_transaction(); return 0;}
#line 1756 "interface/y.tab.c"
    break;

  case 114: /* transaction: END  */
#line 227 "interface/yacc.y"
                  {end_transaction(ENDCOMMIT); return 0;}
#line 1762 "interface/y.tab.c"
    break;

  case 115: /* transaction: ROLLBACK  */
#line 228 "interface/yacc.y"
                       {end_transaction(ENDROLLBACK); return 0;}
#line 1768 "interface/y.tab.c"
    break;

  case 116: /* transaction: COMMIT  */
#line 229 "interface/yacc.y"
                     {commit_transaction(); return 0;}
#line 1774 "interface/y.tab.c"
    break;


#line 1778 "interface/y.tab.c"

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

#line 234 "interface/yacc.y"

