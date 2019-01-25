#include <stdio.h>

// avg function declaration
double avg(int arr[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

int main()
{

    // n is an array of 10 integers.
    int n[10];

    // initialize elements of array n to 0.
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100; // set element at location i to i + 100;
    }

    // output each array element's value.
    for (int i = 0; i < 10; i++)
    {
        printf("Element[%d] = %d\n", i, n[i]);
    }

    // a two dimensional array with 5 rows and 2 columns
    int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = %d \n", i, j, a[i][j]);
        }
    }

    int b[2][2] = {1, 2, 3, 4};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("b[%d][%d] = %d \n", i, j, b[i][j]);
        }
    }

    int balance[5] = {1, 2, 3, 4, 5};

    printf("Avarage value of balance is : %.2f \n", avg(balance, 5));

    return 0;
}
