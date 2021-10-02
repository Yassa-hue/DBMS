cmake_minimum_required(VERSION 3.16)
project(C_DBMS C)

set(CMAKE_C_STANDARD 99)

add_executable(C_DBMS main.c source_files/dbms.c header_files/dbms.h header_files/table.h source_files/table.c header_files/data_base_t.h source_files/data_base_t.c)