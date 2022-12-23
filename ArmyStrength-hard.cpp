#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> v1(n),v2(m);
		for(int i=0;i<n;i++) cin>>v1[i];
		for(int i=0;i<m;i++) cin>>v2[i];
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int f=0;
		int i=0;
		int j=0;
		while((n>=1) && (m>=1))
		{
			if(v1[i]>=v2[j]) 
			{
				m--;
				j++;
			}
		       	else if(v1[i]<v2[j])
			{
				n--;
				i++;
			}
		}
		if(n==0) cout<<"MechaGodzilla"<<endl;
		else if(m==0) cout<<"Godzilla"<<endl;
		else cout<<"uncertain"<<endl;
	}
	return 0;
}
