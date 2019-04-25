#ifndef VIEW_H
#define VIEW_H

#include "Book.h"
#include "Library.h"
#include "Array.h"
//#include "Control.h"

using namespace std;

class View
{
    public:
        
        //View ctor
        View();

        //View dtor
        ~View();

        //Displays the main menu and reads in the user's selection
        //int mainMenu(int& selection);
        void mainMenu(int& selectionRef);

        //Reads all information from the user about one book
        void readBookInfo(int& idRef, string& callNumberRef, string& titleRef, string& authorRef, int& yearRef);  

        //Prints out the library, takes in the Library as a parameter.
        //This function will use delegation (see tutorial #3) to as the Library
        //class to print to screen
        void print(Library& libRef);

        //Prompts the user for a book type (Fiction or Non-Fiction)
        void readBookType(int& fictNonFictRef);

    private:


};

#endif
