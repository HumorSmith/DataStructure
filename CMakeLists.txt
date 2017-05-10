cmake_minimum_required(VERSION 3.6)
project(data_structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c link_list/array.h link_list/array.c common.h common.c link_list/single_linklist.h link_list/single_linklist.c link_list/double_linklist.h link_list/double_linklist.c queue/queue_array.h queue/queue_list.c queue/queue_array.c queue/queue_list.h stack/stack_array.h stack/stack_array.c stack/stack_list.h stack/stack_list.c)
add_executable(data_structure ${SOURCE_FILES})