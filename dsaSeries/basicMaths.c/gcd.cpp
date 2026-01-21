#include <iostream>
#include <cmath>
using namespace std;

int gcd(int x, int y){
    int large = (x>y)?x:y;
    int small = (x>y)?y:x;
    int i{1};
    int div;
    while(i<=small){
        if(small %i == 0 && large%i == 0){
            div = i;
        }
        i++;
    }
    return div;
}

int main(){
    int a = gcd(8, 9);
    cout << a;

    return 0;
}