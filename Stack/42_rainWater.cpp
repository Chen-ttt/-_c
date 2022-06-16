#include <iostream>
#include "stack.h"

int trap(int* height, int heightSize){
    int top = -1;
    int stack[heightSize];
    int area = 0;

    for(int n=0; n<heightSize; n++){
        while(height[n]>height[stack[top]]){ // increase, have water
            int topNumber = stack[top--]; // pop top
            if(top==-1) break;

            // calculate area
            int left = stack[top];
            int w = n-left-1;
            int h = fmin(height[left], height[n]) - height[topNumber];
            area += (w * h);
        }
        stack[++top] = n; // push
    }

    return area;
}

int main(){
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int result = trap(height, 12);
    printf("\nresult: %d", result);

    return 0;
}

