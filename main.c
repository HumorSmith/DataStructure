#include <stdio.h>
#include "link_list/array.h"
#include "link_list/single_linklist.h"
#include "link_list/double_linklist.h"
#include "queue/queue_array.h"
#include "stack/stack_array.h"
#include "stack/stack_list.h"
#include "queue/queue_list.h"
#include "map/hashmap.h"
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


//void testStackArray() {
//    PSTACK_ARRAY stack_array = NULL;
//    init_stack_array(&stack_array);
//    int a = 1;
//    push_stack_array(stack_array, &a);
//    a = 2;
//    push_stack_array(stack_array, &a);
//
//    print_stack_array(stack_array);
//
//    destroy_stack_array(&stack_array);
//}

//void testStackList() {
//    PSTACK_LIST pstack_list = NULL;
//    init_stack_list(&pstack_list);
//    int a=1;
//    push_stack_list(pstack_list,&a);
//    a=2;
//    push_stack_list(pstack_list,&a);
//    print_stack_list(pstack_list);
//    destroy_stack_list(&pstack_list);
//}

void testHashMap(){
     HashMap * map = create_hash_table();
    HashNode * node = malloc(sizeof(HashNode));
    node->key = 1;

    int *a = malloc(sizeof(int));
    *a = 10;
    hash_put(map,1,a);


    printf("==========================");
    HashNode * hashNode = map->value[1];
    printf("data = %d",*hashNode->data);

}

void test_queue_array() {
    PQueueArr queueArr;
    init_queue_array(&queueArr);
    int data = 0;
    enqueue_array(queueArr, &data);

    int data1 = 1;
    enqueue_array(queueArr, &data1);


    int data2 = 2;
    enqueue_array(queueArr, &data2);



    int data3 = 3;
    enqueue_array(queueArr, &data3);


    int data4 = 4;
    enqueue_array(queueArr, &data4);


    int data5 = 5;
    enqueue_array(queueArr, &data5);


    int data6 = 6;
    enqueue_array(queueArr, &data6);




    print_queue_array(queueArr);
    int deData = 10;
    for (int i = 0; i < 10; ++i) {
        dequeue_array(queueArr, &deData);
        printf("\n delete data is %d\n", deData);
    }

 //   print_queue_array(queueArr);



}

//void test_queue_list() {
//    PQUEUE_LIST pqueue_list = NULL;
//    init_queue_list(&pqueue_list);
//    int a = 2;
//    en_quque_list(pqueue_list, &a);
//    a = 3;
//    en_quque_list(pqueue_list, &a);
//    a = 4;
//    en_quque_list(pqueue_list, &a);
//
//    print_queue_list(pqueue_list);
//
//    destroy_queue_list(&pqueue_list);
//}

int main() {
    testHashMap();
    return 0;
}