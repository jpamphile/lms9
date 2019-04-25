#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include <string>
using namespace std;

#include "Book.h"

class FictionBook : public Book{

    public:
        //FictionBook Ctor
        //FictionBook(int = 0, string = " ", string = " ",int = 0, string = " ");
        
        FictionBook(int = 0, string = " ", string = " ",string = " ",int = 0);
        

        //FictionBook Dtor
        virtual ~FictionBook();

        //FictionBook-specific lessThan() function
        virtual bool lessThan(Book* book);
/*    
    private:    
        //int     id;
        //string  title;
        //string  author;
        //int     year;
        //string  callNumber;     //call number based on the Dewey Decimal System
*/
};
#endif
