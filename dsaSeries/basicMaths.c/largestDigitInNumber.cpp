#include <iostream>

int largestDigit(int n) {
    int max {INT_MIN};
    if(n == 0){
        return 0;
    }
    while(n > 0){
        int lastDigit {n%10};
        max = std::max(max, lastDigit);
        n = n/10;
    }
    return max;
}

int main(){
    std::cout << largestDigit(0);

    return 0;
}