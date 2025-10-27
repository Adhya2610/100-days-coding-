// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    int h , m, s, time ;
    printf("enter the time:");
    scanf("%d", &time);

    h = time / 3600;
    m = (time % 3600) /60;
    s = time %60;

    printf("the time in h|m|s format is : %d|%d|%d", h, m, s);
    return 0;
}