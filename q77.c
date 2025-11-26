// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>

bool areDiagonalElementsDistinct(int matrix[][10], int size) {
    if (size <= 1) {
        return true;
    }

    int diagonal[size];
    for (int i = 0; i < size; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (diagonal[j] > diagonal[j + 1]) {
                int temp = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size - 1; i++) {
        if (diagonal[i] == diagonal[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int rows, cols;

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

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}