#include <stdio.h>

void sort(int *scores)
{
    int i, j, temp;
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (scores[j] < scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int scores[5], i;
    printf("Enter 5 score : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
}