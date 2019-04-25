#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Control.h"

/*
//Control ctor
Control::Control(){
    numBooks = 0;
}
*/

//Control ctor : Retrieves all of the user's books from the BookServer (and the
//simulated cloud storage) at the beginning program
Control::Control():numBooks(0){

    //Declaring two local Array object
    //Declaring 1 array that holds FictionBooks
    Array   arrFBooks;

    //Declaring 1 array that holds NonFictionBooks
    Array   arrNFBooks;
    
    //Calling the book server's retrieve() function with the two Array objects
    //The retrieve() populates the arrays with the data from the cloud storage
    bServer.retrieve(arrFBooks, arrNFBooks);

    for(int i = 0; i<arrFBooks.getSize(); i++){
        inTheLounge.addBook(arrFBooks.get(i));
    }

    for(int i = 0; i < arrNFBooks.getSize(); i++){
        inTheSCS.addBook(arrNFBooks.get(i));
    }
}

/*
//Control dtor
Control::~Control(){

}
*/

//Control dtor
Control::~Control(){
    //Declaring two local Array objects
    //Declaring 1 array to hold FictionBooks
    Array   arrFBooks;

    //Declaring 1 array to hold NonFictionBooks
    Array   arrNFBooks;

    //Using the copyBooks() to each library to copy the library's books to the
    //corresponding Array object.
    inTheSCS.copyBooks(arrNFBooks);
    inTheLounge.copyBooks(arrFBooks);

    //Calling the BookServer's update() with the 2 Array objects.
    //update() will simulate the upload of the data to the cloud storage
    bServer.update(arrNFBooks, arrFBooks);
}



//Implements the program control flow from the main() and does the following
//- uses a View object to 
//  1 - display the main menu
//  2 - read in the user's selection, until the user chooses to exit
//  3 - creates a new Book object and 
//  4 - adds it to the library using existing functions
void Control::launch(){
    
    int     id; 
    int     year; 
    int     selection;
    int     fictNonFict;
    string  title;
    string  author;
    string  callNumber;

    while(1){
        
        //Display the main menu. View obj calls its mainMain() 
        //OUTPUT param passed by ref by ref, aliased to selection
        //mainMain(int& selectionRef) in View.cc
        theView.mainMenu(selection); 
    
        if(selection == 0){
            break;
        }

        if(selection == 1){

            //Using the View object, prompts the user to enter the type of book
            //to be created
            theView.readBookType(fictNonFict);

            //Creates a new FictionBook or a new NonFictionBook object
            //depending on the user's selection. There will no longer be any
            //Book objects created
        
            if(fictNonFict == 1){

                //All parameters are OUTPUT parameters, passed by ref by ref 
                theView.readBookInfo(id, callNumber, title, author, year);

                //Creactes a new NonFictionBook object
                NonFictionBook* nfBook = new NonFictionBook(id, callNumber, title, author, year);

                //Adds the new NonFictionBook to the correct library : SCS
                inTheSCS.addBook(nfBook);
            }

            if(fictNonFict == 0){

                //All parameters are OUTPUT parameters, passed by ref by ref 
                theView.readBookInfo(id, callNumber, title, author, year);

                //Creates a new FictionBook object
                Book* fBook = new FictionBook(id, callNumber, title, author, year);

                //Adds the new FictionBook to the correct library : lounge
                inTheLounge.addBook(fBook);
            }

/*
            //There will no longer be any Book objects created from tutorial 7 on            
            //All parameters are OUTPUT parameters, passed by ref by ref 
            theView.readBookInfo(id, title, author, year); 

            //Create a new Book object
            Book* book = new Book(id, title, author, year);
            
            //Adds the book to the Library addBook() and "funnels"/"delegates" adding the book
            //into the Array Class aka Collection Class.
            //Library addBook() -> Array addBook()
            //In other words : book is passed in the Library addBook(), which uses the
            //Array addBook() in its implementation.  See Library.cc
            inTheLibrary.addBook(book);
*/

            //Increase the number of books by 1.
            ++numBooks;
        }
    }
    
    


/*
    //Print out the content of the library at the end of the program.
    //print(Library& libRef) is called by a View obj and uses an OUTPUT param
    theView.print(inTheLibrary);
*/

    //Prints both librarires to the screen at the end of the program
    cout << endl << "Printing Non Fiction Books from the SCS : " << endl;
    theView.print(inTheSCS);
    cout << endl << "Printing Fiction Books from the Lounge : " << endl;
    theView.print(inTheLounge);


    return;
}
