#include <iostream>
#include "../Stack/stack.h"

int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    int front = 0, p = 0, temp = 0;
    int rear = k-1;
    *returnSize = numsSize-k+1;
    int *result = (int*)malloc(sizeof(int)*(*returnSize));

    while (rear<=numsSize-1) {
        p = front;
        temp = nums[p];
        if(k==1){
            result[front] = temp;
        } else {
            while (p!=rear){
                temp = fmax(temp,nums[++p]);
            }
            result[front] = temp;
        }
        front++;
        rear++;
    }
    return result;
}

int main(){
    int size = 2;
    int t[2] = {1,-1};

    int* result = maxSlidingWindow(t, 2, 1, &size);
    for (int i = 0; i < size; i++) {
        printf("%d ", *(result+i));
    }

    return 0;
}

