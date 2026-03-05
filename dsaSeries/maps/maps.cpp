#include <iostream>
#include <vector>
#include <map>
using namespace std;
/*
begin, end
insert, erase
at, iterator
find    
*/
int main(){
    map<int , string > m;
    m[1] = "abc";
    m[3] = "ndd";
    m[2] = "jdd";

    //iterators
    map<int, string>::iterator i;//do not need it if we use auto
    auto b = m.find(3);
    for(auto i : m){
        cout << i.first  << " "  << i.second <<  endl;
    }
    cout << (*b).first << " " << (*b).second << endl;

}