#include "structures.h"
#include "symbol_table.h"

int check_program(Tree *tree);
int check_class(Tree* tree);
table_element* check_methodHeader(Tree* MethodDecl);

void check_paramDecl(Tree* paramDecl, symbol* sym,int tipo);
void check_fieldDecl(Tree* fieldDecl);
void check_varDecl(Tree* varDecl);
void check_type(Tree *tree);
void check_operator_assign(Tree* op);
void check_operator_comp(Tree* op);
void check_operator_calc(Tree* op);
void check_operator_logical(Tree* op);
void check_operator_ints(Tree* op);
void check_operator_call(Tree* op);
int check_method(Tree *tree);
void  search_method(table_element * table, Tree * call);
void check_operator_minplus(Tree* op);
symbol *current_el;