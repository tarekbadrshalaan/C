#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; /* global variable */

extern void base_main();

int main(){
    while (count--){
        func();
    }
    base_main();
}

void func(void){
    static int i = 5; /* local static variable */
    i++;

    printf("i is %d and count is %d \n",i,count);

}