#include "symbol_table.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>


table_element *create_table(char * name,char * type){
	table_element *aux;
	table_element *new_table = (table_element *)malloc(sizeof(table_element));

	new_table->name = strdup(name);
	new_table->type = strdup(type);
	new_table->symbols = NULL;
	new_table->params = NULL;
	new_table->next = NULL;
        aux = symtab;
		if(symtab != NULL) {
			while(aux->next != NULL) {
				//if(strcmp(name, aux->name) == 0) {
				//	return NULL;
				//}
				aux = aux->next;
			}	
			aux->next = new_table;
		}else {
			symtab = new_table;
		}

	return new_table;
}
	
table_element *create_temp_table(){
	table_element *new_table = (table_element *)malloc(sizeof(table_element));

	new_table->name = NULL;
	new_table->type = NULL;
	new_table->symbols = NULL;
	new_table->params = NULL;
	new_table->next = NULL;

	return new_table;
}

//Insere um novo identificador na cauda de uma lista ligada de simbolo
symbol *insert_el(table_element *table, char *str,char *t ,params * params, int flagpar,int flagmethod, int show){
	int flag=0;
	symbol *newSymbol=(symbol*) malloc(sizeof(symbol));
	symbol *aux;
	if (flagpar==1)
		newSymbol->is_par=1;
	else
		newSymbol->is_par=0;
	if (flagmethod==1)
		newSymbol->is_method=1;
	else
		newSymbol->is_method=0;

	newSymbol->name = strdup(str);
	newSymbol->type = strdup(t);

	if (strcmp(newSymbol->type,"StringArray")==0){
		newSymbol->type="String[]";
	}else if (strcmp(newSymbol->type,"Bool")==0){
		newSymbol->type="boolean";
	}else{
		*newSymbol->type=tolower(*newSymbol->type);
	}

	newSymbol->params=params;
	newSymbol->show=show;
	newSymbol->next=NULL;	
	aux=table->symbols;

	if(aux!=NULL){	//Se table ja tem elementos
		while(aux->next!=NULL){
			if (strcmp(aux->name, newSymbol->name)==0 && aux->is_method==0 && newSymbol->is_method==0 ){
				flag=1;
			}
			aux = aux->next;
		}

		if (strcmp(aux->name, newSymbol->name)==0 && aux->is_method==0 && newSymbol->is_method==0){
			flag=1;
		}

		if (flag==0 || flagmethod==1)
			aux->next=newSymbol;

	}else if (aux==NULL && table!=NULL ){	//symtab tem um elemento -> o novo simbolo
		//printf("%s",table->name);
		table->symbols=newSymbol;	
	}
	
	return newSymbol; 
}


params *insert_param(symbol *sym, char *name, char* type){
	params *newParam=(params*) malloc(sizeof(params));
	params *aux;
	
	newParam->name= strdup( name);
	newParam->type= strdup( type);
	
	if (strcmp(newParam->type,"StringArray")==0){
		newParam->type="String[]";
	}else if (strcmp(newParam->type,"Bool")==0){
		newParam->type="boolean";
	}else{
		*newParam->type=tolower(*newParam->type);
	}

	newParam->next=NULL;	
	aux=sym->params;

	if(aux!=NULL){	//Se table ja tem elementos
		while(aux->next!=NULL){
			aux= aux->next;
		}
		aux->next=newParam;
	}else{	//symtab tem um elemento -> o novo simbolo
		sym->params=newParam;	
	}
	
	return newParam; 
}

params *insert_param_table(table_element* table, char *name, char* type){

	params *newParam=(params*) malloc(sizeof(params));
	params *aux;
	
	newParam->name= strdup( name);
	newParam->type= strdup( type);

	if (strcmp(newParam->type,"StringArray")==0){
		newParam->type="String[]";
	}else if (strcmp(newParam->type,"Bool")==0){
		newParam->type="boolean";
	}else{
		*newParam->type=tolower(*newParam->type);
	}

	newParam->next=NULL;	
	aux=table->params;

	if(aux!=NULL){	//Se table ja tem elementos
		while(aux->next!=NULL){
			aux= aux->next;
		}
		aux->next=newParam;
	}else{	//symtab tem um elemento -> o novo simbolo
		table->params=newParam;	
	}

	return newParam; 
}

