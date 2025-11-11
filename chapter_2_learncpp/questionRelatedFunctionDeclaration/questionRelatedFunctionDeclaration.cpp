/*
#include <iostream>
int add(int x, int y);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
Hide Solution

Doesn’t compile. The compiler will complain that it can’t find a matching add() function that takes 3 arguments. The forward declaration of add() only has two parameters.
b)

#include <iostream>
int add(int x, int y);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}
Hide Solution

Doesn’t compile. The compiler will complain that it can’t find a matching add() function that takes 3 arguments. The forward declaration of add() only has two parameters, and the definition of function add() that has 3 parameters hasn’t been seen yet.
c)

#include <iostream>
int add(int x, int y);

int main()
{
    std::cout << "3 + 4 = " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}
Hide Solution

Doesn’t link. The compiler will match the forward declaration of add to the function call to add() in main(). However, no add() function that takes two parameters was ever implemented (we only implemented one that took 3 parameters), so the linker will complain.
d)

#include <iostream>
int add(int x, int y, int z);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int z, int y, int x) // names don't match the declaration
{
    return x + y + z;
}
Hide Solution

Compiles and links. The types in the function call to add() matches the forward declaration, and the definition of add() also matches. The fact that the names don’t match the declaration doesn’t matter, as the names in a declaration are optional (and if provided, ignored by the compiler).
e)

#include <iostream>
int add(int, int, int); // no parameter names

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}
Show Solution

f)

#include <iostream>

int add(int x, int y);

int add(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}
Hide Solution

Compiles and links. The forward declaration of add() with two parameters is not used.
*/