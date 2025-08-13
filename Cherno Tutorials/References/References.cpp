/*

References are just pointers + context sugar lmao

*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment(int& value) //takes in a pointer, but we can use & to let it take the reference instead
{
    value++; // Increments the data in the address instead of the address itself
}

int main()
{
    int a = 5;
   /* int& ref = a;
   var_type& means reference to the variable type it is referring to
   In our case ref is an int type reference to the int variable a
   ref = 2; //WE directly set a as 2, chaing it from 5 by assigning ref = 2
   
   A declared reference cannot change what it references to e.g) wanting to change int& ref = a into ref = b would not work. It would set the value of b into a.
   
   It's easier to do so using references to pointer i.e)

   int* ref = &a;
   *ref = X;
   ref = &b;
   *ref = Y;

   setting the value of a = X, b = Y

   */


   Increment(a);
   //Instead of directly incrementing a, it will create a new variable called valuable, set it to the value of a and increment the copy instead of a itself 
   // We can actually affect the value of a if Increment takes in an in* instead of just int.
   LOG(a); 
   
   std::cin.get();
}