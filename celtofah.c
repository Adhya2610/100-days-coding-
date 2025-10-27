// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
int main()
{
    float fahrenheit , celsius;
    printf("enter the value in celsius:");
    scanf("%f",&celsius);

    fahrenheit = (celsius * (9.00 /5.00))+32.00 ;
    printf("the value of temperature in fahrenheit is: %.2f ", fahrenheit);
    return 0;
}

