#include <stdio.h>

int main() {
    int arr1[3], arr2[3], unionArr[6], k = 0, found;

    printf("Enter 3 elements of first array:\n");
    for(int i = 0; i < 3; i++)
        scanf("%d", &arr1[i]);

    printf("Enter 3 elements of second array:\n");
    for(int i = 0; i < 3; i++)
        scanf("%d", &arr2[i]);

    for(int i = 0; i < 3; i++)
        unionArr[k++] = arr1[i];

    for(int i = 0; i < 3; i++) {
        found = 0;
        for(int j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }

        if(!found)
            unionArr[k++] = arr2[i];
    }

    printf("Union: ");
    for(int i = 0; i < k; i++)
        printf("%d ", unionArr[i]);

    return 0;
}