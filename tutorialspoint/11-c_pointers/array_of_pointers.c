#include <stdio.h>

void array_of_pointers()
{
    const int MAX = 3;
    int data[] = {10, 20, 30};
    int *ptr_data[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr_data[i] = &data[i];
    }

    for (int i = 0; i < MAX; i++)
    {
        printf("value of data[%d] = %d\n", i, *ptr_data[i]);
    }

    char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
    };

    for(int i = 0; i < MAX; i++)
    {
        printf("value of names[%d] = %s\n",i,names[i]);
    }
    
}