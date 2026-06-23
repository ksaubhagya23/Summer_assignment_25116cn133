#include <stdio.h>

struct Book
{
    int id;
    char title[50];
};

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("\nBook Issued Successfully\n");
    printf("Book ID : %d\n", b.id);
    printf("Title   : %s\n", b.title);

    return 0;
}