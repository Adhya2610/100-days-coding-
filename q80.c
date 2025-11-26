// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter space separated rows and columns for matrix 1: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter space separated rows and columns for matrix 2: ");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Error: Matrix dimensions are not compatible for multiplication.\n");
        return 1;
    }

    int c[r1][c2];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }


    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d", c[i][j]);
            if (j != c2 - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
