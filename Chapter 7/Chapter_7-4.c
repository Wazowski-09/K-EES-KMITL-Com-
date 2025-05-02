#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int check_length(char string[]);

int main()
{
    char password[200];
    printf("Enter password : ");
    scanf("%s", password);

    printf("verifying . . .\n");

    int lower = has_lower_case(password);
    int upper = has_upper_case(password);
    int number = has_number(password);
    int length = check_length(password);

    int strength = lower + upper + number + length;

    if (strength >= 3)
    {
        printf("> Hard to remember!\n");
    }
    else
    {
        printf("> Easy to remember!\n");
    }

    return 0;
}

int has_lower_case(char string[])
{
    int i, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int has_upper_case(char string[])
{
    int i, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int has_number(char string[])
{
    int i, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int check_length(char string[])
{
    int i, length = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    return length > 8 ? 1 : 0;
}