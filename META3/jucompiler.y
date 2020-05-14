%{

#define NO_VALUE ""
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

    int yylex(void);
    void yyerror (const char *s);

    int flagDontPrintTree = 0;

s_Tree myprogram, tmp, tmp1, tmp2;

int globalContador = 0;

extern int line, column, yyleng;

%}

%token <tok> ID STRLIT REALLIT RESERVED INTLIT DOUBLE BOOL BOOLLIT VOID PLUS RBRACE SQ SEMICOLON ARROW LSHIFT RSHIFT XOR DOTLENGTH PRINT WHILE STRING STATIC PUBLIC CLASS IF RETURN END PARSEINT AND ASSIGN STAR COMMA DIV EQ GE GT LBRACE LE LPAR LSQ LT MINUS MOD NE NOT OR ELSE INT RPAR RSQ

%type <tree> Program Declaring MethodDecl FieldDecl  MethodHeader MethodBody Statement Type FormalParams CommaTypeId StatementVarDecl Statement2 Expr ExprOrStrlit MethodInvAssParseArgs MethodInvocation CommaExpr Assignment ParseArgs OtherExpr CommaId CommaIdVarDecl VarDecl ExprSemicolon

%union{
    int ival;
    s_Token tok;
    s_Tree tree;
}

%nonassoc IF2
%nonassoc ELSE

%left COMMA
%right ASSIGN
%left OR
%left XOR
%left AND
%left EQ NE
%left LT GT LE GE
%left LSHIFT RSHIFT
%left PLUS MINUS
%left STAR DIV MOD
%left preced
%right NOT
%left LBRACE LPAR LSQ RSQ RPAR RBRACE



%%


Program:  

        CLASS ID LBRACE Declaring RBRACE       {    $$=myprogram=new_node(NO_VALUE,"Program");
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_node($$, tmp);
                                                    insert_neighbor(tmp, $4);
                                                    $$->line = line;
                                                    $$->col = column;
                                                }
        ;

Declaring:

         MethodDecl Declaring                   {  
                                                    insert_neighbor($1, $2);
                                                    
                                                } 
    |    FieldDecl Declaring                    {
                                                    insert_neighbor($1, $2);
                                                    $$=$1;
                                                } 

    |    SEMICOLON Declaring                    {$$=$2;}

    |                               {$$=NULL;}

    ;


MethodDecl:

        PUBLIC STATIC MethodHeader MethodBody      {
                                                        $$=new_node(NO_VALUE, "MethodDecl");
                                                        insert_node($$, $3);
                                                        insert_neighbor($3, $4);
                                                    }
        ;

