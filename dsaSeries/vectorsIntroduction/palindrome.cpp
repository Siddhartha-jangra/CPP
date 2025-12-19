
#include <iostream>
#include <cmath>


bool palindrome(int n){
    bool ans {false};
    int count {};
    while(n > 0){n /= 10; count++;}
    count--;
    while(n > 0){
    if(n%10 == n/pow(10, count)){
        ans =  true;
        count--;
        n /= 10;}
    else{return ans;}
    }
    return ans;
}



int main()
{
    int n {}; 
    std::cin >> n;
    std::cout << palindrome(n);

    return 0;
    
}