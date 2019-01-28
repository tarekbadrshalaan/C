#include <stdio.h>
#include <string.h>

int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting);

    char s1[12] = "Hello";
    char s2[12] = "World";
    char s3[12];

    // copy s1 into s3.
    strcpy(s3, s1);
    printf("strcpy(s1,s3): %s\n", s3);

    // compare s1 with s3.
    int cmp = strcmp(s1, s3);
    if (cmp == 0)
    {
        printf("strcmp(s1,s3): %d\n", cmp);
    }

    // concatenates s2 with s1.
    strcat(s1, s2);
    printf("strcat(s1,s2): %s\n", s1);

    // total lenghth of str1 after concatenation.
    int len = strlen(s1);
    printf("strlen(s1): %d\n", len);

    return 0;
}
