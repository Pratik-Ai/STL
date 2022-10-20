#include<bits/stdc++.h>
using namespace std;

int main(){
 vector<int> v = {2,3,4,5,6,7,8,9};
 for(int i = 0; i< v.size(); ++i){
    cout<<v[i]<<" ";
 }   
 cout<< endl;
 vector<int> :: iterator it ;
//  cout<< *(it)<<endl;
for(it = v.begin(); it!=v.end(); ++it)
    {
        cout<< *(it) << endl;
    }
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4},{4,5}};

    vector<pair<int,int>> :: iterator vt;
    for(vt = v_p.begin(); vt != v_p.end(); ++vt)
    {
        cout<< (*vt).first << " " << (*vt).second<< endl;
    }
    for(vt = v_p.begin(); vt != v_p.end(); ++vt)
    {
        cout<< vt->first << " " << vt->second<< endl;
    }

}