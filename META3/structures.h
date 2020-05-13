#ifndef STRUCTURES_H
#define STRUCTURES_H

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
}Tree;

typedef struct Token* s_Token;
typedef struct Token {
   	char * cval;
  	int line;
  	int col;
}Token;


#endif
