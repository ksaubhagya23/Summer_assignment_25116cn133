#include <stdio.h>

int main() {
    int arr[5], temp;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    temp = arr[4];

    for(int i = 4; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = temp;

    printf("After right rotation: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}