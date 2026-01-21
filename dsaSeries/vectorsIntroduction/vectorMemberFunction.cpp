/*these are the member functions:-
1. size : to tell the size (values stored int the vector)
2. push_back(n) : to add a data at the end of the vector
3. pop_back() : to delete the last data of the vector
3. front : to go to the front of the vector
4. back : to go to the back of the vector
5. at() : works the same way as the vec_name(i) as in vec.at(i)*/


#include <iostream>
#include <vector> // std library for the vectors

int main()
{
    std::vector<int> vec {1,2,3,4,5};
    //to check the size 
    std::cout << vec.size() << '\n';

    //for each loop
    for(int i : vec)
    {
        std::cout << i << '\n';
    }

    //to put value in the back
    vec.push_back(6);
    for(int i : vec)
    {
        std::cout << i << '\n';
    }

    //prints the valuse in the front
    std::cout << vec.front() << '\n';

    //print the value iof the end
    std::cout << vec.back() << '\n';

    //goes at the location mentioned.
    std::cout << vec.at(3) << '\n';


    

    return 0;
    
}