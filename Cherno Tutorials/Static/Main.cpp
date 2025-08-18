/*

Static, a keyword with two meanings.
1. When used outside of a class or struct  
    Linkage of the declared symbol is internal. Only available to the translation unit (separate CPP files) defined in.
2. Within a class or struct.
    Variable is going to share memory with all instances of the class created within or external of the translation unit.

Similar thing applies to static methods.

You would want to use static as much as you can otherwise memory gets messed up.
It is easier to link methods and variables via extern or using header files.
*/

#include <iostream>

extern int s_Variable; //If in another CPP file we defined s_Variable, we can link it to this file through declaring extern unless they used static

void Function()
{

}

int main()
{
    std::cout << s_Variable << std::endl;
    std::cin.get();
} 