//Procura um identificador, devolve 0 caso nao exista
symbol *search_el(table_element *table,char *str, int flagfield)
{
	symbol *aux;

	if (table->symbols!=NULL){
		if (flagfield==1){
			for(aux=table->symbols; aux; aux=aux->next)
				{if(strcmp(aux->name, str)==0 && aux->is_method!=1)
					return aux;}
			/*for(aux=table->symbols; aux; aux=aux->next)
				{if(strcmp(aux->name, str)==0)
					return aux;}*/
			
		}
		else{

			for(aux=table->symbols; aux; aux=aux->next)
				{if(strcmp(aux->name, str)==0)
					return aux;
			}
		}
	}
	return NULL;
}



//Procura um identificador, devolve 0 caso nao exista
table_element *search_table(char *str){
	table_element *aux;
	for(aux=symtab; aux; aux=aux->next)
		if(strcmp(aux->name, str)==0)
			return aux;

	return NULL;
}


void show_tables(){
	table_element *aux;
	params *aux2;
	for(aux=symtab; aux; aux=aux->next){
		if (strcmp(aux->type, "Class")==0){
			printf("===== %s %s Symbol Table =====\n", aux->type, aux->name);
			show_symbols(aux->symbols,"Class");
		}else{
			printf("===== %s %s", aux->type, aux->name);
			printf("(");
			if (aux->params!=NULL){
				for(aux2=aux->params; aux2; aux2=aux2->next){
					printf("%s", aux2->type);
					if (aux2->next!=NULL)
						printf(",");
				}
			}
			
			printf(")");
			printf(" Symbol Table =====\n");
			show_symbols(aux->symbols,"");
		}
	
	printf("\n");
	
	}
}


void show_symbols(symbol *sym, char* table_type){
	symbol *aux;
	params *aux2;
	for(aux=sym; aux; aux=aux->next){
		if (aux->show==1){
			printf("%s\t", aux->name);
			if (strcmp(table_type, "Class")==0 && search_table(aux->name)!=NULL && aux->is_method==1){
				printf("(");
				if (aux->params!=NULL){
					for(aux2=aux->params; aux2; aux2=aux2->next){
						printf("%s", aux2->type);
						if (aux2->next!=NULL)
							printf(",");
					}
				}
				printf(")");
			}else{
				if (aux->params!=NULL){
					for(aux2=aux->params; aux2; aux2=aux2->next){
						printf("%s", aux2->type);
						if (aux2->next!=NULL)
							printf(",");
					}
				}
			}
			printf("\t%s", aux->type);
			if(aux->is_par==1){
				printf("\tparam");
			}
			printf("\n");
		}
	}
}


void free_tables(table_element *table) {
	
	if (table == NULL) {
    	return;
  	}
  	
  	if (table->name != NULL) {
    	free(table->name);
  	}
  	
  	if(table->symbols != NULL) {
    	free_symbols(table->symbols);
  	}

	if (table->params != NULL) {
    	free_params(table->params);
  	}

	free_tables(table->next);
	free(table);
}


void free_params(params *params) {
	if (params == NULL) {
    	return;
  	}

  	if (params->name != NULL) {
    	free(params->name);
  	}

	if (params->type != NULL) {
    	free(params->type);
  	}

  	free_params(params->next);
	free(params);
}

void free_symbols(symbol *symbols) {
	if (symbols == NULL) {
    	return;
  	}

  	if (symbols->name != NULL) {
    	free(symbols->name);
  	}
  	if (symbols->type != NULL) {
    	free(symbols->type);
  	}	
  
  	if (symbols->params != NULL) {
    	free_params(symbols->params);
  	}

  	free_symbols(symbols->next);
  	free(symbols);
}



