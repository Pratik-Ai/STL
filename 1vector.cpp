#include<bits/stdc++.h>
using namespace std;


void printvec(vector<int> v){
    cout<<"size: "<<v.size()<< endl; // O(1)
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout << endl;
}

int main(){
    // int a[10];
//     vector<int>v;
//     int n;
//     cin >> n;
//     for(int i= 0; i<n; ++i){
//         int x;
//         cin >> x;
//         printvec(v);
//         v.push_back(x);  
//     }
//     printvec(v);
vector<int> v(10,3); // output for v(5) is 0 0 0 0 0 and output for v(5,3) is 3 3 3 3 3  
v.push_back(7);
v.push_back(6);
printvec(v);
v.pop_back();
printvec(v);
vector<int> v2 = v; // O(n)
v2.push_back(8);
printvec(v);
printvec(v2);

}