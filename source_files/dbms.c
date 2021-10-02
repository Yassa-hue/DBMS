//
// Created by yassatamer on 02/10/2021.
//

#include "../header_files/data_base_t.h"




struct DBMS {
    char *path;
    int databases_size;
    data_base_t *databases [];
};

typedef struct DBMS DBMS_t;


DBMS_t * dbms_new() {
    // code
}

void dbms_construct(DBMS_t * _dbms) {
    // code
}


void dbms_destruct(DBMS_t * _dbms) {
    // code
}


void dbms_query(DBMS_t *_dbms, char * query, data_base_t * _database) {
    // code
}


