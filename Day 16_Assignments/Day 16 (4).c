#include <stdio.h>

int main() {
    int arr[5], unique[5], k = 0, found;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 5; i++) {
        found = 0;

        for(int j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            unique[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates: ");
    for(int i = 0; i < k; i++)
        printf("%d ", unique[i]);

    return 0;
}