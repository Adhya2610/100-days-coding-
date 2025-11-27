//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j, found, len1 = 0, len2 = 0;
    printf("enter string 1:");
    scanf("%s", str1);
    printf("enter string 2:");
    scanf("%s", str2);

    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        found = 0;
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '\0'; // mark as used
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
