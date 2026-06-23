#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== QUIZ =====\n");

    printf("1. Capital of India?\n");
    printf("1.Mumbai  2.Delhi  3.Kolkata  4.Chennai\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("2. C language was developed by?\n");
    printf("1.Dennis Ritchie  2.James Gosling  3.Bjarne Stroustrup  4.Guido\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("3. 5 + 7 = ?\n");
    printf("1.10  2.11  3.12  4.13\n");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\nFinal Score = %d/3\n", score);

    return 0;
}