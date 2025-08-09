#include <iostream>
using namespace std;

int Health {150};
bool isDead {false};

void TakeDamage() {
    cout << "Taking Damage function starting\n";
    Health -= 50;
}

int main() {
    cout << "Main function begins\n";
    TakeDamage();
    cout << "Re-calling Take Damage";
    TakeDamage();
    cout << "Main function ends\n";
    
    if (Health <= 0)
    {
        isDead = true;
        cout << "Took too much damage, you have perished\n";
    }
}