#include <iostream>

class Entity()
{
public:
    float X, Y;

    void Move(float a, float b)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity // Created a class called Player that alsl inherited eveyrthing from Entity.
// Player is now both the Entity and Player type.
// Everything not privated in the Entity class is accessible by the Player. 
// Due to inheritance, Player would also inherit the memory size.requirements from entity.
{
    const char* Name;
    
    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    Player player;
    player.PrintName();
    player.X = 2;
    player.Y = 3;
    player.Move(5, 5);
    std::cin.get();
}