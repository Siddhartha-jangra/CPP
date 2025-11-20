/* void is a data type which is only declared and not defined, hence not initialized
   it can be used as parameter of a function but it is not the correct way as it can 
    prodice some unintended errors*/




#include <iostream>

int add(void) // here it mean the 
{
    std::cout << "klasdjfh";
    return 0;
}

int main() 
{
    add();
    return 0;
    
}