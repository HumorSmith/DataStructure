//
// Created by Eavawu on 30/04/2017.
//

#include "array.h"
#include <math.h>
void init_arr(struct Array *array) {
    array->data = malloc(sizeof(ELEMENT) * ARR_MAXSIZE);
    if (!array->data)
        exit(OVERFLOW); /* 存储分配失败 */
    array->len = 0;
    array->size = ARR_MAXSIZE;
};

void destroy_arr(struct Array *array) {
    array->len = 0;
    array->size = 0;
    free(array->data);
    array->data = NULL;
}

void clean_arr(struct Array *array) {
    array->len = 0;
}

bool is_empty(struct Array *array) {
    if (array->len == 0) {
        return true;
    }
    return false;
}

int get_length(struct Array *array) {
    return array->len;
}

bool get_element(struct Array *array, int i, ELEMENT *data) {
    if (i > array->len) {
        return false;
    }
    *data = array->data[i - 1];
    return true;
}

bool add_element(struct Array *array, int i, ELEMENT *data) {
    if (i < 1 || i > array->len + 1) {
        return false;
    }
    ELEMENT *newBase;
    if (array->len > array->size) {
        newBase = realloc(array->data, (ARR_MAXSIZE + array->size) * sizeof(ELEMENT));
        if (!newBase)
            exit(OVERFLOW); /* 存储分配失败 */
        array->data = newBase;
        array->size = ARR_MAXSIZE + array->size;
    }
    int q = i - 1;
    //往后移动.用来插入
    for (int j = array->len - 1; j >= q; --j) {
        array->data[j + 1] = array->data[j];
    }
    array->data[q] = *data;
    array->len += 1; /* 表长增1 */
    return true;
};

bool del_element(struct Array *array, int i, ELEMENT *data) {
    if (i < 1 || i > array->len) {
        return false;
    }
    int p = i - 1;
    *data = array->data[p];
    for (p = p + 1; p < array->len; ++p) {
        array->data[p - 1] = array->data[p];
    }
    array->len -= 1;

}

void tranverse(struct Array *array) {
    int i;
    for (i = 0; i < array->len; ++i) {
        printf("%d\t", array->data[i]);
    }

}

