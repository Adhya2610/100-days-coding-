// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main(){
    int mno;
    printf("enter the month number(1-12);");
    scanf("%d", &mno);

    switch(mno){
        case 1:
        printf("january , 31 days\n");
        break;

        case 2:
        printf("february , 28 days\n");
        break;

        case 3:
        printf("march , 31 days\n");
        break;
        
        case 4:
        printf("april , 30 days\n");
        break;

        case 5:
        printf("may , 31 days\n");
        break;
        
        case 6:
        printf("june , 30 days\n");
        break;

         case 7:
        printf("july , 31 days\n");
        break;

        case 8:
        printf("august , 31 days\n");
        break;

        case 9:
        printf("september ,30 days\n");
        break;
        
        case 10:
        printf("october, 31 days\n");
        break;

        case 11:
        printf("november, 30 days\n");
        break;
        
        case 12:
        printf("december , 31 days\n");
        break;

    return 0;


    }


}