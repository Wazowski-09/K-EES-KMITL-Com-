#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++) // 1
    {
        printf("0123456789abcdefghij");
    }
    printf("\n");               // 2
    for (int i = 0; i < 4; i++) // 3
    {
        printf("          1234567890");
    }
    for (int i = 0; i < 4; i++) // 4
    {
        printf("1234567890          ");
    }
    for (int i = 0; i < 4; i++) // 5
    {
        printf("          1234567890");
    }
    for (int i = 0; i < 10; i++) // 6
    {
        printf("12345678");
    }
    for (int i = 1; i <= 8; i++) // 7
    {
        printf("\t");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++) // 8
    {
        printf("12345678\t");
    }

    return 0;
}