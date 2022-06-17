#include <iostream>
#include "stack.h"

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize){
    int stack[temperaturesSize];
    int top = -1;
    int *result = (int*)malloc(sizeof(int)*temperaturesSize);
    *returnSize = temperaturesSize;

    for (int i = 0; i < temperaturesSize; i++) {
        result[i] = 0;
        if(top==-1){
            stack[++top] = i;
            continue;
        }

        while (top>=0 && temperatures[i]>temperatures[stack[top]]){
            int popNum = stack[top--];
            result[popNum] = i-popNum;
        }
        stack[++top] = i;
    }
    return result;
}

int main(){
    int size = 8;
    int t[8] = {73,74,75,71,69,72,76,73};

    int* result = dailyTemperatures(t, size, &size);
    for (int i = 0; i < size; i++) {
        printf("%d ", *(result+i));
    }

    return 0;
}

