#include <stdio.h>

int main() {
    int arr1[3], arr2[3];

    printf("Enter 3 elements of first array:\n");
    for(int i = 0; i < 3; i++)
        scanf("%d", &arr1[i]);

    printf("Enter 3 elements of second array:\n");
    for(int i = 0; i < 3; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements: ");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}