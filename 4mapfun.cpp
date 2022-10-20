#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &v){
    cout<<"size: "<<v.size()<< endl; // O(1)
    for(auto vm : v)
    {
        cout<<vm.first<<" "<< vm.second<<endl; //it will store 0 by default for empty variable
    }
    cout << endl;
}

int main(){
    map<int,string> m;
    m[1] = "abc";
    m[1] = "efg";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    // m.erase(5);
    // print(m);
    // map<int, string> :: iterator it;
    // it = m.find(3);
    // // auto it = m.find(3); // logn
    // if(it == m.end()){
    //     cout << "no value";
    // }
    // else{
    //     cout<<(*it).first << " " << (*it).second;
    // }
    
    
    auto it = m.find(7);
    if(it != m.end())
    {
        m.erase(it);
    } 
    print(m);
    //  m.clear(); it will clear all the elements
}