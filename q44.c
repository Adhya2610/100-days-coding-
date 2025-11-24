// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    printf("enter the number:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double numerator = 1 + (2 * i);
        if (i == 0) {
            sum += numerator;
        } else {
            double denominator = 2 + (2 * i);
            sum += numerator / denominator;
        }
    }

    printf("Approximate sum: %.1lf\n", sum);

    return 0;
}
