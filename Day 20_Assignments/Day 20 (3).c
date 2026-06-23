#include <stdio.h>

int main() {
    int a[2][2], sum;

    printf("Enter matrix:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++) {
        sum = 0;
        for(int j = 0; j < 2; j++)
            sum += a[i][j];

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}