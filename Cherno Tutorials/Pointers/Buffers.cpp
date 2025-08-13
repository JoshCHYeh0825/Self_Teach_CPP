
#include <iostream>
#define LOG(x) std::cout << x << std::endl;

int main()
{
    char* buffer = new char[8]; /* A char data type is 1 byte, assigning 8 is asking for 8 bytes of memory
    buffer is the pointer to the beginning of the memory block */
    memset(buffer, 0, 8); /* memset fills a block of memory with what we specify. Takes in (pointer, value, size or how many bytes it should fill)
    
    Because we use a new keyword and the memory is heap allocated we should also delete it.
    */

    char** ptr = &buffer;// ** means double pointer which is the pointer to a pointer

    delete[] buffer;
    std::cin.get();
}