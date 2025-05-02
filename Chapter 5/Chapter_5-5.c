#include <stdio.h>

int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("</3\n");
    }
    else if (n > 10)
    {
        printf("Too much :(\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("I Love You\n");
        }
    }

    return 0;
}