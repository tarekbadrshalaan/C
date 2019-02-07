#include <stdio.h>
#include <string.h>

typedef struct Books
{
    int id;
    char title[50];
    char auther[50];
    char subject[50];
}Book;

void printBook(Book *book);

int main()
{
    Book book1;
    book1.id= 1;
    strcpy(book1.title, "C Programming");
    strcpy(book1.auther, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");

    printBook(&book1);

    return 0;
}

void printBook(Book *book)
{
    printf("Id:%d; Title:%s; auther:%s; subject:%s;\n", book->id, book->title, book->auther, book->subject);
}
