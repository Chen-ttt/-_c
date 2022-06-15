#ifndef LEETCODE_LIST_H
#define LEETCODE_LIST_H

#endif //LEETCODE_LIST_H

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createList(int* array, int length){
    struct ListNode *head,*p,*newNode;
    head = (ListNode*)malloc(sizeof(struct ListNode));
    p = head;
    for (int i = 0; i < length; ++i) {
        newNode = (ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = array[i];
        p->next = newNode;
        p = newNode;
    }
    // return first element
    return head->next;
    // return prior point
    // return head;
}

void printList(ListNode *head){
    printf("[");
    while(head){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("]\n");
}
