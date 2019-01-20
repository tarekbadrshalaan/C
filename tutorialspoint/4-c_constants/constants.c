#include <stdio.h>

#define LENGTH1 10
#define WIDTH1 5
#define NEWLINE '\n'

int main(){
    int area1 ;

    area1 = LENGTH1 * WIDTH1;
    printf("value of area1 : %d",area1);
    printf("%c",NEWLINE);

    const int LENGTH2 = 10;
    const int WIDTH2 = 10;
    int area2 ;
    area2 = LENGTH2 * WIDTH2;

    printf("value of area2 : %d",area2);
    printf("%c",NEWLINE);

    return 0 ;
}

