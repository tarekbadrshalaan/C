#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int main()
{
    // int c;

    // printf("Enter a value: ");
    // c = getchar();

    // printf("\nYou Entered: ");
    // putchar(c);

    // printf("\n");

    char str[100];
    printf("Enter a value2: ");

    fgets(str, 100, stdin);

    printf("\nYou Entered: %s\n", str);

    char str2[100];
    int i;

    printf("Enter a value3 :");
    scanf("%s %d", str2, &i);

    printf("\nYou entered: %s %d \n", str2, i);

    return 0;
}
