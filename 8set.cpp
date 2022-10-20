#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s){
        cout << value << endl;
    }
    // for (auto it = s.begin(); it!=s.end(); ++it){
    //     cout <<(*it)<< endl;
    // }
}

int main(){
    set<string> s;
    s.insert("abc"); //log(n)
    s.insert("mpc");
    s.insert("vlc");
    s.insert("bca");

    // auto it = s.find("pmc"); // will through error if the term not found
    // cout<< *it << endl;
    // auto it = s.find("abc");
    // s.erase(it);
    s.erase("bcd");
    print(s);
    
}