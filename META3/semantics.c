#include "structures.h"
#include "semantics.h"
#include "symbol_table.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int allow=0;
int var=0;
int lshiftvar;

int check_program(Tree *tree) {
int allowb4=0;
if (tree==NULL){
return 0;}
    if (strcmp(tree->type, "Program")==0){
        check_class(tree);
    }
    else if (strcmp(tree->type, "MethodDecl")==0){
      //check_program(tree->child) ;
table_element *auxsymtab;
auxsymtab=check_methodHeader(tree->child);
//Tree *aux;
check_program(tree->neighbor) ;
/*
if (tree->child->neighbor->child!=NULL){
var=1;
for (aux=tree->child->neighbor->child; aux; aux=aux->neighbor){

if (strcmp(aux->type,"VarDecl")==0)
	check_varDecl(aux) ;
}}
var=0;*/
//check_program(tree->neighbor) ;

current_symtab=auxsymtab;
check_program(tree->child->neighbor);
    }
    else if (strcmp(tree->type, "FieldDecl")==0){
check_fieldDecl(tree);
}
    else if (strcmp(tree->type, "MethodHeader")==0){


check_program(tree->neighbor) ;
}

    else if (strcmp(tree->type, "MethodBody")==0){
	check_program(tree->child);
}
    else if (strcmp(tree->type, "VarDecl")==0){
	check_varDecl(tree);
check_program(tree->neighbor);



}

 else if ((strcmp(tree->type, "Id") == 0 || strcmp(tree->type, "DecLit") == 0 || strcmp(tree->type, "BoolLit") == 0 || strcmp(tree->type, "RealLit") == 0 || strcmp(tree->type, "StrLit") == 0)){
		check_type(tree);
	}
 else if (strcmp(tree->type, "Assign")==0){
	
		check_operator_assign(tree);
check_program(tree->neighbor);

}
else if (strcmp(tree->type, "Eq") == 0 || strcmp(tree->type, "Ne") == 0 || strcmp(tree->type, "Le") == 0 || strcmp(tree->type, "Ge") == 0 || strcmp(tree->type, "Lt") == 0 || strcmp(tree->type, "Gt") == 0) {
	check_operator_comp(tree);

}


  else if (strcmp(tree->type, "Add") == 0|| strcmp(tree->type, "Sub") == 0|| strcmp(tree->type, "Div") == 0|| strcmp(tree->type, "Mul") == 0 || strcmp(tree->type, "Mod") == 0){
	check_operator_calc(tree);

}
else if (strcmp(tree->type, "Not") == 0 || strcmp(tree->type, "Or") == 0|| strcmp(tree->type, "And") == 0 || strcmp(tree->type, "Xor")==0){

check_operator_logical(tree);
  }
else if (strcmp(tree->type, "Minus")==0 || strcmp(tree->type, "Plus")==0){
	check_operator_minplus(tree);
}
 else if (strcmp(tree->type, "ParseArgs")==0 || strcmp(tree->type, "Length")==0){
	check_operator_ints(tree);
}

else if (strcmp(tree->type, "Lshift")==0 || strcmp(tree->type, "Rshift")==0){
	tree->annot="none";
allowb4=allow;
lshiftvar=1;
allow=0;
//allow=1;
	check_program(tree->child);
	

if (allowb4 ==1)
	allow=1;
else
	allow=0;
lshiftvar=0;
check_program(tree->neighbor);

}


else if (strcmp(tree->type, "If")==0 || strcmp(tree->type, "Else")==0){
allowb4=allow;

allow=1;
check_program(tree->child);
if (allowb4 ==1)
	allow=1;
else
	allow=0;
check_program(tree->neighbor);



}


else if (strcmp(tree->type, "Call")==0){
check_operator_call(tree);
check_program(tree->neighbor);
}

  else if (strcmp(tree->type, "Return")==0 || strcmp(tree->type, "Print")==0){
allowb4=allow;

allow=1;
check_program(tree->child);
if (allowb4 ==1)
	allow=1;
else
	allow=0;

check_program(tree->neighbor);
}
    else if (strcmp(tree->type, "While")==0){
		allowb4=allow;

		allow=1;
		check_program(tree->child);
		if (allowb4 ==1)
			allow=1;
		else
			allow=0;
		check_program(tree->neighbor);

	}
/*
    else if (strcmp(tree->type, "If")==0){}
    else if (strcmp(tree->type, "Block")==0){}
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

{check_program(tree->child);
    check_program(tree->neighbor);

}

   
    return 0;
}

int check_class(Tree* class) {

		   symtab=create_table(class->child->value,"Class");

		   check_program(class->child);
    return 0;
}

table_element* check_methodHeader(Tree* methodHeader) {
if (methodHeader->child!=NULL ){

	    Tree *aux=methodHeader->child->neighbor;

	    
		
		if (check_signature(symtab,methodHeader)==0){
current_symtab=create_table(aux->value, "Method");
		insert_el(current_symtab,"return",methodHeader->child->type,NULL,0,0,1);
			current_el=insert_el(symtab,aux->value,methodHeader->child->type,NULL,0,1,1);
			if(methodHeader->child->neighbor->neighbor->child!=NULL){
				check_paramDecl(methodHeader->child->neighbor->neighbor->child,current_el,1);
 }
}		/*else{
			current_el=insert_el(symtab,aux->value,methodHeader->child->type,NULL,0,1,0);
			if(methodHeader->child->neighbor->neighbor->child!=NULL){
				check_paramDecl(methodHeader->child->neighbor->neighbor->child,NULL,0);
}

}*/}

