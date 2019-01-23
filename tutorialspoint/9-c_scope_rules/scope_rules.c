#include <stdio.h>

// global variable declaration
int g;
int c;

int main(){
      
    // local variable declaration
    int a, b;

    // actual initialization
    a = 10;
    b = 20;
    c = a + b ; 

    printf("value of a = %d , value of b = %d , value of c = %d and g = %d\n",a,b,c,g);

    return 0;
}

