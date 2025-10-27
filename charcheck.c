// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
void main()
{
    char c;
    printf("enter the character you want to check:");
    scanf("%c",&c);

    if((c=='A')||(c =='E')||(c =='I')||(c =='O')||(c =='U')||(c =='a')||(c =='e')||(c =='i')||(c =='o')||(c =='u')){
        printf("the caracter %c is a vowel",c);
    }
    else{
        printf("the character %c is a consonant",c);
    }
}