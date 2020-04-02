%{

#define NO_VALUE ""

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "functions.h"

    int yylex(void);

    void yyerror (const char *s);

s_Tree myprogram, tmp, tmp1;

%}
 
%token <cval> ID STRLIT REALLIT RESERVED INTLIT DOUBLE BOOL BOOLLIT VOID

%type <tree> Program Declaring MethodDecl FieldDecl  MethodHeader MethodBody Statement Type FormalParams CommaTypeId StatementVarDecl Statement2 Expr ExprSemicolon ExprOrStrlit MethodInvAssParseArgs MethodInvocation CommaExpr Assignment ParseArgs OtherExpr CommaId VarDecl

%union{

    int ival;
    char * cval;
    s_Tree tree;
}



%token PARSEINT AND ASSIGN STAR COMMA DIV EQ GE GT LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR ELSE INT RPAR RSQ

%token PLUS RBRACE SQ SEMICOLON ARROW LSHIFT RSHIFT XOR DOTLENGTH PRINT WHILE STRING STATIC PUBLIC CLASS IF RETURN END 



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

    	CLASS ID LBRACE Declaring RBRACE       {    $$=myprogram=new_node(NO_VALUE,"Program"); 
                                                    tmp=new_node($2, "Id");
                                                    insert_node($$, tmp);
                                                    insert_neighbor(tmp, $4);
                                                }

        ;



Declaring:

         MethodDecl Declaring                   {
                                                    $$=insert_neighbor($2, $1);
                                                    $$=$2;
                                                }    

    |    FieldDecl Declaring                    {
                                                    $$=insert_neighbor($2, $1);
                                                    $$=$2;
                                                }    

    |    SEMICOLON Declaring                    {$$=$2;}  

    |                                           {$$=$$;}

    ;





MethodDecl:

        PUBLIC STATIC MethodHeader MethodBody      {$$=new_node(NO_VALUE, "MethodDecl");
                                                    insert_node($$, $3);
                                                    insert_neighbor($3, $4);
                                                    }

        ;

    

FieldDecl:

        PUBLIC STATIC Type ID CommaId SEMICOLON     {   
                                                        $$=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node($$, $3);
                                                        tmp=new_node($4, "Id");
                                                        insert_neighbor($3, tmp);
                                                    }

    |   error SEMICOLON                             {$$=$$;} /* TODO verificar isto */

        ;





CommaId:

        COMMA ID CommaId                             {
                                                        $$=new_node($2, "Id");
                                                        $$=$3; 
                                                    }

    ;





Type:
    
         BOOL    {$$=new_node($1, "Bool");}

    |    INT        {$$=new_node(NO_VALUE, "Int");}

    |    DOUBLE     {$$=new_node($1, "Double");}

    

    ;



MethodHeader:

        VOID ID LPAR FormalParams RPAR          {   
                                                    $$=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node($$, tmp);
                                                    tmp1=new_node($2, "Id");
                                                    insert_neighbor(tmp, tmp1);
                                                    insert_neighbor(tmp1, $4);
                                                }

    |   Type ID LPAR FormalParams RPAR          {   
                                                    $$=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2, "Id");
                                                    insert_neighbor($1, tmp);
                                                    insert_neighbor(tmp, $4);
                                                }

    ;



FormalParams:

       Type ID CommaTypeId                      {   
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2, "Id");
                                                    insert_node($$, tmp);
                                                }

    |  STRING LSQ RSQ ID                        {
                                                    $$=new_node(NO_VALUE, "StringArray");
                                                    tmp=new_node($4, "Id");
                                                    insert_node($$, tmp);
                                                }

    |                                           {$$=$$;}

    ;



CommaTypeId:

       COMMA Type ID CommaTypeId                {   
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node($$, $2);
                                                    tmp=new_node($3, "Id");
                                                    insert_neighbor($2, tmp);
                                                    insert_neighbor($$, $4);
                                                }

    |                                           {$$=$$;}

    ;



