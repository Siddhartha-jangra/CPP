#include <iostream>

constexpr int fun(){
    return 5;
}

int main(){

    constexpr int a {fun()};

    std::cout << a;

    

    return 0;
}