#include <iostream>
#include <string>

class Entity
{
    public:
        virtual std::string GetName() { return "Entity"; }
        //virtual introduces dynamic dispatch which compilers typically implement via a V Table
        //V table is a virtual table which maps all of the virutal functions of the base call
        // Table can map the virtual functions to the correct overwritten function
};

class Player : public Entity
{
    private:
        std::string m_Name;
    public:
        Player(const std::string& name)
            : m_Name(name) {}

        std::string GetName() override { return m_Name; } //override indicates its an overriden function
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Taco");
    PrintName(p);
    
    std::cin.get();
}