#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf(" *** Palindrome Verification ***\n");
    printf("Enter a sentence : ");
    scanf(" %[^\n]", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("\"%s\" is NOT palindrom.\n", str);
            return 0;
        }
    }

    printf("\"%s\" is PALINDROME.\n", str);
    return 0;
}
