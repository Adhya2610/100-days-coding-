//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;

    printf("enter string:");
    scanf("%s", str);

    while (str[i] != '\0') {
        int index = str[i] - 'a';
        if (freq[index] == 1) {
            printf("%c", str[i]);
            return 0;
        }
        freq[index]++;
        i++;
    }

    printf("No repeating character");
    return 0;
}
