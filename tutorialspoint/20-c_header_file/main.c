#include <stdio.h>

#include "header.h"

int main()
{
    printf("%d\n", sum(5, 8));
    return 0;
}

// How to build.
// gcc -c header.c -o header
// gcc -c main.c -o main
// gcc header main -o main.o