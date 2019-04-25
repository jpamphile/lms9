#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "NonFictionBook.h"

//NonFictionBook Ctor
NonFictionBook::NonFictionBook(int ic, string cnc, string tc, string ac, int yc)
               :/*id(ic), title(tc), author(ac), year(yc), callNumber(cnc),*/
               Book(ic, cnc, tc, ac, yc){
    cout << "-- In NonFictionBook Ctor... --" << endl;            
}

//NonFictionBook Dtor
NonFictionBook::~NonFictionBook(){
    cout << "-- In NonFictionBook Dtor... --" << endl;
}

bool NonFictionBook::lessThan(Book* book){    
    return(this->getCallNumber() < book->getCallNumber());
}

