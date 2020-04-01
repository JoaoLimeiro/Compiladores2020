
#include "structures.h"

is_program* insert_program(is_vardec_list* ivl, is_statement_list* isl);
is_vardec_list* insert_vardec_list(is_vardec_list* head, is_vardec* iv);
is_vardec* insert_integer_dec(char* id);
is_vardec* insert_character_dec(char* id);
is_vardec* insert_double_dec(char* id);
is_statement_list* insert_statement_list(is_statement_list* head, is_statement* is);
is_statement* insert_write_statement(char* id);