check_program(methodHeader->child);



    return current_symtab;
}

void check_paramDecl(Tree* paramDecl, symbol* sym,int tipo){
	Tree *aux;
if (tipo==1){
	for (aux=paramDecl;aux; aux=aux->neighbor){
		insert_el(current_symtab,aux->child->neighbor->value,aux->child->type,NULL,1,0,1);
		insert_param(sym, aux->child->value,aux->child->type);
		insert_param_table(current_symtab, aux->child->value,aux->child->type);

	
	}
}else{
	for (aux=paramDecl;aux; aux=aux->neighbor){
		insert_el(current_symtab,aux->child->neighbor->value,aux->child->type,NULL,1,0,1);

		insert_param_table(current_symtab, aux->child->value,aux->child->type);
}

}
}



int check_signature(table_element * table, Tree * method) {
/*
    Tree * auxtree;
    params * params;
char str[40];

char *type;

    int ngiven = 0;
    int nparams = 0;
    int nsimilar = 0;
    symbol * aux;


    for (auxtree =  method -> child -> neighbor -> neighbor->child; auxtree; auxtree = auxtree -> neighbor) {
      ngiven++;

    }

str[2]='b';
    if (table -> symbols != NULL) {

      for (aux = table -> symbols; aux; aux = aux -> next) {
        nparams = 0;
        nsimilar = 0;

        if (aux -> is_method == 1) {
	


 if (strcmp(method -> child -> type, "Void") == 0)  {
    type = "void";
  }
else if (strcmp(method -> child -> type, "StringArray") == 0 ) {
    type = "String[]";
  }
else	if ( strcmp(method -> child -> type, "Double") == 0 ) {
    type = "double";
  }
  else if ( strcmp(method -> child -> type, "Int") == 0 ) {
    type = "int";
  }
 else if ( strcmp(method -> child -> type, "Boolean") == 0 ) {
    type = "boolean";}
else if ( strcmp(method -> child -> type, "String") == 0 ) {
    type = "String";
  }




          if (strcmp(aux->type, type) == 0) {
		//printf("%s -- %s ",aux -> name,method -> child -> neighbor -> value);
//printf("%s ---- %s ",aux -> name,method -> child -> neighbor -> value);
            if (strcmp(aux -> name, method -> child -> neighbor -> value) == 0) {

              for (params = aux -> params; params; params = params -> next) {
                nparams++;
              }
              //printf("%d - %d ",nparams,ngiven);
              if (nparams == ngiven) {
                if (nparams == 0) {
                  return 0;
                }

                params = aux -> params;

                for (auxtree = method -> child -> neighbor -> neighbor->child; auxtree; auxtree = auxtree -> neighbor) { //printf("%s - %s ",auxtree -> child -> type,params -> type);
			
 if (strcmp(auxtree -> child -> type, "Void") == 0 ) {
    type = "void";
  }
else if (strcmp(auxtree -> child -> type, "StringArray") == 0)  {
    type = "String[]";
  }
else	if ( strcmp(auxtree -> child -> type, "Double") == 0 ) {
    type = "double";
  }
  else if ( strcmp(auxtree -> child -> type, "Int") == 0 ) {
    type = "int";
  }
 else if ( strcmp(auxtree -> child -> type, "Boolean") == 0)  {
    type = "boolean";
  }
else if ( strcmp(method -> child -> type, "String") == 0 ) {
    type = "String";
  }

                  if  ( strcmp(type,params->type) == 0 ) {

			nsimilar++;

}
		  //else if	((strcmp(auxtree -> child -> type, "Double") == 0 && strcmp("int", params -> type) == 0) || (strcmp(auxtree -> child -> type, "Int") == 0 && strcmp("double", params -> type) == 0) || (strcmp(auxtree -> child -> type, "Double") == 0 && strcmp("double", params -> type) == 0) || (strcmp(auxtree -> child -> type, "Int") == 0 && strcmp("int", params -> type) == 0)) {


                  //  nsimilar++;
                  //}
                  params = params -> next;
//printf("%d,,%d", nparams, nsimilar);
                
              }if (nparams==nsimilar){

		return 1;}

            }
          }

        }
      }
      }
    } */
      return 0;

    }





