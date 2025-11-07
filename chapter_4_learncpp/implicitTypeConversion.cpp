#include <iostream>

double getDoubleVal(double x)
{
    return x; //here the caller gives an int and the argument passed is int but it implicitly conversts it to double.
}



int main() 
{
    int a {getDoubleVal(44)}; // putting a fractional valur here will give out a warning.
    std::cout << a << '\n'; // it will print a double but it will not have a fraction part because .0 is skipped.

    
    return 0;
}