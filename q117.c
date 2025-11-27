//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

int main() {
    int m, n;
    printf("enter length of array 1 :");
    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++) {
        printf("enter elements:");
        scanf("%d", &nums1[i]);
    }
    printf("enter length of array 2:");
    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++) {
        printf("enter elements:");
        scanf("%d", &nums2[i]);
    }

    int mergedArray[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            mergedArray[k++] = nums1[i++];
        } else {
            mergedArray[k++] = nums2[j++];
        }
    }

    while (i < m) {
        mergedArray[k++] = nums1[i++];
    }

    while (j < n) {
        mergedArray[k++] = nums2[j++];
    }

    for (int l = 0; l < m + n; l++) {
        printf("%d ", mergedArray[l]);
    }
    printf("\n");

    return 0;
}