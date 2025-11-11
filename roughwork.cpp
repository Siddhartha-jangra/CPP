#include <iostream>

int printNumber()
{
    std::cout << "enter the number: " << '\n' ;
    int a;
    std::cin >> a;
    return a;
}

int main()
{
    std::cout << printNumber();
    return 0;
}