// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int size;
    printf("enter length");
    scanf("%d", &size);

    int arr[100];
    for (int i = 0; i < size; i++) {
        printf("enter elements:");
        scanf("%d", &arr[i]);
    }

    int positionToDelete;
    printf("enter position:");
    scanf("%d", &positionToDelete);

    deleteElement(arr, &size, positionToDelete - 1);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}