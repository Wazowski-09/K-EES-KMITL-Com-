#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf(" *** Summation of each digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d", &num);

    if (num < 0 || num > 999999999)
    {
        printf("Out of range! Please enter a number up to 9 digits.\n");
    }
    else
    {
        int temp = num;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        printf("\nSummation of each digit = %d\n", sum);
    }

    return 0;
}