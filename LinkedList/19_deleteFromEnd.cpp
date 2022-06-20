#include <iostream>
#include "List.h"

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int length = 0;
    struct ListNode *dummy = (ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *p = head;

    // get length
    while(p){
        length++;
        p = p->next;
    }

    // delete
    int index = length - n;
    p = dummy;
    for(int j = 0; j<index; j++){
        p = p->next;
    }
    struct ListNode* q = p->next;
    p->next = q->next;
    free(q);
    return dummy->next;
}

int main() {
    int length = 5;
    int array[5] = {5,6,7,8,9};
    struct ListNode* p = createList(array, length);
    printList(p);

    p = removeNthFromEnd(p, 2);
    printList(p);
    return 0;
}
