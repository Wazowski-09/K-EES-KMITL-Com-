#include <stdio.h>

int main()
{
    int num, sum;

    printf(" *** Summation of each digit into one digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d", &num);

    if (num < 0 || num > 999999999)
    {
        printf("Out of range! Please enter a number up to 9 digits.\n");
    }
    else
    {
        printf("%d", num);

        while (num >= 10)
        {
            sum = 0;
            printf(" => ");
            int temp = num, digits[10], count = 0;

            while (temp > 0)
            {
                digits[count++] = temp % 10;
                temp /= 10;
            }

            for (int i = count - 1; i >= 0; i--)
            {
                if (i != count - 1)
                    printf(" + ");
                printf("%d", digits[i]);
                sum += digits[i];
            }

            num = sum;
            printf(" = %d", num);
        }
        printf("\n");
    }

    return 0;
}
