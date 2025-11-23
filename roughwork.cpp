#include <iostream>

int main()
{
    int num1{3};
    int num2{9};
    int temp{num1};
    num1 = num2;
    num2 = temp;

    std::cout << num1 << '\n' << num2;

    return 0;


}