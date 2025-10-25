#include <iostream>

using namespace std;

int dosomething(int x)
{
    cout << "l" ;
    cin >> x ;
    return x;
}

int main() 
{
    int val{};
    cout << dosomething(val);

    return 0;
}