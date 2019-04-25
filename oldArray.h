#ifndef ARRAY_H
#define ARRAY_H

#include "Book.h"

#define MAX_ARR_SIZE	128

//This is my COLLECTION CLASS OF BOOKS aka DATABASE OF BOOKS
class Array{

	public:
        //ArrayCollection ctor
		Array();

        //ArrayCollection dtor - will destruct Book objects in the process
		~Array();

        //Adds a book at the back in the ArrayCollection
		void add(Book* book);	//void add(Book& book);

        //Prints the books in the ArrayCollection via arrBookPtr()[]	
        void print();
	
	private:
        //This is the Max Capacity of the Array
		Book* arrBookPtr[MAX_ARR_SIZE];		//Book elements[MAX_ARR_SIZE];

        //This is the number of pointers taking up the array OR the number of
        //pointers pointing at a book created on the Heap.  This is increased
        //by 1 once a book is created then acts as the next index in the array
        //where a pointer will be pointing to a new book on the Heap
		int size;
};
#endif
