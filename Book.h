#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    //Book ctor
    Book(int=0, string="Unknown", string="Unknown", string="Unknown", int=0);



    //Book dtor is made virtual
    virtual ~Book();

    //Compares book years
    virtual bool lessThan(Book* book) = 0;



    //Sets the book's id, title,  author and year
    void setBook(int, string, string, int /*,string*/);

    //Prints a single book
    void print();

    //Getter member functions for author name. Will be used every time a book is added.
    string getAuthorName();
    
    //Getter member function for call number.  Will be used every time a book is added.
    string getCallNumber();

  private:
    string  author;

    //callNumber based on Dewey Decimal System
    string  callNumber;

  protected:
    int     id;
    string  title;
    int     year;

};
#endif

