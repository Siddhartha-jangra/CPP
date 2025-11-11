/*these code block of code shows us when to not use a parameter.
  here it can be dierictly done by writing:
  cout << dosomething;
  where a variable in defined in the function and not as a parameter */

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