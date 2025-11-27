//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

void printCharacters(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    char str[100];

    printf("enter the string:");
    if (scanf("%99[^\n]", str) != 1) {
        str[0] = '\0';
    }

    printCharacters(str);

    return 0;
}