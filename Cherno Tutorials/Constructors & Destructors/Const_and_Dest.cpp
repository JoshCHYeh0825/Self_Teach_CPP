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
        X= 0.0f;
        Y = 0.0f;
        std::cout << "Created Entity!" << std::endl;
    }
    
    ~Entity() // ~ indicates its a destructor
    // Most likely used to uninitialize or destroy constructor initialized objects so there won't be memory leaks
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

class Log
{
public:
    Log() = delete; // Removes the default constructor so it can't be called
    static void Write()
    {

    }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    Function();
    std::cin.get();
    // Without declaring a constructor we have one by default but it does nothing 
}