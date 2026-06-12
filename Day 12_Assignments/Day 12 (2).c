#include <stdio.h>

int isArmstrong(int n) {
    int original = n, sum = 0, rem;

    while(n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}