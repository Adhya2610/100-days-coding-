#include <stdio.h>
int main()
{
    int year ;
    printf("enter the year you want to check as leap year:");
    scanf("%d", &year);

    if ((year % 400==0)||((year % 4==0) && (year % 100!=0))){
        printf("the year %d is a leap year \n", year);
    }
    else{
        printf("the year %d is not a leap year ");
    }
    return 0;
}