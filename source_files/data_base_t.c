//
// Created by yassatamer on 02/10/2021.
//



#include "../header_files/table.h"

struct data_base {
    char *name, *path;
    int table_size;
    table_t * tables [];
};


typedef  struct data_base data_base_t;


data_base_t * data_base_new() {
    // code
}

void data_base_constructor(data_base_t * _data_base, char * _database_name, int _db_name_size) {
    // code
}

void data_base_destructor(data_base_t * _data_base) {
    // code
}

void data_base_query(data_base_t * _data_base, char * _answer[], int _answer_size) {
    // code
}

void data_base_name(data_base_t * _data_base, char * _answer, int _answer_size) {
    // code
}