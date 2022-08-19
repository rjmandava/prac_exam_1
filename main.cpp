#include "Book.h"
#include <string>
#include <iostream>



int main(void){
    //create a library and a book
    Library library;
    Book book;

    // add the book to library
    library.addDocument(book);

    // check if the book is in the library
    library.hasDocument(book);



    return 0;
}