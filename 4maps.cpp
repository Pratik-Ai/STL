#include<bits/stdc++.h>
using namespace std;


int main(){
    map<int,string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    map<int,string>:: iterator it;
    // for(it = m.begin(); it != m.end(); ++it){
    //     cout<<(*it).first << " "<< (*it).second << endl;
    // }
    for (auto pr : m){ // normal is copy and & is actual
        cout<<(pr).first << " "<< (pr).second << endl;
    }
}
// maps <int,string> here the int will be either constant or overide