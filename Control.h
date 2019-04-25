#ifndef CONTROL_H
#define CONTROL_H

//#include "Book.h"
#include "Library.h"
#include "Array.h"
#include "View.h"
#include "FictionBook.h"
#include "NonFictionBook.h"
#include "BookServer.h"

using namespace std;

class Control
{
    public:
    
        //Control ctor
        Control();

        //Control dtor
        ~Control();

        //Implements the program control flow and does the following:
        void launch();

    private:
/*      
        //Library inTheLibrary REPLACED in tutorial 7 with two library data members
        //Data member for Library object. Used to be declared in main().        
        //Library inTheLibrary;
*/


        //Replacing Library inTheLibrary data member above with 2 library data
        //member:
        //Data member for NonFictionBooks
        Library     inTheSCS;

        //Data member for FictionBooks
        Library     inTheLounge;

        //Data member for a new View object. Will be responsible for user I/O
        View        theView;

        //Data member tracking the number of books. Used to be declared in main()
        int         numBooks;

        //Data member for BookServer
        BookServer  bServer;

        //Data member Array object to hold FictionBooks currently in cloud
        //storage
        Array arrFBooks;

        //Data member Array object to hold NonFictionBooks currently in cloud
        //storage
        Array arrNFBooks;


};
#endif
