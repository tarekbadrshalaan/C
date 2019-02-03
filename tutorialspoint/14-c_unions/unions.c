#include <stdio.h>
#include <string.h>

/* Why do we need C unions

0. You're only supposed to read the field which was most recently written.

1. Often used to convert between the binary representations of 
    integers and floats,this is technically undefined behavior according to the C standard.

2. Unions are also sometimes used to implement pseudo-polymorphism in C,
    by giving a structure some tag indicating what type of object it contains,
    and then unioning the possible types together.

REF. https://stackoverflow.com/questions/252552/why-do-we-need-c-unions
*/

union Data {
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;
    data.i = 101;
    data.f = 220.5;
    strcpy(data.str, "C Programming");

    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);

    union Data data2;
    data2.i = 101;
    printf("data2.i : %d\n", data2.i);
    data2.f = 220.5;
    printf("data2.f : %f\n", data2.f);
    strcpy(data2.str, "C Programming");
    printf("data2.str : %s\n", data2.str);

    // 1. used to convert between the binary representations.
    union {
        int i;
        float f;
    } u;
    u.f = 3.14159f;
    printf("As integer: %08x\n", u.i);

    return 0;
}

// 2. Use Unions are to implement pseudo-polymorphism in C.
enum MyType
{
    INTS,
    FLOAT,
    DOUBLE
};
struct Supp
{
    enum MyType stype;
    union {
        int ints[2];
        float floats[2];
        double doubles[2];
    };
};

void checkMyType(struct Supp *s)
{
    switch (s->stype)
    {
        case INTS:
            // do something with s->ints
            break;
        case FLOAT:
            // do something with s->floats
            break;
        case DOUBLE:
            // do something with s->doubles
            break;
        default:
            break;
    }
}
