#include <stdio.h>

int main() {
    int arr[5], key, count = 0;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to count: ");
    scanf("%d", &key);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}