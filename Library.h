#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>



class Library {

public:

    // functions:
    // addDocument - adds a Document to the Library
    // hasDocument - check if a Document is in the library
    Library();
    void addDocument(std::string book_name);
    bool hasDocument(std::string book_name);

protected:
    std::string book_name;
    string documents_list[10000];

};
#endif