// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, element, position;
    printf("enter the length of array:");
    scanf("%d", &n);
    int arr[n + 1]; 
    for (i = 0; i < n; i++) {
        printf("enter elements:");
        scanf("%d", &arr[i]);
    }
    printf("enter elements to be inserted:");
    scanf("%d", &element);

    position = n; 
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }

    for (i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
