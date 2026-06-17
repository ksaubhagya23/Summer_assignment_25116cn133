#include <stdio.h>

int main() {
    int a[2][2];

    printf("Enter matrix:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }

    return 0;
}