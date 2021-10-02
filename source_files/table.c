//
// Created by yassatamer on 02/10/2021.
//

struct table {
    char *name, *path, *table;
};


typedef  struct table table_t;


table_t * table_new() {
    // code
}

void table_constructor(table_t * _table, char * _database_name, int _db_name_size, char * _table_name, int _table_name_size) {
    // code
}

void table_destructor(table_t * _table) {
    // code
}

void table_query(table_t * _table, char * _answer[], int _answer_size) {
    // code
}



void table_name(table_t * _table, char * _answer, int _answer_size) {
    // code
}