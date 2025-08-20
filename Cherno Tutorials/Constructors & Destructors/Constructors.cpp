/*

Constructor: Type of method that runs everytime we instantiate an object

*/

#include <iostream>

class Entity
{
public:
    float X, Y;  

    Entity() // Use the name of the method, this is the constructor
    {
        X = 0.0f;
        Y = 0.0f;
    }
    
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main()
{
    Entity e;
    std::cout << e.X << std::endl;
    e.Print();
    std::cin.get();
}