#include <iostream>
#include <string>
using namespace std;

#include "List.h"

/*
List::List(){
    head = 0;
}
*/

List::List() : head(0){}

List::~List(){

    Node* currNode = head;
    Node* nextNode;
    //Node* prevNode;

    while(currNode != NULL){
        nextNode = currNode->next;
        delete currNode->bookData;
        delete currNode;
        currNode = nextNode;
    }
}


void List::add(Book* aBook){
    cout<<"ADDING"<<endl; 
    Node* tmpNode;
    Node* currNode;
    Node* prevNode;
    //Node* nextNode;
    
    tmpNode = new Node;
    tmpNode->bookData = aBook;
    tmpNode->next = 0;

    currNode = head;
    prevNode = NULL;

    while(currNode != NULL){
        if(aBook->lessThan(currNode->bookData)){
            break;
        }
        
        prevNode = currNode;
        currNode = currNode->next;
    }
    
    if(prevNode == NULL){
        head = tmpNode;
        head->prev = NULL;
    }else{
        prevNode->next = tmpNode;
        tmpNode->prev = prevNode;
    }

    tmpNode->next = currNode;
    if(currNode!= NULL){currNode->prev = tmpNode;}
}


void List::print(){
/*    
    //for-loop version of the while-loop below
    for(currNode = head; currNode !=Null;currNode = currNode->next){
        currNode->data->print();
    }
*/
    Node* currNode = head;
    Node* prevNode;
    
    cout << endl << "In ascending order, OLDEST TO NEWEST------------------|" << endl;

    while(currNode != NULL){
        currNode->bookData->print();
        prevNode = currNode;
        currNode = currNode->next;
    }
    
    currNode = prevNode;
    //Node* currNode = tail;

    cout << endl << "In descending order, NEWEST TO OLDEST-----------------|" << endl;

    while(currNode != NULL){
        //cout << "Printing Backwards!" << endl;
        currNode->bookData->print();
        currNode = currNode->prev;
    }
    
}


//Traverses the linked list and adds every Book pointer that is
//currently in the list to the parameter array. This is a SHALLOW COPY.
//We are not creating new Books here!!!  We are simply copying all the
//pointers from one container (the linked list) into another (the
//array)
void List::copy(Array& arrBookPtrs){

    Node*   currNode = head;
    Node*   prevNode;
    Book*   aBookPtr;
    int     arrIndex = 0;

    if(head == NULL){
        cout << "The LinkedList is empty. NOTHING TO COPY!!" << endl;
        return;
    }
    
    cout << endl << "COPYING Book from LList to Array-------------|" << endl;

    while(currNode != NULL){
        aBookPtr = currNode->bookData;
        //arrBookPtrs[arrIndex] = aBookPtr;
        //arrBookPtrs.elements[arrIndex] = aBookPtr;
        arrBookPtrs.add(aBookPtr);
        prevNode = currNode;
        currNode = currNode->next;
        ++arrIndex;
    }
    cout << endl << arrIndex << " COPIED. COPYING COMPLETED." << endl;
    return;
}

