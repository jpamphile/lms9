#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include "View.h"

//View ctor
View::View(){

}


//View dtor;
View::~View(){

}


//Displays the main menu and reads in the user's selection
void View::mainMenu(int& selectionRef){
    
    int numOptions = 1;    
    selectionRef = -1;

    cout << endl;
    cout << "(1) Add book" << endl;
    cout << "(0) Exit" << endl;
    cin  >> selectionRef;

    while(selectionRef < 0 || selectionRef > numOptions){
        cout << "Enter your selection: ";
        cin >> selectionRef;
    }
}


//Reads all info from the user about one book
//OUTPUT parameters used in readBookInfo()
void View::readBookInfo(int& idRef, string& callNumberRef, string& titleRef, string& authorRef, int& yearRef){
    
    cout << "id: ";
    cin  >> idRef;

    cout << "title: ";
    cin.ignore();
    getline(cin, titleRef);

    cout << "author: ";
    getline(cin, authorRef);

    cout << "year: ";
    cin  >> yearRef;

    cout << "call number: ";
    cin.ignore();
    getline(cin, callNumberRef);

}


//Prints out the library, takes the library as a parameter, uses delegation to
//ask the Library class to print to the screen
void View::print(Library& libRef){
    
    libRef.print();

}


void View::readBookType(int& fictNonFictRef){

    int numOptions = 1;    
    fictNonFictRef = -1;

    cout << endl;
    cout << "(1) Non Fiction" << endl;
    cout << "(0) Fiction" << endl;
    cin  >> fictNonFictRef;

    while(fictNonFictRef < 0 || fictNonFictRef > numOptions){
        cout << "Enter your selection: ";
        cin >> fictNonFictRef;
    }
}
