#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define MAX_ARR_SIZE	 128

/*
#include "Library.h"
#include "Book.h"
*/

#include "Array.h"

//Array ctor - This is A COLLECTION CLASS aka Database of Books
Array::Array(){
	size = 0;
    //cout << "$$ CTOR Array Collection $$" << endl;
}


//Array dtor : dtor deletes Books and their pointers freeing the Heap
Array::~Array(){
    for(int i = 0; i < size; i++){
        //cout << "////// DELETING : " << arrBookPtr[i] << " //////" << endl;
        delete arrBookPtr[i];
    }
}


//add(Book* book) : adds book in array of type Book in ascending order by year. Increments array size.
void Array::add(Book* book){	//add(Book& book){
    
    //cout << "&&&&&& ADDING BOOK FROM Array &&&&&&" << endl;
    if(size == 0){
        arrBookPtr[size] = book;
        size++;
        //cout << "^^^^^^ 1st BOOK ^^^^^^" << arrBookPtr[0] << endl;
        return;
    }

    if(size > 0 && size < MAX_ARR_SIZE){
        
        if(book->lessThan(arrBookPtr[size - 1]) == false){
            arrBookPtr[size] = book;
            size++;
        }else{

            for(int i = 0; i < size; i++){
            
                //cout << book->lessThan(arrBookPtr[i]) << endl;

                if(book->lessThan(arrBookPtr[i]) == true){
                    int targetIndex = i;

                    for(int i = size; i > targetIndex; i--){
                        arrBookPtr[i] = arrBookPtr[i - 1];
                        //cout << "[[[[[[ SHIFTING ]]]]]]" << endl;
                    }

                    arrBookPtr[targetIndex] = book;
                    size++;
                    //cout << "====== BOOK ADDED ======" << endl;
                    break;
                }
            }
        }
    }
}


//print() : Collection prints books via ptrs stored in array of type Book
void Array::print(){
//	TO BE REMOVED - cout << endl << endl << "LIBRARY LIST OF BOOKS : " << endl;

    //cout << "(((((( PRINTING FROM ARRAY ))))))" << endl; 
	for(int i = 0; i < size; i++){
		arrBookPtr[i]->print();
	}
	
//	cout << endl;
}
