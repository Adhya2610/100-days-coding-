//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    int i = 0;
    char ch;

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        
        i++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;
    printf("enter the string:");
    int i = 0;
    int c;
    while (i < 99 && (c = getchar()) != '\n' && c != EOF) {
        str[i] = (char)c;
        i++;
    }
    str[i] = '\0'; 

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}