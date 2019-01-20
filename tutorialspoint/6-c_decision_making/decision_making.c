#include <stdio.h>

int main()
{

    // local variable definition.
    int a = 10;
    int b = 20;
    // check the boolean condition using if statement.
    if (a < b)
    {
        // if condition is true then print the following.
        printf("a:%d is less the b:%d\n", a, b);
    }
    else if (a == b)
    {
        printf("a:%d equals b:%d\n", a, b);
    }
    else
    {
        printf("a:%d is not less the b:%d\n", a, b);
    }

    if (7 % 3)
    {
        printf("done %d!\n", 14 % 8);
    }

    char grade = 'B';
    switch (grade)
    {
    case 'A':
        printf("Excellent! '%c'\n", grade);
        break;
    case 'B':
    case 'C':
        printf("Well done! '%c'\n", grade);
        break;
    case 'D':
        printf("You passed! '%c'\n", grade);
        break;
    case 'F':
        printf("Better try again '%c'\n", grade);
        break;
    default:
        printf("Invalid grade '%c' \n", grade);
    }

    return 0;
}
