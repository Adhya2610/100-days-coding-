//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for (i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }
    }

    for (; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");

    return 0;
}