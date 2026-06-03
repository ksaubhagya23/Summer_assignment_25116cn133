#include <stdio.h>

int main()
 {
    int a, b, i, gcd = 1;

    printf("Enter two numbers of your choice: \n");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
     {
        if (a % i == 0 && b % i == 0) 
        {
            gcd = i;
        }
    }

    printf("GCD of given numbers is = %d", gcd);

    return 0;
}