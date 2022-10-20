#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    cout<<"size: "<<v.size()<< endl; // O(1)
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<endl;
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i<N; ++i){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            temp.push_back(x); 
            // v[i].push_back(x); 
        }
        v.push_back(temp);
    }
    for(int i=0; i<v.size(); ++i){
        printvec(v[i]);
    }
    cout<< v[0][1];
}