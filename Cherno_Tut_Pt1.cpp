#include <iostream> // Preprocessor statement
/*
#include finds the file <iostream> (header file) takes all of its
contents and paste it onto this file
*/ 
// cout is a part of iostream

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{ 
// main() is the entry point

/*
int type main() does not return a value at all.
Would return error code if specified a return int value.
Default return code value is 0
*/

/*
<< is an overloaded operator, think as if its a function
std::cout << == std::cout.print("parameter").printf(std::endl);
 */

 //std::cout << "Hello World!" << std::endl;
 Log("Hellow World!");
 std::cin.get();

/*
Program execution pauses after executing cout and endl until you press Enter.
get() forces program to stop until Enter is pressed
*/

// Program that contains main() is known as the source file
}