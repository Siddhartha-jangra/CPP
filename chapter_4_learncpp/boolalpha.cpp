#include <iostream>

// bool only prints out 1 and 0, to print out true and false, 
// std::cin >> boolalpha;
// std::cout << your_variable;
// std::cout << boolalpha 

int main()
{
    std::cout << "enter true of false: \n";
    bool a {}; //default initialisation in false

   
    std::cin >> a;
     std::cin >> std::boolalpha; // on
    std::cout << a  << '\n';
    std::cout << std::boolalpha; // off

    std::cout << a << '\n';


    return 0;
}