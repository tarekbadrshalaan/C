#include <stdio.h>

int main()
{
    double balance[5] = {1, 2, 3, 4, 5};
    double *p;

    p = balance;

    // output each array element's value
    printf("Array values using pointer\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(p + %d) : %.2f\n", i, *(p + i));
    }

    printf("Array values using balance as address\n");

    for (int i = 0; i < 5; i++)
    {
        printf("*(balance + %d) : %.2f\n", i, *(balance + i));
    }

    return 0;
}