#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // รับค่าตัวเลข 3 ตัว
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%c%c%c", num1, num2, num3);

    return 0;
}
