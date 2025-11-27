//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    printf("enter string:");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';
    printf("%s", str);

    return 0;
}
