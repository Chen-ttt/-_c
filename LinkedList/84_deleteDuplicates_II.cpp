#include <iostream>
#include "List.h"

struct ListNode* deleteDuplicates(struct ListNode* head){
    // set dummy node to avoid head node is duplicate
    struct ListNode *dummy = (ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;

    // point to position of processing
    struct ListNode *p = dummy;
    struct ListNode *forFree;
    int duplicate;

    while (p->next){
        if (p->next->next && p->next->val == p->next->next->val){
            duplicate = p->next->val;
        }
        if(p->next->val == duplicate){
            forFree = p->next;
            p->next = forFree->next;
            free(forFree);
            // after deleting, not move pointer
            // enter next loop to check whether there are more 2 elements behind
            continue;
        }
        p = p->next;
    }
    return dummy->next;
}

int main() {
    int length = 6;
    int array[6] = {0,1,2,2,3,4};
    struct ListNode* p = createList(array, length);
    printList(p);

    p = deleteDuplicates(p);
    printList(p);
    return 0;
}
