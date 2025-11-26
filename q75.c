// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

void addMatrices(int A[][10], int B[][10], int C[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
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
    int r1, c1, r2, c2;
    printf("enter rows and columns of matrix 1:\n");
    if (scanf("%d %d", &r1, &c1) != 2) {
        return 1;
    }

    if (r1 > 10 || c1 > 10 || r1 <= 0 || c1 <= 0) {
        return 1;
    }

    int A[10][10];
    printf("enter elements:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (scanf("%d", &A[i][j]) != 1) {
                return 1;
            }
        }
    }
    printf("enter rows and columns of matrix 2:\n");
    if (scanf("%d %d", &r2, &c2) != 2) {
        return 1;
    }

    if (r2 > 10 || c2 > 10 || r2 <= 0 || c2 <= 0) {
        return 1;
    }

    int B[10][10];
    printf("enter elements:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            if (scanf("%d", &B[i][j]) != 1) {
                return 1;
            }
        }
    }

    if (r1 != r2 || c1 != c2) {
        return 1; 
    }

    int C[10][10];

    addMatrices(A, B, C, r1, c1);

    printMatrix(C, r1, c1);

    return 0;
}