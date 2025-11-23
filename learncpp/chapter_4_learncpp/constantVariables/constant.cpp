#include <iostream>
 /* globally declared const the value won't be changed in the whole file.this makes them compile time constant and the better wau to declare them is through constexpr.*/
const double gravity {9.8};
// define is not a good practice to create constants because they do not follow the normal c++ conventions 
# define MY_NAME "siddhartha"; 

void Foo(const int a){
    // a = 5;// will show error
    std::cout << a;
}

const int Goo(int a )
{
    return 6;
}

int main()
{
    Foo(6);
    int y {Goo(9)};
    std::cout << y;

    return 0;

}