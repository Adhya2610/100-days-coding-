// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num;
    long long product = 1;
    int digit;
    int firstOddDigit = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Odd digits multiplied: ");

    if (num == 0) {
        printf("0\nProduct of odd digits: 1\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            if (firstOddDigit) {
                printf("%d", digit);
                firstOddDigit = 0;
            } else {
                printf("*%d", digit);
            }
            product *= digit;
        }
        num /= 10;
    }

    if (firstOddDigit) { // No odd digits found
        printf("None\nProduct of odd digits: 1\n");
    } else {
        printf("\nProduct of odd digits: %lld\n", product);
    }

    return 0;
}