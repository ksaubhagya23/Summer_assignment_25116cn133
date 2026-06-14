#include <stdio.h>

int main() {
    int arr[5], even = 0, odd = 0;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d", odd);

    return 0;
}