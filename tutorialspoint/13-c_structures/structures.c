#include <stdio.h>
#include <string.h>

struct Books
{
    int id;
    char title[50];
    char auther[50];
    char subject[50];
};

void printBook(struct Books *book);
void getBookID(struct Books *book);

int main()
{
    // Declare book1 of type book;
    struct Books book1;
    // Declare book2 of type book;
    struct Books book2;

    // book1 specification
    getBookID(&book1);
    strcpy(book1.title, "C Programming");
    strcpy(book1.auther, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");

    // book2 specification
    getBookID(&book2);
    strcpy(book2.title, "Python");
    strcpy(book2.auther, "Zara Ali");
    strcpy(book2.subject, "Python Programming Tutorial");

    // print Book1 info by passing address of book1.
    printBook(&book1);

    // print Book2 info by passing address of book2.
    printBook(&book2);

    return 0;
}

static int ID = 0;

void getBookID(struct Books *book)
{
    ID ++;
    book->id = ID;
}

void printBook(struct Books *book)
{
    printf("Id:%d; Title:%s; auther:%s; subject:%s;\n", book->id, book->title, book->auther, book->subject);
}
