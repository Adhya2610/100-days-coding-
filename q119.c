//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() {
    int n;
    printf("enter the length:");
    scanf("%d", &n); 
    int arr[n];
    int xorSum = 0;
    int i;

    for (i = 0; i < n; i++) {
        printf("enter elements:");
        scanf("%d", &arr[i]);
        xorSum ^= arr[i];
    }

    for (i = 1; i < n; i++) { 
        xorSum ^= i;
    }
    
    printf("%d\n", xorSum);

    return 0;
}
