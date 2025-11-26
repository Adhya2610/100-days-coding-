// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

void diagonalTraversal(int rows, int cols, int matrix[rows][cols]) {
    for (int sum = 0; sum < rows + cols - 1; sum++) {
        if (sum % 2 == 0) { 
            for (int i = (sum < rows ? sum : rows - 1); i >= 0 && (sum - i) < cols; i--) {
                printf("%d ", matrix[i][sum - i]);
            }
        } else { 
            for (int i = (sum < cols ? 0 : sum - cols + 1); i < rows && (sum - i) >= 0; i++) {
                printf("%d ", matrix[i][sum - i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int rows, cols;
    printf("enter rows and columns of matrix:");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("enter 3 space seperated values:");
            scanf("%d", &matrix[i][j]);
        }
    }

    diagonalTraversal(rows, cols, matrix);

    return 0;
}
