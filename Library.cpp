#include "Library.h"

#include <iostream>
#include <string>

using namespace std;


Library::Library(){
    // default constructor
}

void Library::addDocument(string book_name_t){
    book_name = book_name_t;
}

bool Library::hasDocument(Library documents_list, Library book_1){

    // check if DOcument exists in library
    for (int i=0; i < librarysize; i++){
        if (documents_list[i] == book_1.book_name){
            return true;
        }
        else {
            return false;
        }
    }
}