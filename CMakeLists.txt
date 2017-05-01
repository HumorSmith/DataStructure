cmake_minimum_required(VERSION 3.6)
project(data_structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c link_list/array.h link_list/array.c common.h common.c)
add_executable(data_structure ${SOURCE_FILES})