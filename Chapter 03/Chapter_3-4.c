#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // แสดงข้อความเริ่มต้น
    printf(" *** Get input from keyboard as string *** \n");

    // รับข้อความ 1 บรรทัด
    printf("Please input a string : ");
    fgets(str, sizeof(str), stdin);

    // ลบ newline ออกจากข้อความ (หากมี)
    str[strcspn(str, "\n")] = 0;

    // แสดงผลตามรูปแบบที่กำหนด
    printf("string : %s\n", str);
    printf("string : %.7s\n", str);
    printf("string : %.15s\n", str);

    return 0;
}
