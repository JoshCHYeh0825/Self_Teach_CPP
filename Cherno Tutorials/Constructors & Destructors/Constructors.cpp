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

class Log
{
public:
    Log() = delete; // Removes the defaultl constructor so it can't be called
    static void Write()
    {

    }
};

int main()
{
    Log::Write();
    Log 1;

    Entity e(10.0f, 5.0f);
    e.Print();

    std::cin.get();

    // Without declaring a constructor we have one by default but it does nothing 
}