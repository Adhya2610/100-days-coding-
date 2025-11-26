// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1, n2;

    printf("enter the length of array 1");
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        printf("enter elements:");
        scanf("%d", &arr1[i]);
    }

    printf("enter the length of array 2:");
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        printf("enter elements:");
        scanf("%d", &arr2[i]);
    }

    int mergedArr[n1 + n2];
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
