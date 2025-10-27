// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>
int main()
{
    float p , r, t, si, ci, a ;
    printf("enter principal amount , rate of interest , time :");
    scanf("%f %f %f", &p ,&r , &t );

    si = (p*r*t)/100 ;
    printf("simple interest calculated for %f years is : %f\n", t , si);

    a = p * pow((1 + r / 100), t);
    ci = a-p ;
    printf("compound interest calculated for %f years is : %f\n", t , ci);

    return 0;
}