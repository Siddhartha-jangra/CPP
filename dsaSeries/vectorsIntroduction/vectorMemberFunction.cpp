/*these are the member functions:-
1. size : to tell the size (values stored int the vector)
2. push_back(n) : to add a data at the end of the vector
3. pop_back() : to delete the last data of the vector
3. front : to go to the front of the vector
4. back : to go to the back of the vector
5. at() : works the same way as the vec_name(i) as in vec.at(i)
6. insert() : to insert a value at any index
7. erase() : to erase a valur at any index*/

#include <iostream>
#include <vector> // std library for the vectors
using namespace std;

int main()
{   
    vector<int> vec {1,2,3,4,5};
    //to check the size 
    cout << vec.size() << '\n';

    //for each loop
    for(int i : vec)
    {
        cout << i << '\n';
    }

    //to put value in the back
    vec.push_back(6);
    for(int i : vec)
    {
        cout << i << '\n';
    }

    //prints the valuse in the front
    cout << vec.front() << '\n';

    //print the value iof the end
    cout << vec.back() << '\n';

    //goes at the location mentioned.
    cout << vec.at(3) << '\n';

    //insert() : to put any valur at any position
    vec.insert(vec.begin() + 2, 200);
    cout << vec[2] << '\n';

    // to erase
    vec.erase(vec.begin() + 2);
    cout << vec[2] << '\n';

    

    return 0;
    
}