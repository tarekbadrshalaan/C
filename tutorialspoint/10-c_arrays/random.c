#include <stdio.h>

// getRandom : generate array of random numbers.

/*
int * getRandom( ) {

   static int  r[10];
   int i;

   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}
*/

int *getRandom()
{

    static int r[10];

    for (int i = 0; i < 10; ++i)
    {
        r[i] = i + 100;
        printf("r[%d] = %d\n", i, r[i]);
    }

    return r;
}

int main()
{
    int *p;
    p = getRandom();
    
    for (int i = 0; i < 10; i++)
    {
        printf("*(p + %d) : %d \n", i, *(p + i));
    }

    return 0;
}