MethodBody:

       LBRACE StatementVarDecl RBRACE           {   
                                                    $$=new_node(NO_VALUE, "MethodBody");
                                                    insert_neighbor($$, $2);
                                                }
    ;



StatementVarDecl:

        Statement StatementVarDecl              {   
                                                    insert_neighbor($2, $1);
                                                    $$=$2;
                                                }

    |   VarDecl StatementVarDecl                {   
                                                    $$=new_node(NO_VALUE, "VarDecl");
                                                    insert_neighbor($$, $1);
                                                    insert_neighbor($1, $2);
                                                }

    |                                           {$$=$$;}
 
    ;



VarDecl:

       Type ID CommaId SEMICOLON                {   
                                                    insert_node($$, $1);
                                                    tmp=new_node($2, "Id");
                                                    insert_neighbor($2, tmp);
                                                }

    ;



Statement:

        LBRACE Statement2 RBRACE                            {   
                                                                insert_node($$, $2);
                                                            }

    |   IF LPAR Expr RPAR Statement %prec IF2               {   
                                                                $$=new_node("NO_VALUE", "If");
                                                                insert_node($$, $3);
                                                                insert_neighbor($3, $5);

                                                                /* TODO isto do prec deve precisar de algo*/
                                                            }

    |   IF LPAR Expr RPAR Statement ELSE Statement          {   
                                                                $$=new_node(NO_VALUE, "If");
                                                                insert_node($$, $3);
                                                                insert_neighbor($3, $5);
                                                                tmp=new_node(NO_VALUE, "Else");
                                                                insert_neighbor($$, tmp);
                                                                insert_node(tmp, $7);

                                                            }

    |   WHILE LPAR Expr RPAR Statement                      {   
                                                                $$=new_node("NO_VALUE", "While");
                                                                insert_node($$, $3);
                                                                insert_neighbor($3, $5);
                                                            }  

    |   RETURN ExprSemicolon                                {   
                                                                $$=new_node("NO_VALUE", "Return");
                                                                insert_node($$, $2);
                                                            }

    |   MethodInvAssParseArgs SEMICOLON                     {   
                                                                $$=$1;
                                                            }  

    |   PRINT LPAR ExprOrStrlit RPAR SEMICOLON              {   
                                                                $$=new_node("NO_VALUE", "Print");
                                                                insert_node($$, $3);
                                                            }

    ;



Statement2:

	Statement Statement2                        {
                                                    $$=insert_neighbor($2, $1);
                                                    $$=$2;
                                                }    

    |                                           {$$=$$;}

;





ExprSemicolon:

	Expr SEMICOLON                             {
                                                    $$=insert_neighbor($$, $1);
                                                }    

    |	SEMICOLON                                 {$$=NULL;}   /*  rever isto */

;



ExprOrStrlit:

	Expr                                       {$$=$1;}

    |	STRLIT                                     {   
                                                    $$=new_node($1, "StrLit");
                                                }

;



MethodInvAssParseArgs:

        MethodInvocation                        {   
                                                    $$=new_node(NO_VALUE, "Call");
                                                }         

    |   Assignment                              {   
                                                    $$=new_node(NO_VALUE, "Assign");
                                                }     

    |   ParseArgs                               {   
                                                    $$=new_node(NO_VALUE, "ParseArgs");
                                                }     

    |   error			                        {$$=$$;}

    |                                           {$$=$$;}

    ;



MethodInvocation:

       ID LPAR Expr CommaExpr RPAR          {
                                                $$=new_node($1, "Id");
                                                insert_neighbor($$, $3);
                                                insert_neighbor($3, $4);
                                            }

    |  ID LPAR RPAR                         {
                                                $$=new_node($1, "Id");
                                            }

    |  ID LPAR Expr error RPAR              {
                                                $$=new_node($1, "Id");
                                                insert_neighbor($$, $3);
                                                /* TODO verificar se devemos inserir o erro */
                                            }

    ;



