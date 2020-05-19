#ifndef STRUCTURES_H
#define STRUCTURES_H
#include "symbol_table.h"

typedef struct Tree* s_Tree;
typedef struct Tree {
    s_Tree father;
    s_Tree child;
    s_Tree neighbor;
    char* type;
    char* annot;
    char* value;
    int line;
    int col;
    table_element *tab;
    int tableOut;
}Tree;

typedef struct Token* s_Token;
typedef struct Token {
   	char * cval;
  	int line;
  	int col;
}Token;


#endif
