#include <stdio.h>

int main() {
    int arr[5], target;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] + arr[j] == target)
                printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }

    return 0;
}