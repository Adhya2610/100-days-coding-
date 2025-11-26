//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

void readMatrix(int matrix[][10], int rows, int cols) {
    printf("enter elements: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                // Simple error handling for input failure
            }
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("enter rows and columns: \n");
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    if (rows > 10 || cols > 10 || rows <= 0 || cols <= 0) {
        return 1;
    }
    
    int matrix[10][10];

    readMatrix(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    return 0;
}