/*

Class vs Struct 

There are basically no difference. Just one regarding visibility.

Class members are ;rivate on default unless declared public otherwise.
Which is why when we declare a class it goes like:

class Class_Name
{
public:
    members
}

Struct's access are defaulted to public, different to classes.

When do we use struct vs class?

Struct: Used mainly just for Plain Old Data (POD).
e.g)
A struct called Vec2 which is a representation of 2 floats.
THere is a method but all it does is just manipulalte the variables.

struct Vec2
{
    float x, y;

    void Add(const Vec2& other)
    {
        x += other.x;
        y += other.y;
    }
}

You would preferrably use a class for more complex reasons.

You should not use inheritance with structs. If you have hierarchy you should use class.
Use struct for structures of data, that is literally why it is called struct. 
*/