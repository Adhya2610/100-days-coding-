// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main()
{
    float rad , area , circum , pi ;
    printf("ENTER THE RADIUS OF THE CIRCLE :");
    scanf("%f",&rad );
    
    pi = 3.1415 ;
    area = pi*rad*rad ;
    circum = 2*pi*rad ;
    printf("the area of the circle is: %.2f\n" , area) ;
    printf("the circumference of the circle is : %.2f" , circum) ;

    return 0;


}