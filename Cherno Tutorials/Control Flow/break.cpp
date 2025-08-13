#include <iostream>

int main()
{
    for(int i = 0; i < 5; i++)
    {
        if((i + 1) % 2 == 0)
            break; //The moment the condition is satisfied and meets "break" the loop is over.
            //Loop body only runs once due to "break"
        std::cout << "Hello World!" << std::endl;
        std::cout << i << std::endl;
   }

    std::cin.get();
}