#include <stdio.h>

int main()
{
    char color;

    printf("what color do you like.\n");
    printf("Red\nBlue\nGreen\nYellow\nPurple\nWhite\n");
    printf("Select R B G Y P W : ");
    scanf(" %c", &color);

    switch (color)
    {
    case 'R':
        printf("You like Red\n");
        break;
    case 'B':
        printf("You like Blue\n");
        break;
    case 'G':
        printf("You like Green\n");
        break;
    case 'Y':
        printf("You like Yellow\n");
        break;
    case 'P':
        printf("You like Purple\n");
        break;
    case 'W':
        printf("You like White\n");
        break;
    default:
        printf("NO color in range\n");
    }

    return 0;
}
