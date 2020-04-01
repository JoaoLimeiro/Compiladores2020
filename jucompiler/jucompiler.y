%{

#define NO_TYPE ""

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "functions.h"

    int yylex(void);

    void yyerror (const char *s);

s_Tree myprogram;

%}

%token <cval> ID STRLIT REALLIT RESERVED INTLIT

%type <tree> Program Declaring MethodDecl FieldDecl  MethodHeader MethodBody

%union{

    int ival;
    char * cval;
    s_Tree tree;
}



%token BOOLLIT PARSEINT AND ASSIGN STAR COMMA DIV EQ GE GT LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR ELSE INT DOUBLE RPAR RSQ

%token PLUS RBRACE SQ SEMICOLON ARROW LSHIFT RSHIFT XOR DOTLENGTH PRINT BOOL WHILE VOID STRING STATIC PUBLIC CLASS IF RETURN END



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

    	 ID LBRACE Declaring RBRACE       {    $$=myprogram=new_node("Program",NO_TYPE); 
                                                insert_node(myprogram,$3);
                                                }

        ;



Declaring:

         MethodDecl Declaring                   {$$=insert_node($2, $1);}    

    |    FieldDecl Declaring                    {$$=insert_node($2, $1);}

    |    SEMICOLON Declaring                    {$$=$2;}  

    |                                           /*{$$=$$;} */

    ;





MethodDecl:

        PUBLIC STATIC MethodHeader MethodBody      {$$=new_node("MethodDecl", NO_TYPE);
                                                    insert_node($$, $3);
                                                    insert_node($$, $4);
                                                    }

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

    |   Expr AND Expr1

    |   Expr OR Expr1

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

Expr1:

        Expr1 PLUS Expr

    |   Expr1 MINUS Expr

    |   Expr1 STAR Expr

    |   Expr1 DIV Expr

    |   Expr1 MOD Expr

    |   Expr1 XOR Expr

    |   Expr1 LSHIFT Expr

    |   Expr1 RSHIFT Expr

    |   Expr1 EQ Expr

    |   Expr1 GE Expr

    |   Expr1 GT Expr

    |   Expr1 LE Expr

    |   Expr1 LT Expr

    |   Expr1 NE Expr

    |   PLUS Expr

    |   MINUS Expr

    |   NOT Expr

    |   LPAR Expr RPAR

    |   LPAR error RPAR

    |   MethodInvocation 

    |   ParseArgs

    |   ID

    |   ID DOTLENGTH

    |   INTLIT

    |   REALLIT

    |   BOOLLIT

    ;

%%








