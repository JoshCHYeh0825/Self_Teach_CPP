/*

Variables are what allows the program to store and manipulate data i.e position of a sprite in a game.

Data as variables are stored in the stack or the heap, within the memory.

Primitive data types are the building blocks of data types in memory,
they have specific purposes but we can use it not for those purposes.

The only distinction type is their size.

int: Whole number data type, 4 Bytes large (8b per Byte, 32b in total, compiler dependent), ranges from -(2^31) <--> (2^31 - 1).
unsigned int: int data type but can only exist as an absolute/positive whole number, range from 0 <--> 2^32.
char: Characters, 1B of data, can be assigned as character or number.
short: 2B of data
long: 4B of data (Compiler dependent)
long long: 8B of data

You can assign any variable certain values, it is what you output via cout that would determine how it is outputted
i.e) cout char a (a = 65) would give the character a instead of 65. But if you change it to int or any numerical data type it will output 65.

float: Decimal value with 4B of data

To assign a float value:
float var_name = XXF - Append the number with a capital F, otherwise it will recognize it as a double.

doube: Same as float but 8B large. 

bool: Boolean, True or False, 1 or 0, 1B Large

sizeof() checks the size of the variable/data type, outputs the size in Bytes.

Pointers (*, data_type*): 
References (&, data_typre&):

*/