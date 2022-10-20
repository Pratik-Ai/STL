#include<bits/stdc++.h>
using namespace std;

bool shoud_i_swap(pair<int,int> a , pair<int,int> b)
{
	if(a.first != b.first)
	{
		if(a.first > b.first) return false;
		return true;
	}
	else{
		if(a.second > b.second) return false;
		return true;
	}
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int,int>> a(n);
	for(int i = 0; i < n; ++i)
	{
		cin>>a[i].first >> a[i].second;
	}
	sort(a.begin() , a.end(), shoud_i_swap);

	for(int i = 0; i < n; ++i)
	{
		cout<<a[i].first<<" " << a[i].second << endl;
	}
}

// int main()
// {
// 	int i;
// 	cin >> i;
// 	cout<<i;
// }