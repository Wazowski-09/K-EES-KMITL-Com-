#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char input[100];
    char upper[100], lower[100];

    printf("Enter a string : ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        upper[i] = toupper(input[i]);
        lower[i] = tolower(input[i]);
    }
    upper[i] = '\0'; // Null-terminate the strings
    lower[i] = '\0';

    printf("Capital : %s\n", upper);
    printf("Small : %s\n", lower);

    return 0;
}