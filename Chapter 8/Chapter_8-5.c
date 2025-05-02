#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10

typedef struct
{
    char id[10];
    char name[50];
    int score;
} Student;

int main()
{
    Student students[NUM_STUDENTS];
    int i, maxScore = 0, count = 0;

    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        scanf("%s %s %d", students[i].id, students[i].name, &students[i].score);
        if (students[i].score > maxScore)
        {
            maxScore = students[i].score;
        }
    }

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        if (students[i].score == maxScore)
        {
            count++;
        }
    }

    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n", maxScore, count);

    int index = 1;
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        if (students[i].score == maxScore)
        {
            printf("%d. %s %s %d\n", index++, students[i].id, students[i].name, students[i].score);
        }
    }

    return 0;
}