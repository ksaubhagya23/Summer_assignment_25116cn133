#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100][20];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");

    while(word != NULL) {
        strcpy(temp[count], word);
        count++;
        word = strtok(NULL, " \n");
    }

    printf("Reversed words: ");
    for(int i = count - 1; i >= 0; i--) {
        printf("%s ", temp[i]);
    }

    return 0;
}