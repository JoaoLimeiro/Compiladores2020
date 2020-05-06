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
}Tree;

#endif
