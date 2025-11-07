#include <iostream>
#include <cstddef> //for std::size_t 


int main()
{
    int x {44};
    std::cout << sizeof(int) << '\n'; //direactly but only shows the size of fundamental data types

    std::size_t y {sizeof(x)}; // gives the return value in size of
    std::cout << y << '\n';

    return 0;
}