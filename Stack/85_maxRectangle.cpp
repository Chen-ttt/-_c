#include <iostream>
#include "stack.h"

int maximalRectangle(char** matrix, int matrixSize, int* matrixColSize){
    int stack[matrixSize][*matrixColSize];
    int maxCount = 0;
    int topRow = 0, topCol = 0;

//    for (int row = 0; row < matrixSize; row++) {
//        for (int col = 0; col < *matrixColSize; col++) {
//            int currentNum = matrix[row][col];
//            if(currentNum==1){
//                stack[topRow++][topCol++] = currentNum;
//                maxCount++;
//            }
//        }
//    }

    return *matrixColSize;
}

int main(){
    int colSize = 5;
    char matrix[4][5] =
            {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    // a list of 4 pointers, each one points to a row(char[])
    // give value with the address of first element of each row
    char *p[4] = {matrix[0], matrix[1], matrix[2], matrix[3]};

    int result = maximalRectangle(p, 4, &colSize);
    printf("\nresult: %d", result);

    return 0;
}

