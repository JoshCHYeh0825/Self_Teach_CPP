/*

Constructor: Type of method that runs everytime we instantiate an object

*/

#include <iostream>

class Entity
{
public:
    float X, Y;  

    void Init()
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
    e.Init();
    std::cout << e.X << std::endl;
    e.Print();
    std::cin.get();
}