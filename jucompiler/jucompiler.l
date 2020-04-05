


%{
	#include "structures.h"
	#include "functions.h"
	#include "y.tab.h"

    #define PRINTF if (flagPrint==1) printf
	#define ERRORS if (flagErros==1) printf
	int flagPrint;
	int flagErros;
	int flagTree;
	int lastASPAS;
	int line = 1; /* Contador de linhas */
	int column = 1; /* Contador de colunas */
	int beginning_line;
  	int beginning_col;
  	int flagDontPrintTree;

  	extern Tree* myprogram;

  	int yyparse();
%}

%X COMMENT1
%X COMMENT2
%X STR
%X STRERROR

BOOLLIT "true"|"false"
SPACE " "
AND "&&"
ASSIGN "="
STAR "*"
COMMA ","
ASPAS \"
DIV "/"
EQ "=="
GE ">="
GT ">"
LBRACE "{"
LE "<="
LPAR "("
LSQ "["
LT "<"
MINUS "-"
MOD "%"
NE "!="
NOT "!"
OR "||"
PLUS "+"
RBRACE "}"
RPAR ")"
RSQ "]"
SEMICOLON ";"
ARROW "->"
LSHIFT "<<"
RSHIFT ">>"
XOR "^"
BOOL "boolean"
DOTLENGTH ".length"
PRINT "System.out.print"
PARSEINT "Integer.parseInt"

CLASS "class"
ELSE "else"
IF "if"
INT "int"
PUBLIC "public"
RETURN "return"
STATIC "static"
STRING "String"
VOID "void"
WHILE "while"
TOKEN "float32"|"bool"
DOUBLE "double"
RESERVED "++"|"--"|"null"|"Integer"|"System"|"abstract"|"continue"|"new"|"switch"|"assert"|"default"|"synchronized"|"do"|"goto"|"private"|"this"|"break"|"implements"|"protected"|"throw"|"byte"|"import"|"throws"|"case"|"enum"|"instanceof"|"transient"|"catch"|"extends"|"short"|"try"|"char"|"final"|"interface"|"finally"|"long"|"strictfp"|"volatile"|"const"|"float"|"native"|"super"|"for"|"package"

