#include <stdio.h>

int main() {
    int a[2][2], flag = 1;

    printf("Enter matrix:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric");

    return 0;
}