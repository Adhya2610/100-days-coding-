// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n;
    printf("enter the length of the array:");
    scanf("%d", &n);

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        printf("ENTER ELEMENTS:");
        scanf("%d", &arr[i]);
    }

    int position, value;
    printf("enter position and value seperated by space to be inserted:");
    scanf("%d %d", &position, &value);

    if (position < 0 || position > n) {
        printf("Invalid position\n");
    } else {
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        n++; 

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}