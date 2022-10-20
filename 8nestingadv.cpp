#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<int,int>,int> m ;
    pair<int,int> p1,p2;
    p1 = {1,2};
    p2 = {2,3};
    cout<<(p1 < p2); // it will print 1
    map<pair<string,string>,vector<int>> s;
    set<int> s1 = {1,2,3};
    set<int> s2 = {2,3};
    cout << (s1 < s2); //it will print 1
    int  n;
    cin>>n;
    for(int i = 0; i<n; ++i)
    {
        string fn, ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j = 0; j < ct; ++j)
        {
            int x;
            cin>>x;
            s[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : s){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<< full_name.second << endl;
        cout << list.size() << endl;
    }
}