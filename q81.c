//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int countCharacters(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

int main() {
    char str[100];
    printf("enter the string:");
    if (scanf("%99[^\n]", str) != 1) {
        if (scanf("%c", &str[0]) == 1) {
            str[1] = '\0';
        } else {
            str[0] = '\0'; 
        }
    }
    
    int length = countCharacters(str);
    
    printf("%d\n", length);
    
    return 0;
}