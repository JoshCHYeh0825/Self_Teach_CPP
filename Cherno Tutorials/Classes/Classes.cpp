/*

Classes are a derivative property that transforms C into an OOP adjacent language.

*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Player //Name of class needs to be unique, it's essentially creating a new type of variable
// Class can be accessed publically or privately. Declaring public makes it unviersally accessible
{
public: //x, y, and speed are now publically accessible variables of the Player class
    int x, y;
    int speed;

    void Move(/*Player& player,*/ int xa, int ya) //Use reference to player because we would like to modify the actual value, if functino is not method
    { //Functions within classes are called methods
        x += xa * player.speed;
        y += ya * player.speed; 
    }
}; //Need a ; at the end of the closing brace


int main()
{
    Player p1; //Created p1 of type Player, instantiated a Player object
    p1.Move,(1, -1);

    std::cin.get();
}