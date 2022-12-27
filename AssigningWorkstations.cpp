#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b) 
{
	return a.second<b.second;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>> v;
	while(n--)
	{
		int a,s;
		cin>>a>>s;
		pair<int,int> p;
		p.first=a;
		p.second=a+s;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	int count=0;
	multiset<int> ms;
	for(auto i:v)
	{
		auto it=ms.lower_bound(i.first-m);
		if(it!=ms.end() && *it<=i.first)
		{
			ms.erase(it);
			count++;
		}
		ms.insert(i.second);
	}
	cout<<count<<endl;
	return 0;
}
