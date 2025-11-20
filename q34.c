// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("enter the number:");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 1;
    } else {
        for (i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
