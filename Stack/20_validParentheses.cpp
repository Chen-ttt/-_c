#include <iostream>
#include "stack.h"

bool isValid(char * s){
    LinkStack *stack = (LinkStack*)malloc(sizeof(struct LinkStack));
    stack->count = 0;
    stack->top = NULL; // IMPORTANT!!!

    StackNodePtr forFree;

    while(*s != '\0'){
        if (*s=='[' || *s=='(' || *s=='{'){ // right start, push
            StackNodePtr p = (StackNodePtr)malloc(sizeof(struct StackNode));
            p->data = *s;
            p->next = stack->top;
            stack->top = p;
            stack->count++;
        } else if (stack->top && ((*s==']' && stack->top->data=='[') ||
                                  (*s=='}' && stack->top->data=='{') ||
                                  (*s==')' && stack->top->data=='('))) { // left end, compare and pop
            forFree = stack->top;
            stack->top = stack->top->next;
            free(forFree);
            stack->count--;
        } else return false;
        s = s+1;
    }

    if(stack->count == 0) return true;
    else return false;
}

int main(){
    char *s = "{}[]()";
    bool result = isValid(s);
    printf("\nresult: %d", result);

    return 0;
}

