#include <stdio.h>

#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n")

#define tokenpaster(n) printf("token" #n " = %d\n", token##n)

#if !defined(MESSAGE)
#define MESSAGE "Hello-World!"
#endif

#define square(x) ((x) * (x))

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    printf("FILE : %s\n", __FILE__);
    printf("DATE : %s\n", __DATE__);
    printf("TIME : %s\n", __TIME__);
    printf("LINE : %d\n", __LINE__);
    printf("STDC : %d\n", __STDC__);

    message_for("ali", "hassan");

    int token34 = 40;
    int token32 = 15;
    tokenpaster(32);

    printf("Here is the message: %s\n", MESSAGE);

    int num = 8;
    printf("square %d is %d\n", num, square(num));

    int x = 30;
    int y = 20;
    printf("Max between %d and %d is %d\n", x, y, MAX(x, y));

    return 0;
}