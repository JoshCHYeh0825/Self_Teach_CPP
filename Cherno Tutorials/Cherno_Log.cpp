/*
All CPP files in a project gets compiled, not the header files.
Header files are included using #include <>, which is when they get compiled
Every CPP file gets compiled individually into object files (.obj files).

The linker creates an executable (.exe) using all of the comnpiled obj files.
 
Declaration: Statement to claim something exists
Definition: Assigning something to functions etc
*/

#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

/*
We declared the function Log and also the body of code it will run.
Therefore we defined the function named Log (declaring the name, inputs and body of code of the fuction).

We can also just let main() declare the function and the compiler and compile. Will it run? questionable lol

i.e:
void Log(const char* message); You can also just not specify the name of the 
*/

int main()
{
    Log("Hello World!");
    std::cin.get();
}