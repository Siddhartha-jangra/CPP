#include <iostream>
#include <vector>

int main(){
    std::vector<int> a {1,2,3};

    //to create a pointer to the start of the vector.
    std::vector<int>::iterator beginitr {a.begin()};
    //to create a pointer to the start of the vector.
    std::vector<int>::iterator enditr  {a.end()};

    for(std::vector<int>::iterator i = beginitr; i<enditr;  beginitr++ ){
        std::cout << *i << " " << '\n';
    }

    //we can also use auto instead of the bulky lines
    auto  beginitr2 {a.begin()};
    auto  enditr2 {a.end()};
    for(auto i = beginitr; i<enditr;  beginitr++ ){
        std::cout << *i << " " << '\n';
    }

    //then there is the for each loop
    for(int i : a){
        std::cout << i << " " << '\n';

    }

    return 0;

}