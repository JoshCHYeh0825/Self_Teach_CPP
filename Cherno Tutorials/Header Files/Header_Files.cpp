/*

Header Files

A file to store all declarations so we can call functions from other files.

You can declare the function that is defined, without a body (without a body means it access and is declared)
and it will be call-able in the file.

Instead of needing to constantly declare functions we use the header file.

*/

#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    Log("Hello World!");
    std::cin.get();
}



