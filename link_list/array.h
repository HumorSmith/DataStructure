//
// Created by Eavawu on 30/04/2017.
//

#ifndef DATA_STRUCTURE_LINEAR_LIST_H
#define DATA_STRUCTURE_LINEAR_LIST_H

#include <stdlib.h>
#include "../common.h"
#include <stdbool.h>
#define ARR_MAXSIZE 10
struct Array {
    ELEMENT *data;
    int len;
    int size;
} Array;

void init_arr(struct Array *array);

void destroy_arr(struct Array *array);

void clean_arr(struct Array *array);

bool is_empty(struct Array *array);

int get_length(struct Array *array);

bool get_element(struct Array *array, int i, ELEMENT *data);

bool add_element(struct Array *array, int i, ELEMENT *data);

bool del_element(struct Array *array, int i, ELEMENT *data);

void tranverse(struct Array *array);

void print_arr(struct Array * array);

#endif //DATA_STRUCTURE_LINEAR_LIST_H
