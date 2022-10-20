#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &v){
    cout<<"size: "<<v.size()<< endl; // O(1)
    for(auto vm : v)
    {
        cout<<vm.first<<" "<< vm.second<<endl; //it will store 0 by default for empty variable
    }
    cout << endl;
}

int main(){
    unordered_map<int,string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    print(m);
}
// can not insert complex pairs of combination