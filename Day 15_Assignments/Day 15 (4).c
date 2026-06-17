#include <stdio.h>

int main() {
    int arr[5], pos = 0;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 5; i++) {
        if(arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    while(pos < 5) {
        arr[pos] = 0;
        pos++;
    }

    printf("Array after moving zeroes: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}