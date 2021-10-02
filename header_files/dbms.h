//
// Created by yassatamer on 02/10/2021.
//

#ifndef C_DBMS_DBMS_H
#define C_DBMS_DBMS_H

#include "../header_files/data_base_t.h"




struct DBMS {

};

typedef struct DBMS DBMS_t;


DBMS_t * dbms_new();

void dbms_construct(DBMS_t * _dbms);


void dbms_destruct(DBMS_t * _dbms);


void dbms_query(DBMS_t *_dbms, char * query, data_base_t * _database);





#endif //C_DBMS_DBMS_H
