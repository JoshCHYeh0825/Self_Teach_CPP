#include <iostream>
#include <string>

class Entity
{
protected:
    int X, Y;

    void Print(){}
public:
    Entity()
    {
        X = 0;
        Print();
    }
}; // int X, Y are defaulted to private, same as explicilty declaring them as private.
// int X, Y are public by default if using struct instead of class.

// protected = Accessible to the class and all sublcasses
// public = Accessible to everyone

/*
private means only* the class Entity has access to them.
* = because We can label a class as friend and it would have access to the same variables.
*/

class Player : Entity
{


};

int main()
{
    Entity e;

    std::cin.get();
}