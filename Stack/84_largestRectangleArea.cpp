#include <iostream>
#include "stack.h"

int largestRectangleArea(int* heights, int heightsSize){
    int len = heightsSize+2;
    int stack[len];
    int newHeights[len];
    int top = -1, area = 0;

    // add 0 to start and end so that we don't need to process ends'situaion
    newHeights[0] = newHeights[len-1] = 0;
    for(int i=0; i<heightsSize; i++){
        newHeights[i+1] = heights[i];
    }

    for(int i=0; i<len; i++){
        if(top==-1){
            stack[++top] = i;
            continue;
        }

        /**
        // about condition:
        // 1. current height less than stack top's height means right bound appears
        //    so, calculate areas until stack top's height shorter than or equals to current's (i.e.we can't know the right bound)
        // 2. when 'i' moves to the end, calculate all areas of index remained in stack until stack become empty
         */
        while(newHeights[stack[top]]>newHeights[i] || (i==(len-1) && top!=0)){
            int popNum = newHeights[stack[top--]]; // pop
            int w = i-stack[top]-1;
            // if(area < (w * popNum)) area = w * popNum; or
            area = area < (w * popNum)? w*popNum:area;
        }
        stack[++top] = i; // push current
    }
    return area;
}

int main(){
    int heights[1] = {2};

    int result = largestRectangleArea(heights, 1);
    printf("\nresult: %d", result);

    return 0;
}

