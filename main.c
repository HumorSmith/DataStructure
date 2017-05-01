#include <stdio.h>
#include "link_list/array.h"

void testArray() {
    struct Array array;
    init_arr(&array);
    int first = 10;
    add_element(&array, 1, &first);
    int second = 11;
    add_element(&array, 2, &second);
    // tranverse(&array);
    int third = 12;
    add_element(&array, 1, &third);
    tranverse(&array);
    printf("\n");
    int result;
    del_element(&array, 1, &result);
    printf("delete element is=%d\n",result);
    tranverse(&array);

}

int main() {
    testArray();
//    printf("hello world");
    return 0;
}