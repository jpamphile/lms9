#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define MAX_ARR_SIZE	128

/*
#include "Library.h"
#include "Book.h"
#include "Array.h"
#include "View.h"
*/

#include "Library.h"


//Library ctor
Library::Library(){
    
    //Book    arr[MAX_ARR_SIZE] = { };
    //numBooks = 0;
    //cout << "** CTOR LIBRARY **" << endl;
}


//Library dtor
Library::~Library(){

}


//addBook(Book* book) : via
void Library::addBook(Book* book){	//void Library::addBook(Book& book){

    //cout << "ADDING A BOOK : Library!!" << endl;
    
    //add() from Array.h
	//arrOfBooks.add(book);    //arrObj.add(book); //[numBooks] = book;
	//numBooks++;
    llBooks.add(book);
}


void Library::print(){

    cout << endl << endl << "LIBRARY LIST OF BOOKS : " << endl;

    llBooks.print();//arrOfBooks.print();     //arrObj.print();    
/*
    for(int i = 0; i < numBooks; i++){
        arr[i].print();
    }
*/
    cout << endl << endl;
}


//Calls its Book list's copy() function implemented in List.h/List.cc
void Library::copyBooks(Array& arrCopiedBooks){
    llBooks.copy(arrCopiedBooks);
    return;
}

