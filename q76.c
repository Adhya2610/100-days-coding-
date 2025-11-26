// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>


int isSymmetric(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int rows, cols;
    printf("enter rows and columns:\n");
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int size = rows;

    if (size > 10 || size <= 0) {
         return 1;
    }
    
    int matrix[10][10];

    printf("enter elements: \n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    if (isSymmetric(matrix, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}