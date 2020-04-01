#include "structures.h"
#include "functions.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

s_Tree new_node(char* value, char* type)
{
	s_Tree node=(s_Tree)malloc(sizeof(Tree));
	node->value=strdup(value);
	node->type=strdup(type);
	node->father = NULL;
	node->child = NULL;
	node->neighbor = NULL;

	return node;
}

s_Tree insert_node(s_Tree father, s_Tree node){
	if(father != NULL && node != NULL){
		father->child = node;
		node->father = father;

		return node;
	}
	return NULL;
}

s_Tree insert_neighbor(s_Tree father, s_Tree node)
{

	if(father != NULL && node != NULL){
		s_Tree tmp;

		for(tmp=father; tmp->neighbor; tmp=tmp->neighbor)
			;
        tmp->neighbor=node;

    	if(node->father != NULL)
    		node->father = tmp->father;

    	return father;
	}
 
    return NULL;
}