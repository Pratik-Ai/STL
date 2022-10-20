//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,multiset<string>> m;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        int marks;
        string name;
        cin >> name >> marks;
        m[marks].insert(name);
    }
    auto cur_it = --m.end();
    while(true)
    {
        auto &students = (*cur_it).second;
        int marks = (*cur_it).first;
        for(auto student : students)
        {
            cout << student << " " << marks << endl;
        }
        if(cur_it == m.begin()) break;
        cur_it--;
    }
}