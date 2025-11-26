// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

void findRowSums(int matrix[][10], int rows, int cols, int rowSums[]) {
    for (int i = 0; i < rows; i++) {
        int currentSum = 0;
        for (int j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
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

    int rowSums[10];

    findRowSums(matrix, rows, cols, rowSums);

    printArray(rowSums, rows);

    return 0;
}