#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	int i=n-1;
	int j=n-2;
	while(i!=0)
	{
		int temp=v[i]+v[j];
		//cout<<temp<<endl;
		if(temp<=k) break;
		i--;
		j--;
	}
	cout<<i+1<<endl;
	return 0;
}
