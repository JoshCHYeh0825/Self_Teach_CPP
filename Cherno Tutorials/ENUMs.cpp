/*

ENUM short for enumerations.
A set of values, a way to give a name to a value.
Instead of having a bunch of integers called A,B,C,.. etc.
We can have an ENUM which has the value of A, B, C which are valued to those integers

To simplify, it's a way to name values

TLDR it's an integer.

*/

enum Example : char
{
    A = 5, B = 6, C = 7 // Althought they are declared as A, B, C, they are still values at the end of the day

    //By default the first value would be 0 and it would increment.
};

#include <iostream>

int a = 0;
int b = 1;
int c = 2;

/*

Biggest issue regarding A, B, C is that they aren't grouped
ENUM would group them together

*/

int main()
{
    Example value = B;

    if(value == 1)
    {
        // some action here
    }

    std::cin.get();
}