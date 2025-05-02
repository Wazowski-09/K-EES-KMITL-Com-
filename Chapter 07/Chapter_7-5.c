#include <stdio.h>
#include <string.h>
void print_id_card(char name[], char job[], int age);

int main()
{
    char name[50], job[50];
    int age;

    // Prompt the user for input
    printf("Enter name, age, job : ");
    scanf("%s %d %s", name, &age, job);

    // Print the ID card
    print_id_card(name, job, age);

    return 0;
}

void print_id_card(char name[], char job[], int age)
{
    // Print the top border
    printf("======================\n");

    // Print the name
    printf("| %-18s |\n", name);

    // Print the separator
    printf("| ------------------ |\n");

    // Print the age
    printf("| Age : %-12d |\n", age);

    // Print the job
    printf("| Job : %-12s |\n", job);

    // Print the bottom border
    printf("======================\n");
}