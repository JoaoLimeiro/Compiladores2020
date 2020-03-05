


%{
    #define PRINTF if (flag==1) printf
	#define ERRORS if (flag==0) printf
	int flag;
	int line = 1; /* Contador de linhas */
	int column = 1; /* Contador de colunas */
	int beginning_line;
  	int beginning_col;
%}

%X COMMENT1
%X COMMENT2

BOOLLIT "true"|"false"
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
CLASS "class"
DOTLENGTH ".length"
DOUBLE "double"
ELSE "else"
IF "if"
INT "int"
PRINT "System.out.print"
PARSEINT "Integer.parseInt"
PUBLIC "public"
RETURN "return"
STATIC "static"
STRING "String"
VOID "void"
WHILE "while"
RESERVED "++"|"--"|"null"|"Integer"|"System"|"abstract"|"continue"|"for"|"new"|"switch"|"boolean"|"do"|"goto"|"private"|"this"|"assert"|"default"|"if"|"package""|"synchronized"|"break"|"double"|"implements"|"protected"|"throw"|"byte"|"else"|"import"|"public"|"throws"|"case"|"enum"|"instanceof"|"return"|"transient"|"catch"|"extends"|"int"|"short"|"try"|"char"|"final"|"interface"|"static"|"void"|"class"|"finally"|"long|"strictfp"|"volatile"|"const"|"float"|"native"|"super"|"while"


LETTER [a-zA-Z]
NUMBER [0-9]
NOTZERO [1-9]
OPTION {NUMBER}|_
CAR [^\r\n"]
EXPOENT (E|e)(\+|\-)*{OPTION}+
ESCAPE \(n|t|\\|\'|{ASPAS})

ID ({LETTER}|_|$)({LETTER}|{NUMBER}|_|$)*
INTLIT {NOTZERO}{OPTION}*{NUMBER}|{NUMBER}
REALLIT ({OPTION}*\.{OPTION}*{EXPOENT}?|\.{OPTION}*{EXPOENT}?|{OPTION}+{EXPOENT})
STRLIT ({ASPAS}({LETTER}|" ")+{ASPAS})|(({LETTER}|" ")*"\f")|({ASPAS}({LETTER}|" ")*{ASPAS}"\n")|({ASPAS}({LETTER}|" ")*{ASPAS}"\r")|({ASPAS}({LETTER}|" ")*{ASPAS}"\t")


%%

{BOOLLIT}   {PRINTF("BOOLLIT(%s)\n",yytext); column += yyleng;}
{PARSEINT}  {PRINTF("PARSEINT\n");column += yyleng;}
{AND}   {PRINTF("AND\n"); column += yyleng;}
{ASSIGN}    {PRINTF("ASSIGN\n"); column += yyleng;}
{STAR}  {PRINTF("STAR\n");column += yyleng;}
{COMMA}     {PRINTF("COMMA\n");column += yyleng;}
{DIV}   {PRINTF("DIV\n");column += yyleng;}
{EQ}    {PRINTF("EQ\n");column += yyleng;}
{GE}    {PRINTF("GE\n");column += yyleng;}
{GT}    {PRINTF("GT\n");column += yyleng;}
{LBRACE}    {PRINTF("LBRACE\n");column += yyleng;}
{LE}    {PRINTF("LE\n");column += yyleng;}
{LPAR}  {PRINTF("LPAR\n");column += yyleng;}
{LSQ}   {PRINTF("LSQ\n");column += yyleng;}
{LT}    {PRINTF("LT\n");column += yyleng;}
{MINUS} {PRINTF("MINUS\n");column += yyleng;}
{MOD}   {PRINTF("MOD\n");column += yyleng;}
{NE}    {PRINTF("NE\n");column += yyleng;}
{NOT}   {PRINTF("NOT\n");column += yyleng;}
{OR}    {PRINTF("OR\n");column += yyleng;}
{PLUS}  {PRINTF("PLUS\n");column += yyleng;}
{RBRACE}    {PRINTF("RBRACE\n");column += yyleng;}
{RPAR}  {PRINTF("RPAR\n");column += yyleng;}
{RSQ}   {PRINTF("RSQ\n");column += yyleng;}
{SEMICOLON} {PRINTF("SEMICOLON\n");column += yyleng;}
{ARROW} {PRINTF("ARROW\n");column += yyleng;}
{LSHIFT}    {PRINTF("LSHIFT\n");column += yyleng;}
{RSHIFT}    {PRINTF("RSHIFT\n");column += yyleng;}
{XOR}   {PRINTF("XOR\n");column += yyleng;}
{BOOL}  {PRINTF("BOOL\n");column += yyleng;}
{CLASS} {PRINTF("CLASS\n");column += yyleng;}
{DOTLENGTH}     {PRINTF("DOTLENGTH\n");column += yyleng;}
{DOUBLE}    {PRINTF("DOUBLE\n");column += yyleng;}
{ELSE}  {PRINTF("ELSE\n");column += yyleng;}
{IF}    {PRINTF("IF\n");column += yyleng;}
{INT}   {PRINTF("INT\n");column += yyleng;}
{PRINT} {PRINTF("PRINTF\n");column += yyleng;}
{PUBLIC}    {PRINTF("PUBLIC\n");column += yyleng;}
{RETURN}    {PRINTF("RETURN\n");column += yyleng;}
{STATIC}    {PRINTF("STATIC\n");column += yyleng;}
{STRING}    {PRINTF("STRING\n");column += yyleng;}
{VOID}  {PRINTF("VOID\n");column += yyleng;}
{WHILE} {PRINTF("WHILE\n");column += yyleng;}
{RESERVED}  {PRINTF("RESERVED\n");column += yyleng;}
{ID}    {PRINTF("ID(%s)\n",yytext); column += yyleng;}
{INTLIT}    {PRINTF("INTLIT(%s)\n",yytext); column += yyleng;}
{REALLIT}   {PRINTF("REALLIT(%s)\n",yytext); column += yyleng;}
{STRLIT}   {PRINTF("STRLIT(%s)\n",yytext); column += yyleng;}


"/*" {BEGIN COMMENT1; beginning_col = column; beginning_line = line; column+=yyleng;}
<COMMENT1><<EOF>> {BEGIN 0; printf("Line %d, col %d: unterminated comment\n", beginning_line, beginning_col); column+=yyleng;}
<COMMENT1>"*/" {BEGIN 0; column+=yyleng;}
<COMMENT1>. {column+=yyleng;}
<COMMENT1>\n {line++; column=1;}

"//" {BEGIN COMMENT2;}
<COMMENT2>"\n" {BEGIN 0; line++; column=1;}
<COMMENT2>. {;}

" "|"\f"	{;}
"\n"|"\r"	{line++; column=1;}

. {ERRORS("Line %d, col %d: illegal character (%s)\n", line, column, yytext); column+=yyleng;}

%%
int main(int argc, char *argv[])
{

    if (argc > 1) {
        if (strcmp(argv[1], "-l") == 0) {
            flag = 1;
            yylex();
            return 0;
        }
}
    flag = 0;
    yylex();
    return 0;
}
int yywrap() {
    return 1;
}
