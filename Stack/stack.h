#ifndef LEETCODE_STACK_H
#define LEETCODE_STACK_H

#endif

typedef struct StackNode{
    char data;
    struct StackNode* next;
} StackNode, *StackNodePtr;

typedef struct LinkStack{
    StackNodePtr top;
    int count;
} LinkStack;