void check_fieldDecl(Tree* fieldDecl){
	if (fieldDecl->child!=NULL ){

	    Tree *aux=fieldDecl->child->neighbor;
	    char *type=strdup(fieldDecl->child->type);


	 insert_el(symtab,aux->value,type,NULL,0,0,1);
}
check_program(fieldDecl->neighbor);
}

void check_varDecl(Tree* varDecl){
//if (var==){
	if (varDecl->child!=NULL ){


	    Tree *aux=varDecl->child->neighbor;
	    char *type=strdup(varDecl->child->type);


	 insert_el(current_symtab,aux->value,type,NULL,0,0,1);
//}
}
}


void check_operator_assign(Tree* operator){
	int allowb4=allow;
allow=1;
	check_program(operator->child);



 if (operator->child!=NULL && operator->child->annot!=NULL){/*

if ( strcmp(operator->child->annot, "int") == 0 && strcmp(operator->child->neighbor->annot, "double") == 0) {
    operator->annot = "int";
  }
else if ( strcmp(operator->child->annot, "double") == 0 && strcmp(operator->child->neighbor->annot, "int") == 0) {
    operator->annot = "double";
  }
	else if ( strcmp(operator->child->annot, "double") == 0 || strcmp(operator->child->neighbor->annot, "double") == 0) {
    operator->annot = "double";
  }
  else if ( strcmp(operator->child->annot, "int") == 0 || strcmp(operator->child->neighbor->annot, "int") == 0) {
    operator->annot = "int";
  }
else if (strcmp(operator->child->annot, "boolean") == 0 || strcmp(operator->child->neighbor->annot, "boolean") == 0) {
    operator->annot = "boolean";
  }
 */

if ( strcmp(operator->child->annot, "double") == 0 ) {
    operator->annot = "double";
  }
  else if ( strcmp(operator->child->annot, "int") == 0 ) {
    operator->annot = "int";
  }
else if (strcmp(operator->child->annot, "boolean") == 0 ){
    operator->annot = "boolean";
  }


}

if (allowb4 ==1)
	allow=1;
else
	allow=0;
}




