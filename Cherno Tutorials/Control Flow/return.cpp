#include <iostream>

int main()
{
    for(int i = 0; i < 5; i++)
    {
        if((i + 1) % 2 == 0)
            return 0; // The moment the program reaches here the function main() stops working immediately.
            // Only return at the end of the function or when you want the program to run through a certain stage before stopping.

            //Unlike break and continue, return can be put anywhere within a function i.e return 0 for int main().
            //Unless the function is a void function, you have to return the data type the function is declared as.
        std::cout << "Hello World!" << std::endl;
        std::cout << i << std::endl;
   }

    std::cin.get();
}