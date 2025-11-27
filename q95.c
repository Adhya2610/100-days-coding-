//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len = 0, i, j, flag = 0;
    printf("enter string 1:");
    scanf("%s", str1);
    printf("enter string 2:");
    scanf("%s", str2);

    while (str1[len] != '\0') len++;

    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            if (str1[(i + j) % len] != str2[j])
                break;
        }
        if (j == len) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
