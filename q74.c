// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

void findTranspose(int matrix[][10], int rows, int cols, int transpose[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
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
    printf("enter elements: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    int transpose[10][10];

    findTranspose(matrix, rows, cols, transpose);

    printMatrix(transpose, cols, rows);

    return 0;
}