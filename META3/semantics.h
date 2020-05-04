#include "structures.h"
#include "symbol_table.h"

int check_program(Tree *tree);
int check_class(Tree* tree);
int check_methodHeader(Tree* MethodDecl);

void check_paramDecl(Tree* paramDecl, symbol* sym,int tipo);
void check_fieldDecl(Tree* fieldDecl);
void check_varDecl(Tree* varDecl);
int check_method(Tree *tree);
symbol *current_el;