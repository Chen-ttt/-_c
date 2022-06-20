#include <iostream>
#include "List.h"

struct ListNode* deleteDuplicates(struct ListNode* head){
    // check empty link list
    if(!head) return head;

    // point to position of processing
    struct ListNode *p = head;
    struct ListNode *forFree;

    while (p->next){
        if (p->val == p->next->val){
            // printf("find same ele %d %d\n", p->val, p->next->val);
            forFree = p->next;
            p->next = forFree->next;
            free(forFree);
            // after deleting, not move pointer
            // enter next loop to check whether it's the last element and whether there are more same elements
            continue;
        }
        p = p->next;
        // printf("next ele %d\n", p->val);
    }
    return head;
}

int main() {
    int length = 6;
    int array[6] = {6,6,6,6,6,6};
    struct ListNode* p = createList(array, length);
    printList(p);

    p = deleteDuplicates(p);
    printList(p);
    return 0;
}
