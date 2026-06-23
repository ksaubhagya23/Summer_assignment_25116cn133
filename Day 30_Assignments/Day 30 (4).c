#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    display(s, n);

    return 0;
}