/*

for(variable declarationn, condition involving the variable, executed code if condition is passed and after loop body is executed)
e.g) for(int i = 0; i < X; i++){}
{
 Loop body to be executed, number of times the lop is specified to do.
}

You can declare the loop variable before initializing it. The code execution after the loop body can also be within the loop body itself.

A for loop is a good way to traverse through arrays via array indexing and also reptitively executing the same body of code.

do while loop: Will always execute once because the program would run and execute the body before reading the condition from while.
do
{

} while(condition);

*/

#include <iostream>

int main()
{
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Hello World!" << std::endl;
    }
    std::cin.get();
}