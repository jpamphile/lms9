# LIBRARY BOOK SYSTEM - COMP2404 - TUTORIAL 9 - Facade Design Pattern
# 2019/03/27 - 2019/04/03 - 01:00:00PM

## Program and Revision Author
    Jean Pamphile


## Purpose
    - Practice the integration of my code with an existing class
    - Work with the Facade design patter


## Files
    -Sources (*.cc)
        main.cc
        Array.cc
        Book.cc
        Library.cc
        List.cc
        View.cc
        Control.cc
        FictionBook.cc
        NonFictionBook.cc

    -Header (*.h)
        Array.h (provided)
        BookServer.h (provided)
        Book.h
        Library.h
        List.h
        View.h
        Control.h
        FictionBook.h
        NonFictionBook.h

    -Object file
        Array.o
        BookServer.o

    -Data (*.txt)
        in.txt
        in2.txt
        out.txt

    -Build file
        Makefile (provided)


## Compilation, Launching and Operating Instructions
    
    '''In Terminal, type the following commands to compile/launch the system...

    make clean
    make
    ./t09 < in2.txt

    '''

    OR

    '''To output into the out.txt file
    make clean
    make
    ./t09 < in2.txt > out.txt

    '''

    '''To check for memory leaks, use Valgrind.  In Terminal, type the
    following commands....

    make clean
    make
    valgrind ./t09 < in2.txt
    
    '''
