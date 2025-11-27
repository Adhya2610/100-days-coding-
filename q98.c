//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, start = 0;
    printf("enter the name:");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') {
        if (name[i] == ' ') {
            printf("%c.", name[start]);
            start = i + 1;
        }
        i++;
    }

    for (i = start; name[i] != '\0'; i++) {
        if (name[i] != '\n')
            printf("%c", name[i]);
    }

    return 0;
}
