int main(){
    map<int , string > m;
    m[1] = "abc";
    m[3] = "ndd";
    m[2] = "jdd";
    map<int, string>::iterator i;
    for(auto &i : m){
        cout << m->first << " " << m->second << endl;
    }