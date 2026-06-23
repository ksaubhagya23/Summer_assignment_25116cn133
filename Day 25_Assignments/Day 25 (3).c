#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    p1 = &a;
    p2 = &b;

    if(*p1 > *p2)
        printf("Largest = %d", *p1);
    else
        printf("Largest = %d", *p2);

    return 0;
}