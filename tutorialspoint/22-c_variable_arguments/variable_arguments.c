#include <stdio.h>
#include <stdarg.h>

double avg(int num, ...)
{
    va_list mylist;
    double sum = 0.0;
    int i;

    // initialize mylist for num number of arguments.
    va_start(mylist, num);

    // access all the arguments assigned to mylist.
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(mylist, int);
    }

    // clean memory reserved for mylist.
    va_end(mylist);

    return sum / num;
}

int main()
{
    printf("Average of 2, 3, 4, 5 = %.2f\n", avg(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %.2f\n", avg(3, 5, 10, 15));
}