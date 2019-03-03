#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char title[100];
    char *description;

    strcpy(title, "Hello-world");

    // allocate memory dynamically.
    description = malloc(200 * sizeof(char));
    description = calloc(200, sizeof(char));

    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Hello-world from strcpy...");
    }

    printf("1.title : %s\n", title);
    printf("2.description: %s\n", description);

    // suppose you want to store bigger description.
    description = realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description, "| appended data :)");
    }

    printf("3.title : %s\n", title);
    printf("4.description: %s\n", description);

    free(description);

    return 0;
}