CommaExpr:

        COMMA Expr CommaExpr                {
                                                insert_neighbor($$, $2);
                                            }
    | INTLIT                                {$$=new_node($1, "IntLit");}

    |                                       {$$=$$;}

    ;


Assignment:

        ID ASSIGN Expr                     {
                                                $$=new_node(NO_VALUE, "Assign");
                                                tmp=new_node($1, "Id");
                                                insert_node($$, tmp);
                                                insert_neighbor(tmp, $3);
                                            } 

    ;



ParseArgs:

        PARSEINT LPAR ID LSQ Expr RSQ RPAR  {
                                                $$=new_node(NO_VALUE, "ParseInt");
                                                tmp=new_node($3, "Id");
                                                insert_node($$, tmp);
                                                insert_neighbor(tmp, $5);
                                            } 

    |   PARSEINT LPAR ID error RPAR         {
                                                $$=new_node(NO_VALUE, "ParseInt");
                                                /*  TODO inserio o erro nao sei se devia */
                                            } 

    ;



Expr:
    Assignment                              {$$=new_node(NO_VALUE, "Assign");}
|   OtherExpr                               {$$=$1;}
;



OtherExpr:
        OtherExpr PLUS OtherExpr            {
                                                $$ = new_node(NO_VALUE,"Add");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr MINUS OtherExpr           {
                                                $$ = new_node(NO_VALUE,"Minus");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr STAR OtherExpr            {
                                                $$ = new_node(NO_VALUE,"Mul");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr DIV OtherExpr             {
                                                $$ = new_node(NO_VALUE,"Div");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr MOD OtherExpr             {
                                                $$ = new_node(NO_VALUE,"Mod");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr AND OtherExpr             {
                                                $$ = new_node(NO_VALUE,"And");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr OR OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Or");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr XOR OtherExpr             {
                                                $$ = new_node(NO_VALUE,"Xor");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr LSHIFT OtherExpr             {
                                                $$ = new_node(NO_VALUE,"LShift");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr RSHIFT OtherExpr          {
                                                $$ = new_node(NO_VALUE,"RShift");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr EQ OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Equak");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr GE OtherExpr              {
                                                $$ = new_node(NO_VALUE,"GE");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr GT OtherExpr              {
                                                $$ = new_node(NO_VALUE,"GT");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr LE OtherExpr              {
                                                $$ = new_node(NO_VALUE,"LE");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr LT OtherExpr              {
                                                $$ = new_node(NO_VALUE,"LT");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   OtherExpr NE OtherExpr              {
                                                $$ = new_node(NO_VALUE,"NE");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }

    |   PLUS OtherExpr                      {
                                                $$ = new_node(NO_VALUE,"Add");
                                                insert_node($$,$2);
                                            }

    |   MINUS OtherExpr                     {
                                                $$ = new_node(NO_VALUE,"Minus");
                                                insert_node($$,$2);
                                            }

    |   NOT OtherExpr                       {
                                                $$ = new_node(NO_VALUE,"Not");
                                                insert_node($$,$2);
                                            }

    |   LPAR Expr RPAR                      {
                                                $$=$2;
                                            }

    |   LPAR error RPAR                     {
                                                $$=$$;
                                            }

    |   MethodInvocation                    {   
                                                $$=new_node(NO_VALUE, "Call");
                                            }        

    |   ParseArgs                           {   
                                                $$=new_node(NO_VALUE, "ParseArgs");
                                            } 

    |   ID                                  {
                                                $$=new_node($1, "Id");
                                            }

    |   ID DOTLENGTH                        {
                                                $$=new_node($1, "Id");
                                            }

    |   INTLIT                              {$$=new_node($1, "IntLit");}

    |   REALLIT                             {$$=new_node($1, "RealLit");}
    
    |   BOOLLIT                              {$$=new_node($1, "BoolLit");}

    ;
%%






