//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the desired character to be checked:");
    scanf("%c",&ch);

    if (ch>='A'&& ch<='Z'){
        printf("It is an uppercase character");
    }
    else if (ch>='a'&& ch<='z'){
        printf("it is a lowecarse character ");
    }
    else if (ch >='0'&& ch<='9'){
        printf("it is a digit");
    }
    else{
        printf("it is a special character");
    }
    
    return 0;
}
