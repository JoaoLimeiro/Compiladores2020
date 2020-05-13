
#include "structures.h"

s_Tree new_node(char* value, char* type);
s_Tree insert_node(s_Tree father, s_Tree node);
s_Tree insert_neighbor(s_Tree father, s_Tree node);
void imprime_arvore(s_Tree no, int profundidade);
s_Token new_token (char * cval, int line, int col);
