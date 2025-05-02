#include <stdio.h>

int main()
{
    double num1, num2;
    char op;

    printf("A is +\nB is -\nC is *\nD is /\n");
    printf("Enter number and operator : ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    // ให้ตัวมากเป็นตัวตั้งเสมอ
    if (num1 < num2)
    {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }

    switch (op)
    {
    case 'A':
        printf("%.0lf+%.0lf = %.3lf\n", num1, num2, num1 + num2);
        break;
    case 'B':
        printf("%.0lf-%.0lf = %.3lf\n", num1, num2, num1 - num2);
        break;
    case 'C':
        printf("%.0lf*%.0lf = %.3lf\n", num1, num2, num1 * num2);
        break;
    case 'D':
        if (num2 != 0)
            printf("%.0lf/%.0lf = %.3lf\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero\n");
        break;
    default:
        printf("Invalid operator\n");
    }

    return 0;
}