// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
    int n, originalN, remainder, sum = 0, digits = 0, tempN;
    printf("ENTER THE NUMBER:");
    scanf("%d", &n);

    originalN = n;
    tempN = n;

    while (tempN != 0) {
        tempN /= 10;
        digits++;
    }

    tempN = n;
    while (tempN != 0) {
        remainder = tempN % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        tempN /= 10;
    }

    if (sum == originalN) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}