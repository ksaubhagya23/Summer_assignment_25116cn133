#include <stdio.h>

int isPalindrome(int n) {
    int original = n, rev = 0;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if(original == rev)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}