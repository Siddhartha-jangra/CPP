#include <iostream>

int main()
{   
    /*collection of the same variable wil only one identifier and are stored 
    in the consecutive memory blocks with memory addresses from 0 to n-1.*/ 
    int array[5] ;

    // to put the user input data into the array.
    for(int i{0}; i < 5; i++){
        std::cin >> array[i];
    }

    //to print the array.
    for(int i{0}; i < 5; i++){
        std::cout << array[i] << '\n';
    }

    return 0;
}