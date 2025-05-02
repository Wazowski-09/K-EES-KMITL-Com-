#include <stdio.h>

void sortAscending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numbers[10];

    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    sortAscending(numbers, 10);

    printf("Output : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}