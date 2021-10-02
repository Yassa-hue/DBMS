//
// Created by yassatamer on 02/10/2021.
//

#ifndef C_DBMS_DATA_BASE_T_H
#define C_DBMS_DATA_BASE_T_H


struct data_base {

};


typedef  struct data_base data_base_t;


data_base_t * data_base_new();

void data_base_constructor(data_base_t * _data_base, char * _database_name, int _db_name_size);

void data_base_destructor(data_base_t * _data_base);

void data_base_query(data_base_t * _data_base, char * _answer[], int _answer_size);

void data_base_name(data_base_t * _data_base, char * _answer, int _answer_size);


#endif //C_DBMS_DATA_BASE_T_H
