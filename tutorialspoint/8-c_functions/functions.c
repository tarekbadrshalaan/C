#include <stdio.h>

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }

    return num2;
}

void swapvalue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("print from swapvalue a:%d b:%d\n", a, b);
    return;
}

void swapreference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("print from swapreference a:%d b:%d\n", *a, *b);
    return;
}

int main()
{
    int a = 100;
    int b = 200;

    int result = max(a, b);

    printf("Max value is : %d\n", result);

    printf("Before swapvalue, value of a : %d\n", a);
    printf("Before swapvalue, value of b : %d\n", b);
    swapvalue(a, b);
    printf("After swapvalue, value of a : %d\n", a);
    printf("After swapvalue, value of b : %d\n", b);

    printf("Before swapreference, value of a : %d\n", a);
    printf("Before swapreference, value of b : %d\n", b);
    swapreference(&a, &b);
    printf("After swapreference, value of a : %d\n", a);
    printf("After swapreference, value of b : %d\n", b);

    return 0;
}