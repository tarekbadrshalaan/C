#include <stdio.h>

// int main (){
void pointers (){
    int var1;
    char var2[10];

    printf("Address of var1 variable: %p\n", &var1);    // 0x7fff61aa5428
    printf("Address of var2 variable: %p\n", &var2);    // 0x7fff61aa542e
    
    /**/
    int var3 = 20; // actual variable declaration.
    int *pvar3;    // pointer variable declaration.

    pvar3 = &var3; // store address of var in pointer variable.
    
    printf("Address of var3 variable: %p\n", &var3);
    
    // address stored in pointer variable
    printf("Address stored in pvar3 variable: %p\n",pvar3);

    // access the value using the pointer
    printf("Value of *pvar3 variable: %d\n",*pvar3);

    /**/
    int *nullPointer = NULL;
    printf("The value of nullPointer is : %p\n", nullPointer);
}