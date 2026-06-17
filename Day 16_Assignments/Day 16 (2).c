#include <stdio.h>

int main() {
    int arr[5], maxFreq = 0, element;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 5; i++) {
        int count = 1;

        for(int j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d", element);

    return 0;
}