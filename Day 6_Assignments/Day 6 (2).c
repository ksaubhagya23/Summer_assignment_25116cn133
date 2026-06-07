#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: \n");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent of given number= %d", decimal);

    return 0;
}