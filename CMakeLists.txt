cmake_minimum_required(VERSION 3.7)
project(setpartition)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c sp_item.c sp_set.c sp_partition.c handy_list.c )
add_executable(setpartition ${SOURCE_FILES})