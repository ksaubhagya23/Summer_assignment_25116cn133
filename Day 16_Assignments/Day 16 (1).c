#include <stdio.h>

int main() {
    int arr[4], sum = 0, n = 5;

    printf("Enter 4 elements (from 1 to 5):\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}