/*

Raw pointers (Smart Poitners later)

A pointer is an integer/number that stores a memory address. 

*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

int main()
{
    int var = 8; 
    //void* ptr = &var; &var_name = memory address of var_name, so we assigned ptr to the memory address of var
    /*double* ptr = (double*)&var; If we assign the pointer to a different data ntype than var it wouldn't work unless we cast it
    //data_type* ptr = (data_type*, this is casting)&var;
    */

    int* ptr = &var;
    *ptr = //This dereferences the pointer so we can access the data in the address. Data type needs to match, if it is void it cannot be changed

    /*
    void* ptr = nullptr;0 is not a vlid memory address, they do not go all the way down to 0. Giving ptr = 0 means it's an invalid address.
    // Setting a pointer to 0  means setting it to null, or nullptr
    // Void pointer means we do not care what the type of data is in the address

    */
    std::cin.get();
}