void check_operator_comp(Tree* operator){
	int allowb4=allow;
allow=1;
check_program(operator->child);


if (strcmp(operator->child->annot,operator->child->neighbor->annot)==0 ||( strcmp(operator->child->annot,"int")==0 && strcmp(operator->child->neighbor->annot,"double")==0) || ( strcmp(operator->child->annot,"double")==0 && strcmp(operator->child->neighbor->annot,"int")==0))
	    operator->annot = "boolean";
	else
		 operator->annot = "undef";

   // operator->annot = "boolean";
  
 
if (allowb4 ==1)
	allow=1;
else
	allow=0;
check_program(operator->neighbor);


}

void check_operator_logical(Tree* operator){
	int allowb4=allow;
allow=1;
check_program(operator->child);

if (strcmp(operator->type,"Not")==0){

	//if (strcmp(operator->child->annot,"boolean")==0)
	    operator->annot = "boolean";
	//else
		 //operator->annot = "undef";
}

else{
	if (strcmp(operator->child->annot,"boolean")==0 &&strcmp(operator->child->neighbor->annot,"boolean")==0)
	    operator->annot = "boolean";
	else
		 operator->annot = "undef";}
  
 if (allowb4 ==1)
	allow=1;
else
	allow=0;
check_program(operator->neighbor);


}

void check_operator_minplus(Tree* operator){
	int allowb4=allow;
allow=1;
check_program(operator->child);
if (strcmp(operator->child->annot,"boolean")==0 ||strcmp(operator->child->annot,"String")==0 )
operator->annot="undef";
	
else
    operator->annot = operator->child->annot;	
  
 
if (allowb4 ==1)
	allow=1;
else
	allow=0;
check_program(operator->neighbor);


}


void check_operator_ints(Tree* operator){
	int allowb4=allow;
allow=1;
check_program(operator->child);
//if (strcmp(operator->child->annot,"String[]")==0 )
    operator->annot = "int";

//else 
//operator->annot = "undef";
  
/*
else if (strcmp(operator->type,"ParseArgs") ==0)
	operator->annot = "int";*/

 if (allowb4 ==1)
	allow=1;
else
	allow=0;
check_program(operator->neighbor);


}



void check_operator_call(Tree* operator){
	int allowb4=allow;
allow=1;


 check_program(operator->child->neighbor);


if (allowb4 ==1)
	allow=1;
else
	allow=0;



 search_method(symtab,operator);
if (operator->annot==NULL){
	operator->annot="undef";
	operator->child->annot="undef";

}


}


void  search_method(table_element * table, Tree * call){


Tree *auxtree;
params* params;
int ngiven=0; 
int nparams=0;
int nequal=0;
int nsimilar=0;
symbol *aux;
char str[40]="";
char str2[40]="";
int flag=0;
int nequalmax=0;

for(auxtree=call->child->neighbor; auxtree; auxtree=auxtree->neighbor){
	ngiven++;

}

if (table->symbols!=NULL){
	for(aux=table->symbols; aux; aux=aux->next){
nparams=0;
nsimilar=0;
strcpy(str,str2);


	if(strcmp(aux->name, call->child->value)==0 ){
			for (params=aux->params; params; params=params->next){
				nparams++;
				}
			//printf("%d - %d ",nparams,ngiven);
			if (nparams==ngiven){
				if (nparams==0){
				call->annot=aux->type;
				call->child->annot="()";
flag=1;
				break;
				}
			
				nequal=0;
				params=aux->params;
				for(auxtree=call->child->neighbor; auxtree; auxtree=auxtree->neighbor){					//printf("%s - %s ",auxtree->annot,params->type);
					
					if (strcmp(auxtree->annot,params->type)==0){
						nequal++;
					}params=params->next;


				}
				if (nequal==nparams){
					call->annot= aux->type;
					strcat(str,"(");
					for(auxtree=call->child->neighbor; auxtree; auxtree=auxtree->neighbor){
//printf("%s ",auxtree->annot);
						strcat(str,auxtree->annot);
						if (auxtree->neighbor!=NULL){
							strcat(str,",");
						}
					}
					strcat(str,")");

					call->child->annot=strdup(str);	
					//printf("%s ",call->child->annot);
flag=1;
				break;
				}
				else{
					params=aux->params;
					nequal=0;
					for(auxtree=call->child->neighbor; auxtree; auxtree=auxtree->neighbor){

						if (strcmp(auxtree->annot,params->type)==0){
							nequal++;
							nsimilar++;
						}
							
						 else if( (strcmp(auxtree->annot,"double")==0 && strcmp("int",params->type)==0) || (strcmp(auxtree->annot,"int")==0 && 							strcmp("double",params->type)==0)){
							nsimilar++;
						}
						params=params->next;
					}
						if (nsimilar==nparams && nequal>nequalmax){
nequalmax=nequal;
						call->annot= aux->type;
						strcat(str,"(");
						for(params=aux->params; params; params=params->next){

							strcat(str,params->type);
							if (params->next!=NULL){
								strcat(str,",");
							}
						}
						strcat(str,")");
						call->child->annot=strdup(str);	
flag=2;
						
					}		 
				/**/

					
				}

					
			

					
						

			}
		}
	}

}

//return 0;

}


