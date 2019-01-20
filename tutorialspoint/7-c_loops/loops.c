#include <stdio.h>

int main()
{
    int a = 10;
    while (a < 20)
    {
        printf("WHILE: value of a %d\n", a);
        a++;
        if (a > 17)
        {
            break;
        }
    }

    do
    {
        printf("DO: value of a %d\n", a);
        a++;
    } while (a < 30);

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("value of i %d\n", i);
    }
    
    MYLABLE:
    while (a < 40)
    {
        a++;
        if (a == 35)
        {
            goto MYLABLE;
        }
        printf("WHILE: value of a %d\n", a);
    }

    return 0;
}