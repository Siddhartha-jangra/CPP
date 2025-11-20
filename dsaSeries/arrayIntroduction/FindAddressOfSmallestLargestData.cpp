/*we need to find the address of  element which is equal to let's say
        t = 6*/

#include <iostream>

int main()
{
    int k{6};// for comparison
    int array[5];// declaring array


    //to put user input values in the array
    for(int i{}; i < 5; i++){

        std::cin >> array[i];

    }

    bool found{0};
    //to linear search the array
    for(int i{0}; i < 5; i++){

        if( k == array[i]){
            
            std::cout << i;
            found = 1;
            break;
        }


    }
        if(!found){
            std::cout << -1;
        }

}