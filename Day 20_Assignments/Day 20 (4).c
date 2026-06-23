#include <stdio.h>

int main() {
    int a[2][2], sum;

    printf("Enter matrix:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int j = 0; j < 2; j++) {
        sum = 0;
        for(int i = 0; i < 2; i++)
            sum += a[i][j];

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}