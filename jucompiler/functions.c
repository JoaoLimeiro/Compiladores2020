#include "structures.h"
#include "functions.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

is_program* insert_program(id_class_list* idclass, type_declaring_list* typeDecl)
{
	is_program* ip=(is_program*)malloc(sizeof(is_program));

	ip->idClassList=idclass;
	ip->typeDeclList=typeDecl;

	return ip;
}

type_declaring_list* insert_decltype(type_declaring_list* head, is_decl* iv)
{
        type_declaring_list* ivl=(type_declaring_list*)malloc(sizeof(type_declaring_list));
        type_declaring_list* tmp;

        ivl->val=iv;
        ivl->next=NULL;

        if(head==NULL)
                return ivl;

        for(tmp=head; tmp->next; tmp=tmp->next);
        tmp->next=ivl;

        return head;
}