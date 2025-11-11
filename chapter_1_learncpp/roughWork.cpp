#include <iostream>

int add(int x, int y); // forward declaration of add()

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

// note: No definition for function add

/*
output: 
B:/c++/roughWork.cpp:7:(.text+0x34): undefined reference to `add(int, int)'
collect2.exe: error: ld returned 1 exit status
*/