/*

if statements and branches would carry overhead because you need to check the condition and branch/jump.

*/

#include <iostream>
#include "Log.h"

int main()
{
    int x = 5;
    bool ComparisonResult = x == 5;
    if(ComparisonResult) // if(boolean) is the same as typing if(boolean == true)
    {
        Log("Hello World!");
    }
    std::cin.get();
}



