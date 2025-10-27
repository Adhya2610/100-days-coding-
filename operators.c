// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    int a, b, sum, diff, prod, div ;

    printf("Enter number 1:");
    scanf("%d", &a );
    printf("Enter number 2 :");
    scanf("%d", &b );

    sum = a+b;
    printf("the sum of the two numbers is %d\n", sum);

    diff = a-b;
    printf("the difference of the two numbers is %d\n", diff );

    prod = a*b;
    printf("the product of the two numbers is %d\n", prod);

    div = a/b;
    printf("the quotient of the two numbers is %d\n", div );

    return 0;
}