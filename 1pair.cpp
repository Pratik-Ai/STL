#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p;
    // p = make_pair(2, abc);
    p = {2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;


    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int> p_arr[3];
    p_arr[0] = {1,2};
    p_arr[1]= {2,3};
    p_arr[2] ={3,4};
    for(int i = 0; i<3; ++i){
        cout<<p_arr[i].first <<" "<< p_arr[i].second<<endl;
    }
    swap(p_arr[0],p_arr[2]);
    for(int i = 0; i<3; ++i){
        cout<<p_arr[i].first <<" "<< p_arr[i].second<<endl;
    }
    pair<int,string>c;
    cin >> c.first;
    cout<<c.first;
    return 0;
}