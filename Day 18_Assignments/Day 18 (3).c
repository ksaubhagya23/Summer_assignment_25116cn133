#include <stdio.h>

int main() {
    int arr[5], key;
    int low = 0, high = 4, mid, found = 0;

    printf("Enter 5 sorted elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}