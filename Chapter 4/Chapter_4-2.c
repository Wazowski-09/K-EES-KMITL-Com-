#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int max, min;

    printf(" *** Find Maximum / Mininum ***\n");
    printf("Enter 3 integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // หาค่าสูงสุด
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // หาค่าต่ำสุด
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // แสดงผลลัพธ์
    printf("Max / Min = %d / %d = %.3f\n", max, min, (float)max / min);

    return 0;
}
