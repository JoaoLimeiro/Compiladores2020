%{



#include <stdio.h>

#include <stdlib.h>

#include <string.h>

    int yylex(void);

    void yyerror (const char *s);

%}



%union 

{

int ival;

char * cval;



}



%token BOOLLIT PARSEINT AND ASSIGN STAR COMMA DIV EQ GE GT LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR ELSE INT DOUBLE RPAR RSQ

%token PLUS RBRACE SQ SEMICOLON ARROW LSHIFT RSHIFT XOR DOTLENGTH PRINT BOOL WHILE VOID STRING STATIC PUBLIC CLASS IF RETURN 

%token <cval> ID STRLIT REALLIT RESERVED INTLIT



%nonassoc IF2

%nonassoc ELSE





%right ASSIGN

%left COMMA



%left OR

%left AND

%left XOR

%left LSHIFT RSHIFT

%left STAR

%left EQ NE

%left LT GT LE GE

%left PLUS MINUS

%left MUL DIV MOD



%right NOT





%%

Program: 



    	CLASS ID LBRACE Declaring RBRACE

        ;



Declaring:

         MethodDecl Declaring

    |    FieldDecl Declaring

    |    SEMICOLON Declaring

    |





    ;





MethodDecl:

        PUBLIC STATIC MethodHeader MethodBody

        ;

    

FieldDecl:

        PUBLIC STATIC Type ID CommaId SEMICOLON

    |   error SEMICOLON

        ;





CommaId:

    |   COMMA ID CommaId



    ;





Type:

         BOOL

    |    INT

    |    DOUBLE

    

    ;



MethodHeader:

        VOID ID LPAR FormalParams RPAR

    |   Type ID LPAR FormalParams RPAR

    ;



FormalParams:

       Type ID CommaTypeId

    |  STRING LSQ RSQ ID

    |

    ;



CommaTypeId:

       COMMA Type ID CommaTypeId

    |

    ;



MethodBody:

       LBRACE StatementVarDecl RBRACE

    ;



StatementVarDecl:

        Statement StatementVarDecl

    |   VarDecl StatementVarDecl

    |   

    ;



VarDecl:

       Type ID CommaId SEMICOLON

    ;



Statement:

        LBRACE Statement2 RBRACE

    |   IF LPAR Expr RPAR Statement %prec IF2

    |   IF LPAR Expr RPAR Statement ELSE Statement

    |   WHILE LPAR Expr RPAR Statement

    |   RETURN ExprSemicolon

    |   MethodInvAssParseArgs SEMICOLON

    |   PRINT LPAR ExprOrStrlit RPAR SEMICOLON

    ;



Statement2:

	Statement Statement2

    |

;





ExprSemicolon:

	Expr SEMICOLON

    |	SEMICOLON

;



ExprOrStrlit:

	Expr

    |	STRLIT

;







MethodInvAssParseArgs:

        MethodInvocation

    |   Assignment

    |   ParseArgs

    |   error			

    |

    ;



MethodInvocation:

       ID LPAR Expr CommaExpr RPAR

    |  ID LPAR RPAR

    |  ID LPAR Expr error RPAR

    ;



CommaExpr:

        COMMA Expr CommaExpr
    | INTLIT
    | REALLIT 
    | BOOLLIT

    |

    ;



Assignment:

        ID ASSIGN Expr

    ;



ParseArgs:

        PARSEINT LPAR ID LSQ Expr RSQ RPAR

    |   PARSEINT LPAR ID error RPAR

    ;



Expr:

        Expr PLUS Expr

    |	Expr MINUS Expr

    |   Expr STAR Expr

    |   Expr DIV Expr

    |   Expr MOD Expr

    |   Expr AND Expr

    |   Expr OR Expr

    |   Expr XOR Expr

    |   Expr LSHIFT Expr

    |   Expr RSHIFT Expr

    |   Expr EQ Expr

    |   Expr GE Expr

    |   Expr GT Expr

    |   Expr LE Expr

    |   Expr LT Expr

    |   Expr NE Expr

    |   PLUS Expr

    |   MINUS Expr

    |   NOT Expr

    |   LPAR Expr RPAR

    |   LPAR error RPAR

    |   MethodInvocation 

    |   Assignment

    |   ParseArgs

    |   ID

    |   ID DOTLENGTH

    |   INTLIT

    |   REALLIT

    |   BOOLLIT

    ;









%%









