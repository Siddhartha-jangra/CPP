#include <iostream>

int getValuesFromUser()
{
    std::cout << "enter the first number: "<<'\n';
    int a{};
    std::cin >> a;

    std::cout << "enter the second number: " << '\n';
    int b{};
    std:: cin >> b;
    
    return a ;
}

int main(){
    int a{getValuesFromUser()};
    int b{getValuesFromUser()};
    std::cout << a;
    return 0;
}