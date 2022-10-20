#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(string value : s){
        cout << value << endl;
    }
    // for (auto it = s.begin(); it!=s.end(); ++it){
    //     cout <<(*it)<< endl;
    // }
}

int main(){
    multiset<string> s;
    s.insert("abc"); //log(n)
    s.insert("mpc");
    s.insert("vlc");
    s.insert("abc");
    auto it = s.find("abc");
    if(it != s.end())
    {
        s.erase(it);
    }
    // s.erase("abc"); // will delete all
    print(s);
}