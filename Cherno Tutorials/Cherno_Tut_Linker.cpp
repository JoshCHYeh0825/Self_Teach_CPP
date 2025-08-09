/*

Linking:
Find where each symbol and function is
and link them together from their separatae object files.

Files can be compiled but if main() does not exist it cannot be linked into an
executable .exe file. i.e) "Entry point undefined error"

If a function is undefined within main() i.e) naming error, it would generate a linking error
as the linker would have trouble linking the correct function to th eportion of the program/code.
(Or alternatively never call the function that is defined multiple times).

putting static in front of a function declaration/definition ensure its only available
locally to that text file and not universally for all of the project

Incorrect function definitions i.e wrong return types would cause linking errors too
(Linker tries to find a function that returns by data types).

Duplicate functions aka same return type and named functions would cause compiler errors.
If the functions are in separate files it would still compile but not link.
Solutions:
- We can fix this problem through static.
- We can also use "inline": Take the function body and replace the function call with it.
- Move the function into another translation unit.

*/