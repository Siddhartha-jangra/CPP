#include <iostream>
#include <cmath>

bool isArmstrong(int n){
    int count {};
    int test {n}, lastcheck {n};
    while(n > 0){
        n /= 10;
        count++;
    }
    int armstrong {};
    while(test > 0){
        int lastdigit {test%10};
        armstrong += pow(lastdigit, count);
        test /= 10;
    }
    if(armstrong == lastcheck){
        return true;
    }
    return false;

}

int main(){
    std::cout << isArmstrong(153);
    return 0;
}