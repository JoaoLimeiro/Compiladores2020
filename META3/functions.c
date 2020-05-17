#include "structures.h"
#include "functions.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

s_Tree new_node(char* value, char* type){
	s_Tree node=(s_Tree)malloc(sizeof(Tree));
	node->value=strdup(value);
	node->type=strdup(type);
	node->father = NULL;
	node->child = NULL;
	node->annot = NULL;
	node->neighbor = NULL;
    node->line = 0;
    node->col = 0;

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

	if(father != NULL && node != NULL && father->type != NULL){
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

void imprime_arvore(s_Tree no, int profundidade){
    if (no != NULL){
        int prof_aux = 0;
        s_Tree aux;

        if (strcmp(no->type,"Program") == 0){
            printf("%s\n",no->type);
        }
        else if(strcmp(no->type,"Null") != 0){
            while(prof_aux < profundidade){
                printf("..");
                prof_aux++;
            }
            if(strcmp(no->value,"") == 0 || strcmp(no->value,"*") == 0 || strcmp(no->value,"=") == 0 || strcmp(no->value,"+") == 0 || strcmp(no->value,"-") == 0){
                printf("%s", no->type);
            }
            else{
                printf("%s(%s)", no->type, no->value);
            }
		if (no->annot!=NULL && strcmp(no->annot,"none") != 0)
			printf(" - %s", no->annot);
printf("\n");
        }
        aux = no->child;
        while(aux != NULL){
            s_Tree freeMe = aux;
            imprime_arvore(aux,profundidade+1);
            aux = aux->neighbor;

            free(freeMe->type);
            free(freeMe->value);
            free(freeMe); 
        }
    }
    return;
}

s_Token new_token (char * cval, int line, int col) {
  s_Token token = (s_Token) malloc (sizeof(Token));
  if (cval != NULL) {
    token->cval = strdup(cval);
  }
  else {
    token->cval = NULL;
  }

  token->line = line;
  token->col = col;

  return token;
}






