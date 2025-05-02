#include <stdio.h>

int main()
{
    int num1, num2;

    printf(" *** Summation of common factor ***\n");
    printf("Enter two positive numbers : ");
    scanf("%d %d", &num1, &num2);

    int sum = 0;

    // หาตัวประกอบร่วมและคำนวณผลรวม
    for (int i = 1; i <= (num1 < num2 ? num1 : num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            sum += i;
        }
    }

    printf("Summation of common factors (%d and %d) ==> %d\n", num1, num2, sum);

    return 0;
}
