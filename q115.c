//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>

int length(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char s[100], t[100];
    int freq[26] = {0}, i;

    scanf("%s", s);
    scanf("%s", t);

    if (length(s) != length(t)) {
        printf("not anagram");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) freq[s[i]-'a']++;
    for (i = 0; t[i] != '\0'; i++) freq[t[i]-'a']--;

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("not anagram");
            return 0;
        }
    }

    printf("anagram");
    return 0;
}
