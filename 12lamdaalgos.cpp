#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x)
{
    return x>0;
}

int main(){
    auto sum = [] (int x, int y){return x+y;};
    cout << sum(2,3)<<endl;
    vector<int> v = {2,4,5};
    cout << all_of(v.begin(),v.end(),[](int x){return x>0;}) <<endl;
    cout << all_of(v.begin(), v.end(), is_positive)<<endl;
    cout << any_of(v.begin(),v.end(),[](int x){return x>0;}) <<endl;
    cout << none_of(v.begin(),v.end(),[](int x){return x>0;}) <<endl;
    
}