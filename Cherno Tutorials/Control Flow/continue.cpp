#include <iostream>

int main()
{
    for(int i = 0; i < 5; i++){
        if(i > 2)
                continue; // Continue skips to the next iteration of the for loop
                // in our case it is skipping every iteration for i = 3, 4
        std::cout << "Hello World!" << std::endl;
        std::cout << i << std::endl;
   }

    std::cin.get();
}