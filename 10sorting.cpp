#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    // for(int i=0; i<n; ++i)
    // {
    //     cout<< i <<" ";
    // }
    // for(int i=0; i<n; i++)
    // {
    //     cout<< i <<" ";
    // }
    for(auto &i : a)
    {
        cin >> i;
    }
    for(auto &i : a)
    {
        cout<< i << endl;
    }
    sort(a,a+n);
    for(auto &i : a)
    {
        cout << i << " ";
    }
    cout << " " << endl;
    sort(a,a+3);
    
    for(auto &i : a)
    {
        cout<< i;
    }
    //sort(start address, end address)
    // return 0;
}