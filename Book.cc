#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Book.h"


//Book ctor - with member initializer syntax and callNumber data member - t08
Book::Book(int i, string cn, string t, string a, int y) 
     : id(i), callNumber(cn), title(t), author(a), year(y){

    cout << "## in Book ctor : A new book is created! ##" << endl;
}


/*
//This Book Ctor is similar as above. This one doesn't use member initializer
//syntax and doesn't initialize the callNumber data member.
Book::Book(int i, string t, string a, int y) 
{ 
  id = i;
  title = t;
  author = a;
  year = y;

  cout << "## CTOR BOOK ##" << endl;
}
*/


//Book dtor - is now made virtual
Book::~Book(){
    cout << "Book Destroyed" << endl;
}


//Sets book's id number, title, author and year
void Book::setBook(int i, string t, string a, int y/*, string cn*/) 
{
  id     = i;
  title  = t;
  author = a;
  year   = y;
  //callNumber = cn;
}


//Prints a single book object
void Book::print()
{
  cout << setw(3)  << id
       <<"  Title: "        << setw(40)         << title
       <<";  Author: "      << setw(20)         << /*author*/ getAuthorName()
       <<";  Year: "        << setw(10)         << year 
       <<";  Call Number: " << /*callNumber*/ getCallNumber()  << endl;
}


//lessThan() implementation is taken because it's pure virtual
//Compares two books according to their year of publication
//bool Book::lessThan(Book* book);
//{
/*  cout << "@@ COMPARING BOOKS @@" << endl;

  //This return statement also works:
  //return (year < book->year);
  return (this->year < book->year);*/
//}



//Getter member function for author name.  Will be used when book is added.
string Book::getAuthorName(){
    return author;
}


//Getter member function for call number.  Will be used when book is added.
string Book::getCallNumber(){
    return callNumber;
}
