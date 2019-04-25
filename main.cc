/*COMPILATION INSTRUCTIONS
 *
 * To compile...
 *  1 - update Makefile
 *  2 - type "make clean"
 *  3 - type "make" command
 *  4 - type "clear"
 *  5 - ./t01 < in.txt
 *  6 - make clean
 *
 */ 

#include <iostream>
using namespace std;
#include <string>

#include "Book.h"
#include "Library.h"
#include "Array.h"

#include "View.h"
#include "Control.h"


//#define MAX_ARR_SIZE  128     //from t01

//int  mainMenu();  //commented out for t05
//void printLibrary(Book arr[MAX_ARR_SIZE], int num);


int main()
{

    Control start;
    start.launch();

/*commented out for t05
 
  //Book    library[MAX_ARR_SIZE];  //from t01
  Library   inTheLibrary;           //created for t02
  int       numBooks = 0;
  string    title, author;
  int       id, year;
  int       menuSelection;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
      break;
    else if (menuSelection == 1) {
      cout << "id:  ";
      cin  >> id;

      cout << "title:   ";
      cin.ignore();
      getline(cin, title);

      cout << "author: ";
      getline(cin, author);

      cout << "year:  ";
      cin  >> year;

      Book* book = new Book(id, title, author, year);

      //library[numBooks].setBook(id, title, author, year); //from t01
      //inTheLibrary->addBook(book);
      inTheLibrary.addBook(book);
      ++numBooks;
    }
  }

  if (numBooks > 0)
    //printLibrary(library, numBooks);  //from t01
    inTheLibrary.print();//, numBooks);

*/

  return 0;
}

/*************************************************************/

/*commented out for t05, mainMenu() now in View class
int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}
*/


/*//from t01
void printLibrary(Book arr[MAX_ARR_SIZE], int num)
{
  cout << endl << endl << "LIBRARY: " << endl;

  for (int i=0; i<num; ++i)
    arr[i].print();

  cout << endl;
}
*/

