// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, digits = 0, temp, powerOfTen = 1, swappedNum;
    printf("enter the number:");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    lastDigit = n % 10;
    temp = n;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    if (digits == 1) {
        printf("%d\n", n);
        return 0;
    }

    for (int i = 1; i < digits; i++) {
        powerOfTen *= 10;
    }

    swappedNum = lastDigit * powerOfTen;
    swappedNum += (n % powerOfTen) - lastDigit;
    swappedNum += firstDigit;

    printf("%d\n", swappedNum);

    return 0;
}