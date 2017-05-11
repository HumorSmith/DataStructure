#include <stdio.h>
#include "link_list/array.h"
#include "link_list/single_linklist.h"
#include "link_list/double_linklist.h"
#include "queue/queue_array.h"
//void testArray() {
//    struct Array array;
//    init_arr(&array);
//    int first = 10;
//    add_element(&array, 1, &first);
//    int second = 11;
//    add_element(&array, 2, &second);
//    // tranverse(&array);
//    int third = 12;
//    add_element(&array, 1, &third);
//    tranverse(&array);
//    printf("\n");
//    int result;
//    del_element(&array, 1, &result);
//    printf("delete element is=%d\n",result);
//    tranverse(&array);
//
//}

//void testSingleList() {
//    PNode pHead;
//    init_slist(&pHead);
//    insert_element_slist(pHead, 1, 12);
//    insert_element_slist(pHead, 2, 13);
//    insert_element_slist(pHead, 3, 14);
//    insert_element_slist(pHead, 4, 15);
//    int deleteResult;
//    //  del_element_slist(&head, 1, &deleteResult);
//    del_element_slist(pHead, 4, &deleteResult);
//    //printf("delete result is %d\n", deleteResult);
//
//    print_slist(pHead);
//    printf("\n");
//    Node *pNewHead = reverse_slist_plus(pHead);
//    print_slist(pNewHead);
//
//}


//void testDoubleList() {
//    PDNode pHead = NULL;
//    init_dlist(&pHead);
//    insert_element_dlist(pHead, 1, 1);
//    insert_element_dlist(pHead, 1, 2);
//    insert_element_dlist(pHead, 1, 3);
//    insert_element_dlist(pHead, 4, 4);
//    int delResult;
//    del_element_dlist(pHead,4,&delResult);
//    del_element_dlist(pHead,1,&delResult);
//    del_element_dlist(pHead,1,&delResult);
//    del_element_dlist(pHead,1,&delResult);
//    print_dlist(pHead);
//
//}

void test_queue_array() {
    PQueueArr queueArr;
    init_queue_array(&queueArr);
    enqueue_array(queueArr, 1);
    enqueue_array(queueArr, 2);
    print_queue_array(queueArr);
    int data;
    dequeue_array(queueArr, &data);
    printf("\n delete data is %d", data);

}

int main() {
    test_queue_array();
    return 0;
}