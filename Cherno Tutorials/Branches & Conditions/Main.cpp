/*

if statements and branches would carry overhead because you need to check the condition and branch/jump.
True = 1, False = 0

Execute conditional code if true, skips if false.

Branching/comparitors are a good way to check if a pointer is null
e.g)

const char* ptr = "hello";
if (ptr){

or 

ptr = 

}
*/

#include <iostream>
#include "Log.h"

int main()
{
    const char* ptr = nullptr;
    if (ptr)
        Log(ptr);
    else
        Log("ptr is null");
        
    std::cin.get();
}



