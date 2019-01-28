
#include <stdio.h>

void pointer_to_pointer()
{
    int value = 3000;
    int *ptr;
    int **pptr;

    // take the address of value.
    ptr = &value;
    
    //take the address of ptr using address of operator.
    pptr = &ptr;

    printf("the value = %d\n",value);
    printf("the value available at *ptr = %d\n",*ptr);
    printf("the value available at **pptr = %d\n",**pptr);

}