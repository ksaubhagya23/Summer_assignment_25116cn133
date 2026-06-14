#include <stdio.h>

int main() {
    int arr[5], largest, secondLargest;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -99999;

    for(int i = 0; i < 5; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest = %d", secondLargest);

    return 0;
}