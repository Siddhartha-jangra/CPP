#include <iostream>

    bool isPalindrome(int n) {
        // first we reverse the number and then chenk if they are palindrome.
        int test {n};
        int rev {};
        while(n>0){

            int lastDigit {n%10};
            rev = lastDigit + 10*rev;
            n = n/10; 
        }

        std::cout << rev;
        if(test == rev){return 1;}
        else{return 0;}
        
    }

int main() 
{
    bool a {isPalindrome(343)};
    std::cout << a ;
    
    return 0;
}