int check_signature(table_element * table, tree * method) {

    Tree * auxtree;
    params * params;
    int ngiven = 0;
    int nparams = 0;
    int nsimilar = 0;
    symbol * aux;


    for (auxtree =  method - > child - > neighbor - > neighbor; auxtree; auxtree = auxtree - > neighbor) {
      ngiven++;

    }

    if (table - > symbols != NULL) {
      for (aux = table - > symbols; aux; aux = aux - > next) {
        nparams = 0;
        nsimilar = 0;
        strcpy(str, str2);
        if (aux - > is_method == 1) {
          if (strcmp(aux - > type, method - > child - > type) == 0) {
            if (strcmp(aux - > name, method - > child - > neighbor - > value) == 0) {

              for (params = aux - > params; params; params = params - > next) {
                nparams++;
              }
              //printf("%d - %d ",nparams,ngiven);
              if (nparams == ngiven) {
                if (nparams == 0) {
                  return 1;
                }


                params = aux - > params;
                for (auxtree = method - > child - > neighbor - > neighbor; auxtree; auxtree = auxtree - > neighbor) { //printf("%s - %s ",auxtree->annot,params->type);

                  if (strcmp(auxtree - > child - > type, params - > type) == 0 || (strcmp(auxtree - > child - > type, "double") == 0 && strcmp("int", params - > type) == 0) || (strcmp(auxtree - > child - > type, "int") == 0 && strcmp("double", params - > type) == 0)) {
                    nsimilar++;
                  }
                  params = params - > next;

                
              }if (nparams==nsimilar){
		return 1;}

            }
          }

        }
      }

      return 0;

    }
