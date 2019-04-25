#ifndef LIST_H
#define LIST_H

#include "Book.h"
#include "Array.h"

//COLLECTION CLASS - LINKED LIST
class List{
    
    //Node class - template for a doubly linked list
    class Node{
        
        //List class grants friendship to Node class
        friend class List;
        
        //Node class data members
        private:
            Book* bookData;
            Node* prev;
            Node* next;
    };

    //List class data members and member functions
    public:
        //List ctor
        List();

        //List dtor
        ~List();

        //Member function - Adds a new book to the linked list
        void add(Book* book);

        //Member function - prints out the books to the screen
        void print();

        //Traverses the linked list and adds every Book pointer that is
        //currently in the list to the parameter array. This is a SHALLOW COPY.
        //We are not creating new Books here!!!  We are simply copying all the
        //pointers from one container (the linked list) into another (the
        //array)
        void copy(Array& arrBookPtrsDump);

    private:
        //head(name) is a variable declared in the stack that holds an address
        //on the heap where I will find a Node (type). No value yet as head is
        //declared. REMINDER - a Variable has a name, a value, an address, a type
        Node* head;
        Book* book;
};
#endif
