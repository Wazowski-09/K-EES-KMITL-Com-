#include <stdio.h>

int main()
{
    int num;

    printf(" *** Perfect Number Verification ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Only positive number : DO YOU UNDERSTAND !!!\n");
    }
    else
    {
        int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            printf("%d is a PERFECT NUMBER.\n", num);
        }
        else
        {
            printf("%d is NOT a perfect number.\n", num);
        }
    }

    return 0;
}