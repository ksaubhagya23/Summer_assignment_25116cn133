#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a String: ");
    scanf("%s", str);

    do
    {
        printf("\n===== String Menu =====\n");
        printf("1. Length of String\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
            {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                printf("Reverse = %s\n", temp);
                break;
            }

            case 3:
            {
                int i;
                char temp[100];
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                        temp[i] -= 32;
                }

                printf("Uppercase = %s\n", temp);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}