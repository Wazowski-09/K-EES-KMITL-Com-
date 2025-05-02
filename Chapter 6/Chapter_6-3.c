#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number (1-16) : ");
    scanf("%d", &num);

    if (num < 1 || num > 16)
    {
        printf("Out of range ! ! !\n");
    }
    else
    {
        for (int i = num; i >= 1; i--)
        {
            if (i > 9)
                printf("%c", 'A' + (i - 10));
            else
                printf("%d", i);
        }
        printf("\n");

        for (int i = 0; i < num - 2; i++)
        {
            if (num > 9)
                printf("%c", 'A' + (num - 10));
            else
                printf("%d", num);

            for (int j = 0; j < num - 2; j++)
            {
                printf(" ");
            }

            printf("1\n");
        }

        if (num > 1)
        {
            for (int i = num; i >= 1; i--)
            {
                if (i > 9)
                    printf("%c", 'A' + (i - 10));
                else
                    printf("%d", i);
            }
            printf("\n");
        }
    }

    return 0;
}
