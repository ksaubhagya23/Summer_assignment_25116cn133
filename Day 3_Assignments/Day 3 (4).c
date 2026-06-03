#include <stdio.h>

int main()
 {
    int a, b, max;

    printf("Enter two numbers of your choice: \n");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) 
    {
        if (max % a == 0 && max % b == 0) 
        {
            printf("LCM of given numbers is = %d", max);
            break;
        }
        max++;
    }

    return 0;
}