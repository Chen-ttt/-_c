#include <iostream>
#include "List.h"

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *dummy = (ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* temp = dummy;
    struct ListNode *node1, *node2;
    // swap
    while (temp->next && temp->next->next){
        node1 = temp->next;
        node2 = temp->next->next;

        node1->next = node2->next;
        node2->next = node1;
        temp->next = node2;
        temp = temp->next->next;
    }
    return dummy->next;
}

int main() {
    int length = 0;
    int array[0] = {};
    struct ListNode* p = createList(array, length);
    printList(p);

    p = swapPairs(p);
    printList(p);
    return 0;
}
