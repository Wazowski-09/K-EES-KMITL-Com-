#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int maxDifference = 0;

    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        int difference = abs(numbers[i] - numbers[i + 1]);
        if (difference > maxDifference)
        {
            maxDifference = difference;
        }
    }

    printf("Maximum differnce is %d\n", maxDifference);

    return 0;
}