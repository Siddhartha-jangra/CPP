#include <iostream>
#include <cmath>
bool perfect(int n){
    int sum {};
    for(int i {1}; i < n/2 +1; i++){
        if(n%i == 0){
            sum += i;
            std::cout << i;        }
        else{continue;}
    }
    if(sum == n){
        return true;
    }
    return false;
}
int main()
{
    std::cout << perfect(6);
    return 0;
}

