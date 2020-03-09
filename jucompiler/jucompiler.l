


%{
    #define PRINTF if (flagPrint==1) printf
	#define ERRORS if (flagErros==1) printf
	int flagPrint;
	int flagErros;
	int lastASPAS;
	int line = 1; /* Contador de linhas */
	int column = 1; /* Contador de colunas */
	int beginning_line;
  	int beginning_col;
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
TOKEN "class"|"double"|"else"|"if"|"int"|"public"|"return"|"static"|"String"|"void"|"while"|"var"|"float32"|"bool"|"string"
RESERVED "++"|"--"|"null"|"Integer"|"System"|"abstract"|"continue"|"new"|"switch"|"assert"|"default"|"synchronized"|"do"|"goto"|"private"|"this"|"break"|"implements"|"protected"|"throw"|"byte"|"import"|"throws"|"case"|"enum"|"instanceof"|"transient"|"catch"|"extends"|"short"|"try"|"char"|"final"|"interface"|"finally"|"long"|"strictfp"|"volatile"|"const"|"float"|"native"|"super"|"for"|"package"


LETTER [a-zA-Z]
NUMBER [0-9]
NOTZERO [1-9]
OPTION {NUMBER}|_
CAR [^\r|\n|\"|\\|//]
EXPOENT (E|e)(\+|\-)?({NUMBER}|{NUMBER}{OPTION}*{NUMBER})
ESCAPE \\(r|f|t|n|\\|{ASPAS})
NOESCAPE [^r|f|t|n|\\|\"|]
UNTERMINATED [^\r|\n]


ID ({LETTER}|_|$)({LETTER}|{NUMBER}|_|$)*
INTLIT {NOTZERO}{OPTION}*{NUMBER}|{NUMBER}
REALLIT (({NUMBER}+|{NUMBER}{OPTION}*{NUMBER})\.({NUMBER}+|{NUMBER}{OPTION}*{NUMBER})?{EXPOENT}?)|(({NUMBER}+|{NUMBER}{OPTION}*{NUMBER}){EXPOENT})|\.({NUMBER}+|{NUMBER}{OPTION}*{NUMBER}){EXPOENT}?
STRLIT (({CAR}|" "|{ESCAPE}|"/")*{ASPAS})
STRERR (\\{NOESCAPE})


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
{RESERVED}  	{PRINTF("RESERVED(%s)\n",yytext);column += yyleng;}
{BOOLLIT}   	{PRINTF("BOOLLIT(%s)\n",yytext); column += yyleng;}
{PARSEINT}  	{PRINTF("PARSEINT\n");column += yyleng;}
{AND}   		{PRINTF("AND\n"); column += yyleng;}
{ASSIGN}    	{PRINTF("ASSIGN\n"); column += yyleng;}
{STAR}  		{PRINTF("STAR\n");column += yyleng;}
{COMMA}     	{PRINTF("COMMA\n");column += yyleng;}
{DIV}   		{PRINTF("DIV\n");column += yyleng;}
{EQ}    		{PRINTF("EQ\n");column += yyleng;}
{GE}    		{PRINTF("GE\n");column += yyleng;}
{GT}    		{PRINTF("GT\n");column += yyleng;}
{LBRACE}    	{PRINTF("LBRACE\n");column += yyleng;}
{LE}    		{PRINTF("LE\n");column += yyleng;}
{LPAR}  		{PRINTF("LPAR\n");column += yyleng;}
{LSQ}   		{PRINTF("LSQ\n");column += yyleng;}
{LT}    		{PRINTF("LT\n");column += yyleng;}
{MINUS} 		{PRINTF("MINUS\n");column += yyleng;}
{MOD}   		{PRINTF("MOD\n");column += yyleng;}
{NE}    		{PRINTF("NE\n");column += yyleng;}
{NOT}   		{PRINTF("NOT\n");column += yyleng;}
{OR}    		{PRINTF("OR\n");column += yyleng;}
{PLUS}  		{PRINTF("PLUS\n");column += yyleng;}
{RBRACE}    	{PRINTF("RBRACE\n");column += yyleng;}
{RPAR}  		{PRINTF("RPAR\n");column += yyleng;}
{RSQ}   		{PRINTF("RSQ\n");column += yyleng;}
{SEMICOLON} 	{PRINTF("SEMICOLON\n");column += yyleng;}
{ARROW} 		{PRINTF("ARROW\n");column += yyleng;}
{LSHIFT}    	{PRINTF("LSHIFT\n");column += yyleng;}
{RSHIFT}    	{PRINTF("RSHIFT\n");column += yyleng;}
{XOR}   		{PRINTF("XOR\n");column += yyleng;}
{DOTLENGTH}     {PRINTF("DOTLENGTH\n");column += yyleng;}
{PRINT} 		{PRINTF("PRINT\n");column += yyleng;}
{BOOL} 			{PRINTF("BOOL\n");column += yyleng;}
{ID}    		{PRINTF("ID(%s)\n",yytext); column += yyleng;}
{INTLIT}    	{PRINTF("INTLIT(%s)\n",yytext); column += yyleng;}
{REALLIT}   	{PRINTF("REALLIT(%s)\n",yytext); column += yyleng;}

{ASPAS}{ASPAS}				{PRINTF("STRLIT(\"\")\n"); column += yyleng;}
{ASPAS}						{BEGIN STR;lastASPAS = column; column+=yyleng;}
<STR>{ASPAS}				{BEGIN 0;}
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

<STR>{STRLIT}				{	
								BEGIN 0;
								PRINTF("STRLIT(\"%s)\n",yytext); column += yyleng;
							}
<STR>[\n\r<<EOF>>]		{
								BEGIN 0;
								ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);line++; column=1;
							}	
						
<STR>.						{column += yyleng;}	
<STRERROR>{ASPAS}			{BEGIN 0;}
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
<STRERROR>[\n\r<<EOF>>]	{
								BEGIN 0;
								ERRORS("Line %d, col %d: unterminated string literal\n",line, lastASPAS);line++; column=1;
							}

<STRERROR>.					{column += yyleng;}	
"/*" 				{BEGIN COMMENT1; beginning_col = column; beginning_line = line; column+=yyleng;}
<COMMENT1><<EOF>> 	{BEGIN 0; ERRORS("Line %d, col %d: unterminated comment\n", beginning_line, beginning_col); column+=yyleng;}
<COMMENT1>"*/" 		{BEGIN 0; column+=yyleng;}
<COMMENT1>. 		{column+=yyleng;}
<COMMENT1>\n|\r\n|\r		{line++; column=1;}

"//" 				{BEGIN COMMENT2;}
<COMMENT2>[\n\r] 		{BEGIN 0; line++; column=1;}
<COMMENT2>. 		{;}



{SPACE}|"\f"|"\t"			{column+=yyleng;}
"\n"|"\r"|"\r\n"	{line++; column=1;}

. 					{ERRORS("Line %d, col %d: illegal character (%s)\n", line, column, yytext); column+=yyleng;}


%%
int main(int argc, char *argv[])
{

    if (argc > 1) {
        if (strcmp(argv[1], "-l") == 0) {
            flagPrint = 1;
            flagErros = 1;
            yylex();
            return 0;
        }
}
    flagPrint = 0;
    flagErros = 1;
    yylex();
    return 0;
}
int yywrap() {
    return 1;
}
