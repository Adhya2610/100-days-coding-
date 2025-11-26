// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int findMatrixSum(int matrix[][10], int rows, int cols) {
    int totalSum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            totalSum += matrix[i][j];
        }
    }
    return totalSum;
}

int main() {
    int rows, cols;
    printf("enter rows and columns:");
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    if (rows > 10 || cols > 10 || rows <= 0 || cols <= 0) {
        return 1;
    }
    
    int matrix[10][10];

    printf("enter elements: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    int sum = findMatrixSum(matrix, rows, cols);

    printf("%d\n", sum);

    return 0;
}