#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i = 0; i<n; ++i)
	{
		cout<<a[i] << " ";
	}
	cout<<endl;
	int *ptr = lower_bound(a,a+n, 6); //log(n)
	cout<<(*ptr)<<endl;
	int *p = lower_bound(a+4,a+n,5);
	cout<<*p<<endl;
}