void check_operator_calc(Tree* operator){
int allowb4=allow;

	if ( lshiftvar!=1){
allow=1;
check_program(operator->child);
if (operator->child!=NULL && operator->child->annot!=NULL && lshiftvar!=1){

 if (strcmp(operator->child->annot, "undef") == 0 || strcmp(operator->child->neighbor->annot, "undef") == 0) {
    operator->annot = "undef";
  }
else if (strcmp(operator->child->annot, "none") == 0 || strcmp(operator->child->neighbor->annot, "none") == 0) {
    operator->annot = "undef";
  }
else if (operator->child!=NULL && operator->child->annot!=NULL){
	if ( strcmp(operator->child->annot, "double") == 0 || strcmp(operator->child->neighbor->annot, "double") == 0) {
    operator->annot = "double";
  }
  else if ( strcmp(operator->child->annot, "int") == 0 || strcmp(operator->child->neighbor->annot, "int") == 0) {
    operator->annot = "int";
  }
 else if ( strcmp(operator->child->annot, "boolean") == 0 || strcmp(operator->child->neighbor->annot, "boolean") == 0) {
    operator->annot = "undef";
  }
 
if (allowb4 ==1)
	allow=1;
else
	allow=0;
}}}
check_program(operator->neighbor);

}

void check_type(Tree *tree){
if (allow==1 ){
	if (strcmp(tree->type, "Id") == 0 ) {

		symbol *current=search_el(current_symtab,tree->value,1);
		symbol *global=search_el(symtab,tree->value,1);

		if (current!=NULL){
			
				tree->annot=current->type;
		}
		 else if (global!=NULL){

				tree->annot=global->type;
		}
		else{
					

			tree->annot =strdup( "undef");
		}

	}
	else if (strcmp(tree->type, "RealLit") == 0) {
		tree->annot=strdup("double");
	}
	else if (strcmp(tree->type, "DecLit") == 0) {
		tree->annot=strdup("int");
	}
	else if (strcmp(tree->type, "BoolLit") == 0) {
		tree->annot=strdup("boolean");
	}
	else if (strcmp(tree->type, "StrLit") == 0) {
		tree->annot=strdup("String");
	}

}else{

tree->annot="none";
}
if (strcmp(tree->type, "RealLit") == 0) {
		tree->annot=strdup("double");
	}
	else if (strcmp(tree->type, "DecLit") == 0) {
		tree->annot=strdup("int");
	}
	else if (strcmp(tree->type, "BoolLit") == 0) {
		tree->annot=strdup("boolean");
	}
	else if (strcmp(tree->type, "StrLit") == 0) {
		tree->annot=strdup("String");
	}
 
    check_program(tree->neighbor);}
