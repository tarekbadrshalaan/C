#include <stdio.h>

int count;
void base_main();
extern void write_extern();

void base_main(void){
    count = 5;
    write_extern();
}