#include <iostream>
#include <vector>


int main()
{
    std::cout << "enter the length of the vector: " << std::endl;
    int num;
    std::cin >> num;
    std::vector<int> vec(num, 0);

    for(int i : vec){
        std::cout << "enter the digit"<< '\n';
        std::cin >> vec[i];
        
    }
    /*for(int i : vec){   //  this will have a time complexity of log(n²)
        bool uniqueNumber{true};
        int k {vec[i]};
        for(int j : vec){
            if(i == j){continue;}
            if(k == vec[j]){break;};
            
        }

    }*/
   int k{0};
    for(int j : vec){
        k = k^j;
    }

    std::cout << k << std::endl;

    return 0;
}
