#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void increment(vector<int>& digit);

int main()
{
    vector<int> digit {7,9,9};
    increment(digit);
    for(int i :digit){
        cout << i;
    }
    return 0;
}

void increment(vector<int>& digit)
{
    auto p {digit.end()-1};
    int a {};
    for(int i {}; i < digit.size(); i++)
    {
        a = digit[i]*pow(10, i);
    }
    
    a++;

    for(int i {digit.size()-1}; i >=0 ; i++)
    {
        digit[i] = 
    }
}