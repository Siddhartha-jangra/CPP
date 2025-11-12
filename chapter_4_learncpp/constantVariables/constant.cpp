#include <iostream>
 // globally declared const the value won't be changed in the whole file.
const double gravity {9.8};
// define is not a good practice to create constants because they do not follow the normal c++ conventions 
# define MY_NAME "siddhartha"; 

void Foo(const int a){
     a = 5;
    std::cout << a;
}

const int Goo(int a )
{
    return 6;
}

int main()
{
    Foo(6);
    std::cout << Goo(9);

    return 0;

}