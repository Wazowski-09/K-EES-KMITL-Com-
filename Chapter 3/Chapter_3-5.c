#include <stdio.h>

int main()
{
    unsigned long num;

    printf(" *** Display integer in different styles *** \n");

    printf("Enter an integer : ");
    scanf("%lu", &num);

    printf("Your number : %lu\n", num);

    printf("variable size = %lu bytes\n", sizeof(num));

    printf("last 3 digits : %03lu\n", num % 1000);
    printf("next 3 digits : %03lu\n", (num / 1000) % 1000);
    printf("next 3 digits : %03lu\n", (num / 1000000) % 1000);
    printf("next 3 digits : %3lu\n", (num / 1000000000) % 1000);

    printf("comma format  : %lu,%03lu,%03lu,%03lu\n",
           (num / 1000000000) % 1000, (num / 1000000) % 1000,
           (num / 1000) % 1000, num % 1000);

    return 0;
}
