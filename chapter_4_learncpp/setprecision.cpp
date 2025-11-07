// std::setprecision(N), this helps to print out the desired (N)
//number of significant number in the floating data types.
// drawback is that:  if the N is larger then the minimus digits
// stored by the data type, the value printed out will be not equal.

#include <iostream>
#include <iomanip> // input output manipulation manipulating the output

int main() 
{
    std::cout << 5.823434342 << '\n';
    std::cout << std::setprecision(19);
    //by default std::cout prints out double type have to put 'f' to print float.
    std::cout << 5.55555555f << '\n'; //f means float.
    std::cout << 5.55555555 << '\n';



    return 0;

}

// output : 5.555555343627929688
 // 5.555555550000000231
