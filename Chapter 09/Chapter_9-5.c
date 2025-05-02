#include <stdio.h>

void number2word(int num, char *str)
{
    switch (num)
    {
    case 0:
        sprintf(str, "zero");
        break;
    case 1:
        sprintf(str, "one");
        break;
    case 2:
        sprintf(str, "two");
        break;
    case 3:
        sprintf(str, "three");
        break;
    case 4:
        sprintf(str, "four");
        break;
    case 5:
        sprintf(str, "five");
        break;
    case 6:
        sprintf(str, "six");
        break;
    case 7:
        sprintf(str, "seven");
        break;
    case 8:
        sprintf(str, "eight");
        break;
    case 9:
        sprintf(str, "nine");
        break;
    default:
        sprintf(str, "invalid");
        break;
    }
}

int main()
{
    char phone_number[15], str[15] = "nothing";
    int i;
    printf("*** Number to words ***\n");
    printf("Enter phone number : ");
    scanf("%s", phone_number);
    printf("%s ==> ", phone_number);
    for (i = 0; phone_number[i] != '\0'; i++)
    {
        number2word(phone_number[i] - 0x30, str);
        printf("%s ", str);
    }
    printf("\n");
    return 0;
}