#include<bits/stdc++.h>
using namespace std;


// void printvec(vector<pair<int,int>> v){
//     cout<<"size: "<<v.size()<< endl; // O(1)
//     for(int i=0; i<v.size(); ++i)
//     {
//         cout<<v[i].first<<" "<< v[i].second<<endl;
//     }
//     cout << endl;
// }


void printvec(vector<int> v){
    cout<<"size: "<<v.size()<< endl; // O(1)
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<endl;
    }
    cout << endl;
}

int main(){
    // vector<pair<int,int> > v; 
    // // = {{1,2}, {2,3}, {3,4}};
    // printvec(v);
    // int n;
    // cin >> n;
    // for(int i = 0; i<n; ++i){
    //     int x, y;
    //     cin>> x>> y;
    //     v.push_back({x,y});

        
    //     // v.push_back(make_pair(x,y)); both are same

    // }
    // printvec(v);


    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i<N; ++i){
        int n;
        cin>>n;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x); 
        }
    }
    for(int i=0; i<N; ++i){
        printvec(v[i]);
    }
}