#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i = 0; i<n; ++i)
	{
		cout<<a[i] << " ";
	}
	cout<<endl;
	vector<int> :: iterator it;
	it = lower_bound(a.begin(),a.end(), 6); //log(n)
	cout<<(*it)<<endl;
	auto p = lower_bound(a.begin()+4,a.end(),5);
	cout<<*p<<endl;
}