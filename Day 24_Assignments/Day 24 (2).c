#include <stdio.h>

int main() {
    char str[100];
    int visited[100] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    printf("After removing duplicates: ");

    for(int i = 0; str[i] != '\0'; i++) {
        if(visited[(int)str[i]] == 0) {
            printf("%c", str[i]);
            visited[(int)str[i]] = 1;
        }
    }

    return 0;
}