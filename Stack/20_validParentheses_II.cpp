#include <iostream>
#include "stack.h"

bool isValid(char * s){
    int top = -1;
    char data[strlen(s)];

    while (*s != '\0'){
        if(*s=='[' || *s=='(' || *s=='{'){ // right start, push
            data[++top] = *s;
        } else if ((top!=-1) && ((*s==']' && data[top]=='[') ||
                                  (*s=='}' && data[top]=='{') ||
                                  (*s==')' && data[top]=='('))){ // left end, pop
            // data[top] = '-'; // this step can be delete
            top--;
        } else return false; // avoid case: ']'
        s = s+1; // read next char
    }

    if(top==-1) return true;
    else return false;
}

int main(){
    char *s = "{}[]()";
    bool result = isValid(s);
    printf("\nresult: %d", result);

    return 0;
}

