#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf(" *** Convert Celcius to Fahrenheit *** \n");

    printf("Enter temperature in degree celcius : ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%.2f degrees equals %.2f degree Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}