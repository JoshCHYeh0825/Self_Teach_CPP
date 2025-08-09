/*
How does the compiler know which files to compile or run the right code? leave it to the Linker

Once all files are compiled the Linker tries to find the right function to use from those files
via looking at the order they are called on main()

Compiler compiles all the text files (cpp files etc language dependent) into .obj files.

The Compiler:
- Preprocess the code: Any preprocessor statements gets evaluated then and there.
--> Sorting out the C++ language into an understandable language for the compiiler.
Most common: include, if, ifedf, define, pragma

#include: Specifies which files to includes, read and pastes all of tis content to where you have #include

#define: Do a search of the specific variable/name/word it is being labelled as and replace their value with what is being #define-ed.

#if: Include or exclude code given conditions (boolean). i.e #if 1 (code segment) #endif.
The code segment will only run if it begins with #if 1. #if 0 will turn that segment off.

#include <iostream>: 50k+ lines of code and files. iostream is huuuuge.

The obj file is all hexadecimal machine code. 



Abstract Syntax Tree: Compiler presentation of the code for it to be compiler-understandable.

*/

#include <iostream> 

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{ 
 Log("Hellow World!");
 std::cin.get();
}