#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include <ctype.h>

typedef struct _p{
	char *name;
	char *type;
	struct _p *next;
} params;


typedef struct _s{
	char *name;
	char *type;
	int is_par;
	int is_method;
	int show;
	params * params;
	struct _s *next;
} symbol;



typedef struct _t1{
	char *name;
	char *type;
	symbol * symbols;
params * params;
	struct _t1 *next;
} table_element;


void show_table();
symbol *insert_el(table_element *table, char *str,char *t ,params * params,int flagpar,int flagmethod,int show);
table_element *create_table(char * name,char * type);
table_element *create_temp_table();
table_element *search_table(char *str);
params *insert_param(symbol *sym, char *name, char* type);
params *insert_param_table(table_element* table, char *name, char* type);
symbol *search_el(table_element *table,char *str, int flagfield);
void show_symbols(symbol *sym, char* table_type);
void free_tables(table_element *table);
void free_symbols(symbol *symbols);
void free_params(params *params);

void show_tables();
table_element *symtab;
table_element *current_symtab;
#endif