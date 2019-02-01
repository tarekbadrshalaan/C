package main

import "fmt"

// Books :
type Books struct {
	id      int64
	title   string
	auther  string
	subject string
}

func main() {

	// Declare book1 of type book;
	book1 := Books{}
	// Declare book2 of type book;
	book2 := Books{}

	// book1 specification
	book1.getBookID()
	book1.title = "C Programming"
	book1.auther = "Nuha Ali"
	book1.subject = "C Programming Tutorial"

	// book2 specification
	book2.getBookID()
	book2.title = "Python"
	book2.auther = "Zara Ali"
	book2.subject = "Python Programming Tutorial"

	// print Book1 info by passing address of book1.
	book1.printBook()

	// print Book2 info by passing address of book2.
	book2.printBook()
}

// ID : incremental id.
var ID int64

func (book *Books) getBookID() {
	ID++
	book.id = ID
}

func (book *Books) printBook() {
	fmt.Printf("Id: %d; Title:%s; auther:%s; subject:%s;\n", book.id, book.title, book.auther, book.subject)
}
