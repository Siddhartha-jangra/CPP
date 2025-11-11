#include <iostream>

int main() 
{
    /*
    the best practice in this situation is to not change the user input and just put the operation 
    in such a way that the code is not very complex
    */
   
    int num1 {};
    std::cout << "enter the number: " << '\n';
    std::cin >> num1;

    std::cout << "the double of the number is " << num1*2 << '\n';
    std::cout << "the triple of the number is " << num1*3 << '\n';
   
    return 0;
}