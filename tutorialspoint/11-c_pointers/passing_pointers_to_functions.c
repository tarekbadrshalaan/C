#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);

void passing_pointers_to_functions()
{
    unsigned long sec;
    getSeconds(&sec);

    // print the actual value.
    printf("Number of seconds: %ld\n", sec);

    int balance[5] = {1, 2, 3, 4, 5};
    double avg;

    avg = getAverage(balance, 5);
    printf("Average value is: %.2f\n", avg);
}

void getSeconds(unsigned long *par)
{
    // get the current numberof seconds.
    *par = time(NULL);
    return;
}

double getAverage(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    double avg = sum / size;

    return avg;
}
