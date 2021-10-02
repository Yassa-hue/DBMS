//
// Created by yassatamer on 02/10/2021.
//

#ifndef C_DBMS_TABLE_H
#define C_DBMS_TABLE_H



struct table {

};


typedef  struct table table_t;


table_t * table_new();

void table_constructor(table_t * _table, char * _database_name, int _db_name_size, char * _table_name, int _table_name_size);

void table_destructor(table_t * _table);

void table_query(table_t * _table, char * _answer[], int _answer_size);

void table_name(table_t * _table, char * _answer, int _answer_size);


#endif //C_DBMS_TABLE_H
