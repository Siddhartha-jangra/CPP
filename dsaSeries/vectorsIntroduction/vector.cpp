/*the vectors are just like the normal array but with 
dynamic memory allocation.
they are a part of stl, */

#include <iostream>
#include <vector> // std library for the vectors

int main()
{
    std::vector<int> vec; // this initialization creates a vector of zero memory
    std::vector<int> vec2{1, 2, 3}; // basically creates an array 
    std::vector<int> vec3(3,0);//create an array of size 3 and stores 0 in each address.

    //the loop we run for the vector is called for each loop:-
    for(int i : vec2)
    {
        std::cout << i << std::endl; // the i this time doesn't store the index but the value in the index itself
    }

    return 0;
}
