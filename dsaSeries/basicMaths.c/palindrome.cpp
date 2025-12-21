#include <iostream>
#include <vector>
#include <cmath>

/*first approach:2147483647
1. store each digit of the problen in an array and them check both ends of the array to 
see if it is palindrome.
this will work for the overflow.

*/
    // bool isPalindrome(int n) {
    //     // first we reverse the number and then chenk if they are palindrome.
    //     int test {n};
    //     int rev {};
    //     while(n>0){

    //         int lastDigit {n%10};
    //         rev = lastDigit + 10*rev;
    //         n = n/10; 
    //     }
    //     std::cout << rev<<'\n';
    //     if(test == rev){return 1;}
    //       else{return 0;}
        
    // }

// bool isPalindrome(int x){
//     std::vector<int> digit;
//     int count{};
//     x = std::abs(x);
//     int length = (x == 0) ? 1 : std::floor(std::log10(std::abs(x))) + 1;
//     for(int i {};i<count;i++){
//         digit.push_back(x%10);
//         x /=10;
//     }
//     for(int i {}; i<count; i++){
//         if(digit[i] == digit[count - 1 - i]){
//             return true;
//         }
//     }
//     return false;
// }
bool isPalindrome(int x){
    long long rx {};//solves the overflow problem
    int test {x};
    if(x < 0){
        return false;
    }
    while(test){
        rx = rx*10 + test%10;// if we don't need then don't use variables.
        test /=10;

    }
    return (rx == x)?true :false;
}

int main() 
{
    bool a {isPalindrome(91)};
    std::cout << a ;
    
    return 0;
}