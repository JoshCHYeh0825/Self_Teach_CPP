/*

Header Files

A file to store all declarations so we can call functions from other files.

You can declare the function that is defined, without a body (without a body means it access and is declared)
and it will be call-able in the file.

Instead of needing to constantly declare functions we use the header file.

Using #include to include the header file; we declare the function signature in the header file.

*/

#include <iostream>
#include "Log.h"

int main()
{
    InitLog();
    Log("Hello World!");
    std::cin.get();
}



