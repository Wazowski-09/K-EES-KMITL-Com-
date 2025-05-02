#include <stdio.h>

int main()
{
    int start, diff;

    printf(" *** Arithmetic Sequence ***\n");
    printf("Enter 2 Positive Integers: ");
    scanf("%d %d", &start, &diff);

    int max_value = start + (9 * diff);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", max_value - (i * diff));
    }
    return 0;
}
