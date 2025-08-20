/*

Constructor: Type of method that runs everytime we instantiate an object

*/

#include <iostream>

class Entity
{
public:
    float X, Y;  

    Entity(float x, float y) // Use the name of the method, this is the constructor
    {
        X = x;
        Y = y;
    }
    
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main()
{
    Entity e(10.0f, 5.0f);
    e.Print();

    std::cin.get();

    // Without declaring a constructor we have one by default but it does nothing 
}