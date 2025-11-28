/* there are two properties of the vectors:
1. size [vec_name.size()] : it tells the number of data entries in the vector
2. capacity [vec_name.capacity()] : it tell how many data entries it can actually stored.

when we push back once it creates a vector double the size of the original vector and as values are filled in
the vector let's say using push back itself, it stores the value until the new vector is filled and when there 
is another entry it push_back creates a new vector double the size of the previous one
*/

#include <iostream>
#include <vector> // std library for the vectors

int main()
{
    std::vector<int> vec {1,2,3,4,5};

    std::cout << vec.size() << '\n';
    std::cout << vec.capacity() << '\n';

    vec.push_back(6);
    std::cout << vec.size() << '\n';
    std::cout << vec.capacity() << '\n';

    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    std::cout << vec.size() << '\n';
    std::cout << vec.capacity() << '\n';    
   

    return 0;
}