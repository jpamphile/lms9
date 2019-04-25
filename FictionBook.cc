#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "FictionBook.h"

//FictionBook Ctor
FictionBook::FictionBook(int ic, string cnc, string tc, string ac, int yc)
            :/*id(ic), title(tc), author(ac), year(yc), callNumber(cnc),*/
            Book(ic, cnc, tc, ac, yc){
    cout << "-- In FictionBook Ctor... --" << endl;            
}

//FictionBook Dtor
FictionBook::~FictionBook(){
    cout << "-- In FictionBook Dtor... --" << endl;
}

bool FictionBook::lessThan(Book* book){
    return(getAuthorName() < book->getAuthorName());
}

