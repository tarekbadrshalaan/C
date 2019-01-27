#include <stdio.h>

const int MAX = 3;
void pointerArithmetic()
{
    int var[] = {10, 20, 30};

    // incrementing.
    int *ptr_incrementing;
    // let us have array address in pointer
    ptr_incrementing = var;
    for (int i = 0; i < MAX; i++, ptr_incrementing++)
    {
        printf("I:Address var[%d] = %p && value var[%d] = %d\n", i, ptr_incrementing, i, *ptr_incrementing);
    }

    // decrementing.
    int *ptr_decrementing;
    // let us have array address in pointer.
    ptr_decrementing = &var[MAX - 1];
    for (int i = MAX - 1; i >= 0; i--, ptr_decrementing--)
    {
        printf("D:Address var[%d] = %p && value var[%d] = %d\n", i, ptr_decrementing, i, *ptr_decrementing);
    }

    // Comparisons.
    int *ptr_Comparisons;
    // let us have arrary address in pointer.
    ptr_Comparisons = var;
    int j = 0;
    while (ptr_Comparisons <= &var[MAX - 1])
    {
        printf("C:Address var[%d] = %p && value var[%d] = %d\n", j, ptr_Comparisons, j, *ptr_Comparisons);
        ptr_Comparisons++;
        j++;
    }
}