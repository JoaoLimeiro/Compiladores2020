#include "structures.h"
#include "semantics.h"
#include "symbol_table.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int check_program(Tree *tree) {
if (tree==NULL){
return 0;}
    if (strcmp(tree->type, "Program")==0){
        check_class(tree);
    }
    else if (strcmp(tree->type, "MethodDecl")==0){

        check_program(tree->child) ;
if (tree->neighbor!=NULL){
check_program(tree->neighbor) ;
}
    }
    else if (strcmp(tree->type, "FieldDecl")==0){
check_fieldDecl(tree);
}
    else if (strcmp(tree->type, "MethodHeader")==0){
check_methodHeader(tree);
check_program(tree->neighbor) ;}

    else if (strcmp(tree->type, "MethodBody")==0){
	check_program(tree->child);
}
    else if (strcmp(tree->type, "VarDecl")==0){
	check_varDecl(tree);
}/*
    else if (strcmp(tree->type, "Block")==0){}
    else if (strcmp(tree->type, "If")==0){}
    else if (strcmp(tree->type, "While")==0){}
    else if (strcmp(tree->type, "Return")==0){}
    else if (strcmp(tree->type, "Print")==0){}
    else if (strcmp(tree->type, "StrLit")==0){}
    else if (strcmp(tree->type, "Assign")==0){
check_program(tree->neighbor);
}
    else if (strcmp(tree->type, "ParseArgs")==0){}
    else if (strcmp(tree->type, "Call")==0){}
    //Falta add para baixo
   */
else
    check_program(tree->neighbor);


   
    return 0;
}

int check_class(Tree* class) {

		   symtab=create_table(class->child->value,"Class");

		   check_program(class->child);
    return 0;
}
int check_methodHeader(Tree* methodHeader) {
if (methodHeader->child!=NULL ){

	    Tree *aux=methodHeader->child->neighbor;

	    
		current_symtab=create_table(aux->value, "Method");
		insert_el(current_symtab,"return",methodHeader->child->type,NULL,0,0);
		if(check_method(methodHeader)){
		current_el=insert_el(symtab,aux->value,methodHeader->child->type,NULL,0,1);
		if(methodHeader->child->neighbor->neighbor->child!=NULL){
			check_paramDecl(methodHeader->child->neighbor->neighbor->child,current_el,1);
 }}
else{
if(methodHeader->child->neighbor->neighbor->child!=NULL){
			check_paramDecl(methodHeader->child->neighbor->neighbor->child,	NULL, 0);
}
}

check_program(methodHeader->child);

}
    return 0;
}


int check_method(Tree *tree){

	symbol *comp=search_el(symtab,tree->child->neighbor->value);

	Tree *aux;
	params *compparams;
	char *compare;
	
	if(comp!=NULL && comp->is_method==1){

		compparams=comp->params;
		for (aux=tree->child->neighbor->neighbor->child;aux; aux=aux->neighbor){

			//printf("%s",compparams->type);	
			compare=strdup(aux->child->type);
			if (strcmp(compare,"StringArray")==0){
			compare="String[]";

			}
			else if (strcmp(compare,"Bool")==0){

			compare="boolean";

			}
			else{
			*compare =tolower(*compare);
			}

			if (strcmp(compare,compparams->type) || compparams==NULL){	

				return 1;}
		
			compparams=compparams->next;



	
}

if (compparams!=NULL){
return 1;
}
else
return 0;

}
else
return 1;
}

void check_paramDecl(Tree* paramDecl, symbol* sym,int tipo){
	Tree *aux;
if (tipo==1){
	for (aux=paramDecl;aux; aux=aux->neighbor){
		insert_el(current_symtab,aux->child->neighbor->value,aux->child->type,NULL,1,0);
		insert_param(sym, aux->child->value,aux->child->type);
		insert_param_table(current_symtab, aux->child->value,aux->child->type);

	
	}
}else{
	for (aux=paramDecl;aux; aux=aux->neighbor){
		insert_el(current_symtab,aux->child->neighbor->value,aux->child->type,NULL,1,0);

		insert_param_table(current_symtab, aux->child->value,aux->child->type);
}

}
}

void check_fieldDecl(Tree* fieldDecl){
	if (fieldDecl->child!=NULL ){

	    Tree *aux=fieldDecl->child->neighbor;
	    char *type=strdup(fieldDecl->child->type);


	 insert_el(symtab,aux->value,type,NULL,0,0);
}
check_program(fieldDecl->neighbor);
}

void check_varDecl(Tree* varDecl){
	if (varDecl->child!=NULL ){


	    Tree *aux=varDecl->child->neighbor;
	    char *type=strdup(varDecl->child->type);


	 insert_el(current_symtab,aux->value,type,NULL,0,0);
}
check_program(varDecl->neighbor);
}


