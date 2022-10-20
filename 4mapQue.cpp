// Civen N strings Print Unique Strings in Their frequency 
//N <= 10^5
// |s| <=100

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        // sort(s.begin(), s.end());//for sorting the string
        // m[s] = m[s] + 1 ;
        m[s]++;
    }
    for(auto pr: m){
        cout<<pr.first << " " << pr.second<<endl;
    }
}