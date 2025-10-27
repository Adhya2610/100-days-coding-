// Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>
int main()
{
    int a , b , sum ;
    printf("Enter number 1:");
    scanf("%d", &a );

    printf("Enter number 2 :");
    scanf("%d", &b );

    sum = a+b;

    printf("the sum of the two numbers is %d", sum);
    return 0;

}