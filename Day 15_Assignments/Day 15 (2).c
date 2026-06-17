#include <stdio.h>

int main() {
    int arr[5], temp;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    temp = arr[0];

    for(int i = 0; i < 4; i++)
        arr[i] = arr[i + 1];

    arr[4] = temp;

    printf("After left rotation: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}