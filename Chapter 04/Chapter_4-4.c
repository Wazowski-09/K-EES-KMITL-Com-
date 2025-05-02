#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;

    printf("Enter 3 Number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("ANSWER = %d\n", sum);

    int tens_digit = (sum / 10) % 10;
    if (tens_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