LETTER [a-zA-Z]
NUMBER [0-9]
NOTZERO [1-9]
OPTION {NUMBER}|_
CAR [^\r|\n|\"|\\|//]
EXPOENT (E|e)(\+|\-)?({NUMBER}|{NUMBER}{OPTION}*{NUMBER})
ESCAPE \\(r|f|t|n|\\|{ASPAS})
NOESCAPE [^r|f|t|n|\\|\"]
UNTERMINATED [^\r|\n]


ID ({LETTER}|_|$)({LETTER}|{NUMBER}|_|$)*
INTLIT {NOTZERO}{OPTION}*{NUMBER}|{NUMBER}
REALLIT (({NUMBER}+|{NUMBER}{OPTION}*{NUMBER})\.({NUMBER}+|{NUMBER}{OPTION}*{NUMBER})?{EXPOENT}?)|(({NUMBER}+|{NUMBER}{OPTION}*{NUMBER}){EXPOENT})|\.({NUMBER}+|{NUMBER}{OPTION}*{NUMBER}){EXPOENT}?
STRLIT (({CAR}|" "|{ESCAPE}|"/"|"|")*{ASPAS})
STRERR (\\({NOESCAPE}|"|"))


%%

{TOKEN}			{
					for(int i = 0; i < yyleng; i++){
						if(yytext[i] >= 97 && yytext[i] <= 122){
							PRINTF("%c", yytext[i]-32);
						}else {
							PRINTF("%c", yytext[i]);
						}
					}
					PRINTF("\n");
					column += yyleng;
				}
{RESERVED}  	{PRINTF("RESERVED(%s)\n",yytext);column += yyleng; if (flagTree ==1) return RESERVED ;}
{BOOLLIT}   	{PRINTF("BOOLLIT(%s)\n",yytext); column += yyleng; if (flagTree ==1) return BOOLLIT;}
{PARSEINT}  	{PRINTF("PARSEINT\n");column += yyleng; if (flagTree ==1) return PARSEINT;}
{AND}   		{PRINTF("AND\n"); column += yyleng; if (flagTree ==1) return AND;}
{ASSIGN}    	{PRINTF("ASSIGN\n"); column += yyleng; if (flagTree ==1) return ASSIGN;}
{STAR}  		{PRINTF("STAR\n");column += yyleng; if (flagTree ==1) return STAR;}
{COMMA}     	{PRINTF("COMMA\n");column += yyleng; if (flagTree ==1) return COMMA;}
{DIV}   		{PRINTF("DIV\n");column += yyleng; if (flagTree ==1) return DIV;}
{EQ}    		{PRINTF("EQ\n");column += yyleng; if (flagTree ==1) return EQ;}
{GE}    		{PRINTF("GE\n");column += yyleng; if (flagTree ==1) return GE;}
{GT}    		{PRINTF("GT\n");column += yyleng; if (flagTree ==1) return GT;}
{LBRACE}    	{PRINTF("LBRACE\n");column += yyleng; if (flagTree ==1) return LBRACE;}
{LE}    		{PRINTF("LE\n");column += yyleng; if (flagTree ==1) return LE;}
{LPAR}  		{PRINTF("LPAR\n");column += yyleng; if (flagTree ==1) return LPAR;}
{LSQ}   		{PRINTF("LSQ\n");column += yyleng; if (flagTree ==1) return LSQ;}
{LT}    		{PRINTF("LT\n");column += yyleng; if (flagTree ==1) return LT;}
{MINUS} 		{PRINTF("MINUS\n");column += yyleng; if (flagTree ==1) return MINUS;}
{MOD}   		{PRINTF("MOD\n");column += yyleng; if (flagTree ==1) return MOD;}
{NE}    		{PRINTF("NE\n");column += yyleng; if (flagTree ==1) return NE;}
{NOT}   		{PRINTF("NOT\n");column += yyleng; if (flagTree ==1) return NOT;}
{OR}    		{PRINTF("OR\n");column += yyleng; if (flagTree ==1) return OR;}
{PLUS}  		{PRINTF("PLUS\n");column += yyleng; if (flagTree ==1) return PLUS;}
{RBRACE}    	{PRINTF("RBRACE\n");column += yyleng; if (flagTree ==1) return RBRACE;}
{RPAR}  		{PRINTF("RPAR\n");column += yyleng; if (flagTree ==1) return RPAR;}
{RSQ}   		{PRINTF("RSQ\n");column += yyleng; if (flagTree ==1) return RSQ;}
{SEMICOLON} 	{PRINTF("SEMICOLON\n");column += yyleng; if (flagTree ==1) return SEMICOLON;}
{ARROW} 		{PRINTF("ARROW\n");column += yyleng; if (flagTree ==1) return ARROW;}
{LSHIFT}    	{PRINTF("LSHIFT\n");column += yyleng; if (flagTree ==1) return LSHIFT;}
{RSHIFT}    	{PRINTF("RSHIFT\n");column += yyleng; if (flagTree ==1) return RSHIFT;}
{XOR}   		{PRINTF("XOR\n");column += yyleng; if (flagTree ==1) return XOR;}
{DOTLENGTH}     	{PRINTF("DOTLENGTH\n"); column += yyleng; if (flagTree ==1) return DOTLENGTH;}
{PRINT} 		{PRINTF("PRINT\n");column += yyleng; if (flagTree ==1) return PRINT;}
{BOOL} 			{PRINTF("BOOL\n");column += yyleng; if (flagTree ==1) return BOOL;}
{INT}   		{PRINTF("INT\n");column += yyleng;if (flagTree ==1) return INT;}
{ELSE}  		{PRINTF("ELSE\n");column += yyleng;if (flagTree ==1) return ELSE;}
{IF}    		{PRINTF("IF\n");column += yyleng;if (flagTree ==1) return IF; }
{CLASS} 		{PRINTF("CLASS\n");column += yyleng;if (flagTree ==1) return CLASS;}
{PUBLIC}		    {PRINTF("PUBLIC\n");column += yyleng;if (flagTree ==1) return PUBLIC; }
{RETURN}		    {PRINTF("RETURN\n");column += yyleng;if (flagTree ==1) return RETURN; }
{STATIC}		    {PRINTF("STATIC\n");column += yyleng;if (flagTree ==1) return STATIC;}
{STRING}		    {PRINTF("STRING\n");column += yyleng;if (flagTree ==1) return STRING;}
{VOID}  		{PRINTF("VOID\n");column += yyleng;if (flagTree ==1) return VOID;}
{WHILE} 		{PRINTF("WHILE\n");column += yyleng;if (flagTree ==1) return WHILE;}
{DOUBLE} 		{PRINTF("DOUBLE\n");column += yyleng;if (flagTree ==1) return DOUBLE;}

{ID}    		{PRINTF("ID(%s)\n",yytext); column += yyleng; yylval.cval = strdup(yytext); if (flagTree ==1) return ID;}
{INTLIT}    	{PRINTF("INTLIT(%s)\n",yytext); column += yyleng;yylval.cval = strdup(yytext); if (flagTree ==1) return INTLIT;}
{REALLIT}   	{PRINTF("REALLIT(%s)\n",yytext); column += yyleng;yylval.cval = strdup(yytext); if (flagTree ==1) return REALLIT;}

{ASPAS}{ASPAS}				{PRINTF("STRLIT(\"\")\n"); column += yyleng;yylval.cval = strdup(yytext);if (flagTree ==1) return STRLIT;}

{ASPAS}{STRLIT}				{	
							
								PRINTF("STRLIT(%s)\n",yytext); column += yyleng;yylval.cval = strdup(yytext); if (flagTree ==1) return STRLIT;
}
				
{ASPAS}						{BEGIN STR;lastASPAS = column; column+=yyleng;}
<STR>{ASPAS}				{BEGIN 0; column += yyleng;}
<STR>{ESCAPE}				{column += yyleng;}
<STR>{STRERR}   			{
								
								for (int i=0;i< yyleng; i++){ 
									if (yytext[i] ==  92){
										if(yytext[i+1] == 10 ){
											ERRORS("Line %d, col %d: invalid escape sequence (%c)\n",line, column+i,yytext[i]);
											ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);
											line++; column=1;
											BEGIN 0;
										}else{
											ERRORS("Line %d, col %d: invalid escape sequence (%c%c)\n",line, column+i,yytext[i],yytext[i+1]);
											column += yyleng;
											BEGIN STRERROR;
										}
		 									
									}
		 						} 
		 						
							}

			
<STR><<EOF>>			{
								BEGIN 0;
								ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);line++; column=1;
								if (flagTree ==1) return END;
							}	
