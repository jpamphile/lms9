#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
//#include "Array.h"
#include "Library.h"
#include "List.h"
//#include "View.h"

class Library{

  public:

    //Library ctor
    Library();
    
    //Library dtor
    ~Library();

    //Adds book
    void addBook(Book* book);
    
    //Prints books in the library
    void print();

    //Calls its Book list's copy() function implemented in List.h/List.cc
    void copyBooks(Array& arrCopiedBooks);

  private:
    //Array arrOfBooks;		        //Book    arr[MAX_ARR_SIZE];
    			    	            //int     numBooks;
    List llBooks;
};

#endif

