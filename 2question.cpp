// convert even to # and odd to *

#include<bits/stdc++.h>
using namespace std;

vector<int> arrtovec(int a){
    vector<int> result;
    while(true){
    result.insert(result.begin(),a%10);
    a/=10;
    if(a==0)
        return result;

}
}

int main(){
    int n;
    cin>>n;
    vector <int> temp = arrtovec(n);
    for(auto &v : temp){
        if(v%2==0)
        {
            cout<<"#";
        }
        else{
            cout<<"*";
        }
    }
}