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
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    print(m);
    // // for(it = m.begin(); it != m.end(); ++it){
    // //     cout<<(*it).first << " "<< (*it).second << endl;
    // // }
    // for (auto pr : m){ // normal is copy and & is actual
    //     cout<<(pr).first << " "<< (pr).second << endl;
    // }

}