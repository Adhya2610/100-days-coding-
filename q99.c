//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[20];
    int d, m, y;
    printf("enter date:");
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &d, &m, &y);

    if (m == 4)
        printf("%02d-Apr-%04d", d, y);

    return 0;
}
