#include <iostream>

struct Entity
{
    int x, y; // Declaring x and y as static ints will no longer make them class members.
    // Initializing Entity e1 = { 5, 6 } would inherently not work unless explicitly declared i.e e1.x = ...
    // The static variables are undelcared so they need to be declared somewhere

    static void Print()
    {
        std:: cout << x << ", " << y << std::endl;
    }
};

static void Print(Entity e)
{
    std::cout << e.x << ", " << e.y << std::end;
}

// int Entity::x; // var_type Scope_of_Variable(Entity in our case)::name_of_variable;
// int Entity::y;

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1; // = { 5, 8 };
    e1.x = 5;
    e1.y = 8;

    /*
        Both x and ys from both entities are pointing to the same definition that is outside of main therefore
        would print 5 and 8 twice because e1 was the latest revision of x and y
    */
    Entity::Print();
    Entity::Print();
    std::cin.get();
}