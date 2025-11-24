// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main() {
    int n, i;
    int even, odd;
    printf("enter the length of the array:");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("enter the elements:");
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even += 1;
        }
       
        else {
            odd +=1;
        }
    }
    printf("even=%d, odd=%d\n", even, odd);

    return 0;
}
