#include <stdio.h>
#include <string.h>
#include <ctype.h>

void palindrome(char *str)
{
    char filtered[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]))
        {
            filtered[j++] = tolower(str[i]);
        }
    }
    filtered[j] = '\0';

    int len = strlen(filtered);
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (filtered[i] != filtered[len - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("\"%s\" is PALINDROME.\n", str);
    }
    else
    {
        printf("\"%s\" is NOT palindrom.\n", str);
    }
}

int main()
{
    char str[100];
    printf(" ***  Palindrome Verification  ***\n");
    printf(" *  verify only alphabet number  *\n");
    printf(" *        insensitive case       *\n");
    printf(" *-------------------------------*\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]", str);
    printf("Entered message : %s\n", str);
    palindrome(str);
    return 0;
}