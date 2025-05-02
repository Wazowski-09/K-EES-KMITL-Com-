#include <stdio.h>

int main()
{
    char name[21];
    int length = 0;

    printf("Enter your name : ");
    scanf("%20s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - ('a' - 'A');
        }
        printf("%c\n", name[i]);
        length++;
    }

    printf("Name length : %d\n", length);

    return 0;
}
