#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include <string>
using namespace std;

#include "Book.h"

class NonFictionBook : public Book{

    public:
        //NonFictionBook Ctor
        NonFictionBook(int = 0, string = " ", string = " ", string = " ", int = 0);

        //NonFictionBook Dtor
        virtual ~NonFictionBook();

        //NonFictionBook-specific lessThan() function
        virtual bool lessThan(Book* book);

/*
    private:
        int     id;
        string  title;
        string  author;
        int     year;
        string  callNumber;     //call number based on the Dewey Decimal System
*/
};
#endif
