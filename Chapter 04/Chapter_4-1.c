#include <stdio.h>
#include <stdlib.h> // สำหรับใช้ฟังก์ชัน abs()

int main()
{
    int num;

    printf(" *** Show absolute value ***\n");
    printf("Enter an integer : ");
    scanf("%d", &num);

    printf("Absolute value of %d is |%d| = %d\n", num, num, abs(num));

    return 0;
}
