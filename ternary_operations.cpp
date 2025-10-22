#include <iostream>

int main()  
{ 
    /*  ternary operator works as follow:
            variable = (condition/expression)? (the return value if cond/exp is true.):(return value if false);
    */
    int num1 = 4;
    int num2 = 7;
    int min_value;

    min_value = (num2 > num1)? num1 : num2;
    
    std::cout << min_value << '\n';

    return 0;
}