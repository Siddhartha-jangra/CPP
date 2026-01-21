#include <iostream>
#include <cmath>
using namespace std;

int lcm(int x,int y){
    int large = max(x,y);
    int small = min(x,y);
    int div;
    for(int i {1};i< small;i++){
        if(small%i == 0 &&large%i == 0){
            div = i;
        }
    }
    return div*(small/div)*(large/div);
}
int main(){
    cout << lcm(4,5);

    return 0;
}

