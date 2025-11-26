// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
    printf("enter number:");
    scanf("%lld", &n);

    int counts[10] = {0};
    int mostFrequentDigit = 0;
    int maxCount = 0;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n != 0) {
        int digit = n % 10;
        counts[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}
