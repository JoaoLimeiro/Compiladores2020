#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct _s9 {
        char* id;
}is_write_statement;

/*NOTA! Podia simplificar-se, mas mantemos as convencoes para demonstrar o conceito*/
typedef enum {d_write} disc_write;

typedef struct _s8 {
        disc_write disc_d;
        union{
                is_write_statement* u_write_statement;
        } data_statement;
} is_statement;

typedef struct _s7 {
        is_statement* val;
        struct _s7* next;
} is_statement_list;

typedef struct _s4 {
        char* id;
} is_integer_dec;

typedef struct _s5 {
        char* id;
} is_character_dec;

typedef struct _s6 {
        char* id;
} is_double_dec;

typedef enum {d_integer, d_character, d_double} disc_vardec;

typedef struct _s3 {
        disc_vardec disc_d;
        union{                  /* NOTA! Esta parte pode simplificar para ficar apenas um campo a char*. Mantemos assim para mostrar os metodo "comum"*/
                is_integer_dec* u_integer_dec;
                is_character_dec* u_character_dec;
                is_double_dec* u_double_dec;
        }data_vardec;
} is_decl;


typedef struct _s2 {
        is_decl* val;
        struct _s2* next;
} type_declaring_list;

typedef struct _s1 {
    id_class_list* idClassList;
    type_declaring_list* typeDeclList;
} is_program;

#endif