FieldDecl:

        PUBLIC STATIC Type ID CommaId SEMICOLON     {  
                                                        $$=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node($$, $3);
                                                        tmp=new_node($4->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_neighbor($3, tmp);
                                                        insert_neighbor($$, $5);

                                                        tmp1 = $$;

                                                        while(tmp1 != NULL){
                                                            if( strcmp(tmp1->child->type,$$->child->type) ){
                                                                tmp = new_node(tmp1->child->value, tmp1->child->type);
                                                                tmp2 = new_node($$->child->value, $$->child->type);
                                                                insert_node(tmp1, tmp2);
                                                                insert_neighbor(tmp2, tmp);
                                                            }
                                                            tmp1 = tmp1->neighbor;
                                                        }  
                                                    }

    |   PUBLIC STATIC Type ID SEMICOLON             {  
                                                        $$=new_node(NO_VALUE, "FieldDecl");
                                                        insert_node($$, $3);
                                                        tmp=new_node($4->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_neighbor($3, tmp);
                                                    }


    |   error SEMICOLON                             {$$=NULL;flagDontPrintTree = 1;} /* TODO verificar isto */

    ;

CommaId:
        COMMA ID CommaId                             {
                                                        $$=new_node(NO_VALUE, "FieldDecl");
                                                        tmp=new_node($2->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node($$, tmp);
                                                        insert_neighbor($$, $3); 
                                                    }

    |   COMMA ID                                    {
                                                        $$=new_node(NO_VALUE, "FieldDecl");
                                                        tmp=new_node($2->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node($$, tmp);
                                                    }

    ;

Type:
         BOOL       {$$=new_node(NO_VALUE, "Bool");}

    |    INT        {$$=new_node(NO_VALUE, "Int");}

    |    DOUBLE     {$$=new_node(NO_VALUE, "Double");}

    ;

MethodHeader:

        VOID ID LPAR FormalParams RPAR          {  
                                                    $$=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node($$, tmp);
                                                    tmp1=new_node($2->cval, "Id");
                                                    tmp1->line = line;
                                                    tmp1->col = column;
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp);
                                                    insert_node(tmp, $4);
                                                    
                                                }

    |   VOID ID LPAR RPAR                       {  
                                                    $$=new_node(NO_VALUE, "MethodHeader");
                                                    tmp=new_node("", "Void");
                                                    insert_node($$, tmp);
                                                    tmp1=new_node($2->cval, "Id");
                                                    tmp1->line = line;
                                                    tmp1->col = column;
                                                    insert_neighbor(tmp, tmp1);
                                                    tmp2=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp1, tmp2);
                                                }

    |   Type ID LPAR FormalParams RPAR          {  
                                                    $$=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($1, tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                    insert_node(tmp1, $4);
                                                    
                                                }

    |   Type ID LPAR RPAR                       {
                                                    $$=new_node(NO_VALUE, "MethodHeader");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($1, tmp);
                                                    tmp1=new_node(NO_VALUE, "MethodParams");
                                                    insert_neighbor(tmp, tmp1);
                                                }

    ;

FormalParams:
       Type ID CommaTypeId                      {  
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($1, tmp);
                                                    insert_neighbor($$, $3);
                                                }
    |  STRING LSQ RSQ ID                        {
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    tmp=new_node(NO_VALUE, "StringArray");
                                                    tmp1=new_node($4->cval, "Id");
                                                    tmp1->line = line;
                                                    tmp1->col = column;
                                                    insert_node($$, tmp);
                                                    insert_neighbor(tmp, tmp1);
                                                }
    |   Type ID                                 {  
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($1, tmp);
                                                }

    ;

CommaTypeId:

       COMMA Type ID CommaTypeId                {  
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node($$, $2);
                                                    tmp=new_node($3->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($2, tmp);
                                                    insert_neighbor($$, $4);
                                                }

    |   COMMA Type ID                           {   
                                                    $$=new_node(NO_VALUE, "ParamDecl");
                                                    insert_node($$, $2);
                                                    tmp=new_node($3->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($2, tmp);
                                                }


    ;


MethodBody:

        LBRACE StatementVarDecl RBRACE           {  
                                                    $$=new_node(NO_VALUE, "MethodBody");
                                                    insert_node($$, $2);
                                                }

    |   LBRACE RBRACE                           {
                                                    $$=new_node(NO_VALUE, "MethodBody");
                                                }

    ;


StatementVarDecl:

        Statement StatementVarDecl              {  
                                                    if($1 != NULL){
                                                        insert_neighbor($1,$2);
                                                        $$=$1; 
                                                    }else{
                                                    $$= $2;
                                                    }
                                                    
                                                    
                                                }
    |   VarDecl StatementVarDecl                {
                                                    insert_neighbor($1,$2);
                                                    $$=$1;                                         
                                                }

    |   Statement                               {$$=$1;}

    |   VarDecl                                 {$$=$1;}
                                                
    ;

CommaIdVarDecl:
                                /* TODO verificar isto que tem um Type em falta no VarDecl    */
    COMMA ID CommaIdVarDecl                         {
                                                        $$=new_node(NO_VALUE, "VarDecl");
                                                        tmp=new_node($2->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node($$, tmp);
                                                        insert_neighbor($$, $3); 


                                                    }

    |   COMMA ID                                    {$$=new_node(NO_VALUE, "VarDecl");
                                                        tmp=new_node($2->cval, "Id");
                                                        tmp->line = line;
                                                        tmp->col = column;
                                                        insert_node($$, tmp);
                                                        }

    ;



VarDecl:

        Type ID CommaIdVarDecl SEMICOLON        {  
                                                    $$=new_node(NO_VALUE, "VarDecl");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($1, tmp);
                                                    insert_neighbor($$, $3);

                                                    tmp1 = $$;
                                                    while(tmp1 != NULL){
                                                        if( strcmp(tmp1->child->type,$$->child->type) ){
                                                            tmp = new_node(tmp1->child->value, tmp1->child->type);
                                                            tmp2 = new_node($$->child->value, $$->child->type);
                                                            insert_node(tmp1, tmp2);
                                                            insert_neighbor(tmp2, tmp);
                                                        }
                                                        tmp1 = tmp1->neighbor;
                                                    }  
                                                }

    |   Type ID SEMICOLON                       {  
                                                    $$=new_node(NO_VALUE, "VarDecl");
                                                    insert_node($$, $1);
                                                    tmp=new_node($2->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = column;
                                                    insert_neighbor($1, tmp);
                                                }
    ;


    Statement:

        LBRACE Statement2 RBRACE                            {  
                                                              
                                                               int flag = 1;
                                                               int contadorDentroWhile = 0;
                                                               tmp1 = $2;
                                                                

                                                                if(globalContador > 1){
                                                                    while(flag == 1){
                                                                        if(strcmp(tmp1->type,"Null") != 0 && strcmp(tmp1->type,"Block") != 0 ){
                                                                            tmp=new_node(NO_VALUE, "Block");
                                                                            tmp->child = tmp1;

                                                                            flag = 0;

                                                                                        
                                                                                    
                                                                        }else if(strcmp(tmp1->neighbor->type,"Null") == 0 ){
                                                                            tmp1 = tmp1->neighbor;
                                                                        }
                                                                        contadorDentroWhile++;
                                                                        tmp1 = tmp1->neighbor;
                                                                    } 

                                                                    
                                                                    globalContador = 0;
                                                                    $$=tmp;
                                                                }else{
                                                                
                                                                    $$=$2;
                                                                    globalContador = 0;
                                                                }
                                                            }

    |   LBRACE RBRACE                                       {$$=new_node(NO_VALUE, "Null");}

    |   IF LPAR Expr RPAR Statement %prec IF2               {  
                                                                $$=new_node(NO_VALUE, "If");
                                                                insert_node($$, $3);
                                                                if($5 != NULL){
                                                                    insert_neighbor($3, $5);
                                                                }

                                                               

                                                                int contador = 0;
                                                                tmp1 = $5;

                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0)
                                                                        contador++;
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                if(contador == 0){
                                                                    insert_neighbor($3, tmp);
                                                                } else if (contador > 1){
                                                                    insert_node(tmp, $3->neighbor);
                                                                    $3->neighbor = tmp;
                                                                }

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                insert_neighbor($3, tmp);

                                                                
                                                                /* TODO isto do prec deve precisar de algo*/
                                                            }
    |   IF LPAR Expr RPAR Statement ELSE Statement          {  

                                                                int contador1 = 0;
                                                                tmp1 = $5;

                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0)
                                                                        contador1++;
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                int contador2 = 0;
                                                                tmp1 = $7;

                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0){
                                                                        contador2++;
                                                                    }
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                tmp=new_node(NO_VALUE, "Block");
                                                                tmp1=new_node(NO_VALUE, "Block");

                                                                $$=new_node(NO_VALUE, "If");
                                                                insert_node($$, $3);

                                                                if($5 != NULL && contador1 != 0){
                                                                    if(contador1 > 1){
                                                                        insert_node($3, tmp);
                                                                        insert_neighbor(tmp, $5);
                                                                    }else{
                                                                        insert_neighbor($3, $5);
                                                                    }
                                                                    if($7 != NULL && contador2 != 0){
                                                                        if(contador2 > 1){
                                                                            insert_neighbor($5, tmp);
                                                                            insert_neighbor(tmp, $7);
                                                                        }else{
                                                                            insert_neighbor($5, $7);
                                                                        }
                                                                    }
                                                                }else{

                                                                    insert_neighbor($3, tmp); 

                                                                    if($7 != NULL && contador2 != 0){
                                                                        if(contador2 > 1){
                                                                            insert_neighbor(tmp, tmp1);
                                                                            insert_neighbor(tmp1, $7);
                                                                        }else{
                                                                            insert_neighbor(tmp, $7);
                                                                        }
                                                                    }else{
                                                                        insert_neighbor(tmp, tmp1);
                                                                    }
                                                                }

                                                            }
    |   WHILE LPAR Expr RPAR Statement                      {  
                                                                $$=new_node(NO_VALUE, "While");
                                                                insert_node($$, $3);

                                                                int contador = 0;
                                                                tmp1 = $5;
                                                                while(tmp1 != NULL){
                                                                    if(strcmp(tmp1->type, "Null") != 0)
                                                                        contador++;
                                                                    tmp1 = tmp1->neighbor;
                                                                }  

                                                                tmp=new_node(NO_VALUE, "Block");

                                                                if(contador == 0){
                                                                    insert_neighbor($3, tmp);
                                                                }else if(contador > 1){
                                                                    insert_neighbor($3, tmp);
                                                                    insert_node(tmp, $5);
                                                                }else{
                                                                    insert_neighbor($3, $5);
                                                                }
                                                                
                                                            }
   
    |   RETURN ExprSemicolon                                {  
                                                                $$=new_node(NO_VALUE, "Return");
                                                                if($2 != NULL)
                                                                    insert_node($$, $2);
                                                            }
    |   MethodInvAssParseArgs SEMICOLON                     {  
                                                                $$=$1;
                                                            }

    |   SEMICOLON                                           {$$=new_node(NO_VALUE, "Null");}

    |   PRINT LPAR ExprOrStrlit RPAR SEMICOLON              {  
                                                                $$=new_node(NO_VALUE, "Print");
                                                                insert_node($$, $3);
                                                                
                                                            }
    ;


Statement2:

        Statement Statement2                                {
                                                                insert_neighbor($1, $2);
                                                                $$=$1;
                                                                
                                                                if(strcmp($1->type, "Null") != 0)
                                                                    globalContador++;
                                                            } 

    |   Statement                                           {$$=$1;
                                                            if(strcmp($1->type, "Null") != 0)
                                                                    globalContador++;
                                                            } 
;



ExprSemicolon:

        Expr SEMICOLON                              {$$=$1;}

    |   SEMICOLON                               {$$=NULL;}

;



ExprOrStrlit:
        Expr                                       {$$=$1;}

    |   STRLIT                                 {$$=new_node($1->cval, "StrLit");}
;


MethodInvAssParseArgs:

        MethodInvocation                        {  
                                                    $$=$1;
                                                }      
    |   Assignment                              {  
                                                    $$=$1;
                                                }  
    |   ParseArgs                               {  
                                                    $$=$1;
                                                }  
    |   error                                   {$$=new_node(NO_VALUE, "Null");flagDontPrintTree = 1;}

    ;


MethodInvocation:

        ID LPAR Expr CommaExpr RPAR             {
                                                    $$=new_node(NO_VALUE, "Call");
                                                    tmp=new_node($1->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = 1;
                                                    insert_node($$, tmp);
                                                    insert_neighbor(tmp, $3);
                                                    insert_neighbor($3, $4);
                                                }

    |   ID LPAR Expr RPAR                       {
                                                    $$=new_node(NO_VALUE, "Call");
                                                    tmp=new_node($1->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = $1->col;
                                                    insert_node($$, tmp);
                                                    insert_neighbor(tmp, $3);
                                                }   

    |   ID LPAR RPAR                            {   
                                                    $$=new_node(NO_VALUE, "Call");
                                                    tmp=new_node($1->cval, "Id");
                                                    tmp->line = line;
                                                    tmp->col = 3;
                                                    insert_node($$, tmp);
                                                }
    |   ID LPAR Expr error RPAR                 {
                                                    $$=new_node(NO_VALUE, "Call");
                                                    tmp=new_node($1->cval, "Id");
                                                    insert_node($$, tmp);
                                                    insert_neighbor(tmp, $3);
                                                    flagDontPrintTree = 1;
                                                    /* TODO verificar se devemos inserir o erro */
                                                }
    ;


CommaExpr:

        COMMA Expr CommaExpr                    {
                                                    $$=$2;
                                                    insert_neighbor($2, $3);
                                                }
    |   INTLIT                                  {$$=new_node($1->cval, "IntLit");}

    |   COMMA Expr                              {
                                                    $$=$2;
                                                }

    ;

Assignment:
        ID ASSIGN Expr                     {
                                                $$=new_node(NO_VALUE, "Assign");
                                                tmp=new_node($1->cval, "Id");
                                                insert_node($$, tmp);
                                                insert_neighbor(tmp, $3);
                                            }
    ;




ParseArgs:

        PARSEINT LPAR ID LSQ Expr RSQ RPAR  {
                                                $$=new_node(NO_VALUE, "ParseArgs");
                                                tmp=new_node($3->cval, "Id");
                                                insert_node($$, tmp);
                                                insert_neighbor(tmp, $5);
                                            }
    |   PARSEINT LPAR ID error RPAR         {
                                                $$=new_node(NO_VALUE, "ParseArgs");
                                                flagDontPrintTree = 1;
                                                /*  TODO inserio o erro nao sei se devia */
                                            }
    ;


Expr:
        Assignment                              {$$=$1;}

    |   OtherExpr                               {$$=$1;}

    ;

OtherExpr:

        OtherExpr PLUS OtherExpr            {
                                                $$ = new_node(NO_VALUE,"Add");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr MINUS OtherExpr           {
                                                $$ = new_node(NO_VALUE,"Sub");
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
                                                $$ = new_node(NO_VALUE,"Lshift");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr RSHIFT OtherExpr          {
                                                $$ = new_node(NO_VALUE,"Rshift");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr EQ OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Eq");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr GE OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Ge");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr GT OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Gt");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr LE OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Le");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr LT OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Lt");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   OtherExpr NE OtherExpr              {
                                                $$ = new_node(NO_VALUE,"Ne");
                                                insert_node($$,$1);
                                                insert_neighbor($1,$3);
                                            }
    |   PLUS OtherExpr        %prec preced              {
                                                $$ = new_node(NO_VALUE,"Plus");
                                                insert_node($$,$2);
                                            }
    |   MINUS OtherExpr       %prec preced               {
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
                                                $$=NULL;
                                                flagDontPrintTree = 1;
                                            }
    |   MethodInvocation                    {  
                                                $$=$1;                                            }     
    |   ParseArgs                           {  
                                                $$=$1;
                                            }
    |   ID                                  {
                                                $$=new_node($1->cval, "Id");
                                                $$->line = line;
                                                $$->col = column;

                                            }
    |   ID DOTLENGTH                        {
                                                $$=new_node(NO_VALUE, "Length");
                                                tmp=new_node($1->cval, "Id");
                                                $$->line = line;
                                                //$$->col = column-strlen($1)-strlen($2);
                                                insert_node($$, tmp);

                                            }
    |   INTLIT                              {
                                                $$=new_node($1->cval, "DecLit");
                                                $$->line = line;
                                                $$->col = column;
                                            }

    |   REALLIT                             {
                                                $$=new_node($1->cval, "RealLit");
                                                $$->line = line;
                                                $$->col = column;
                                            }

    |   BOOLLIT                             {
                                                $$=new_node($1->cval, "BoolLit");
                                                $$->line = line;
                                                $$->col = column;
                                            }

    ;
%%