<STR>"\n"|"\r"|"\r\n"			{
								BEGIN 0;
								ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);line++; column=1;
							}	
						
<STR>.						{column += yyleng;}	
<STRERROR>{ASPAS}			{BEGIN 0; column += yyleng;}
<STRERROR>{ESCAPE}				{column += yyleng;}
<STRERROR>{STRERR}   			{
								
								for (int i=0;i< yyleng; i++){ 
									if (yytext[i] ==  92){
										if(yytext[i+1] == 10 ){
											ERRORS("Line %d, col %d: invalid escape sequence (%c)\n",line, column+i,yytext[i]);
											ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);
											line++; column=1;
											BEGIN 0;
										}else{
											ERRORS("Line %d, col %d: invalid escape sequence (%c%c)\n",line, column+i,yytext[i],yytext[i+1]);
											column += yyleng;
										}
		 									
									}
		 						} 
							}
<STRERROR><<EOF>>	{
								BEGIN 0;
								ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);line++; column=1;
								if (flagTree ==1) return END;
							}
<STRERROR>"\n"|"\r"|"\r\n"	{
								BEGIN 0;
								ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);line++; column=1;
							}

<STRERROR>.					{column += yyleng;}	
"/*" 				{BEGIN COMMENT1; beginning_col = column; beginning_line = line; column+=yyleng;}
<COMMENT1><<EOF>> 	{BEGIN 0; ERRORS("Line %d, col %d: unterminated comment\n", beginning_line, beginning_col); if (flagTree ==1) return END;}
<COMMENT1>"*/" 		{BEGIN 0; column+=yyleng;}
<COMMENT1>\n|\r|\r\n		{line++; column=1;}
<COMMENT1>. 		{column+=yyleng;}



"//" 				{BEGIN COMMENT2;}
<COMMENT2>\n|\r|\r\n		{BEGIN 0; line++; column=1;}
<COMMENT2>. 		{column += yyleng;}



{SPACE}|"\f"|"\t"			{column+=yyleng;}

\n|\r|\r\n	{line++; column=1;}


. 					{ERRORS("Line %d, col %d: illegal character (%s)\n", line, column, yytext); column+=yyleng;}


%%
int main(int argc, char *argv[])
{

    if (argc > 1) {
        if (strcmp(argv[1], "-l") == 0) {
            flagPrint = 1;
            flagErros = 1;
			flagTree = 0;
            yylex();
            return 0;
        }else if (strcmp(argv[1], "-e1") == 0){
        	flagPrint = 0;
    		flagErros = 1;
			flagTree = 0;
		    yylex();
		    return 0;
        }
		else if (strcmp(argv[1], "-t") == 0){
			flagPrint = 0;
			flagTree = 1;
			flagErros = 1;
			yyparse();
			yylex();
			if(flagDontPrintTree == 0)
				imprime_arvore(myprogram,0);


		}
		else if (strcmp(argv[1], "-e2") == 0){
			flagTree = 1;
			flagErros = 1;
			flagPrint = 0;
			yyparse();
			yylex();
		}

	}
    
}
int yywrap() {
    return 1;
}

void yyerror (char *s) {
	if(flagErros){
		int beginCol=column- strlen(yytext);
  		printf("Line %d, col %d: %s: %s\n", line, beginCol, s, yytext);
	}
	
}


