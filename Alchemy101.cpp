#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%4==0)
		{
			cout<<n<<endl;
			for(int i=1;i<=n;i++)
			{
				if(i==n) cout<<i<<endl;
				else cout<<i<<" ";
			}
		}
		else if(n%4==1)
		{
			if(n==1)
			{
				cout<<1<<endl;
				cout<<1<<endl;
			}
			else
			{
				cout<<n-1<<endl;
				for(int i=1;i<=n-2;i++) cout<<i<<" ";
				cout<<n<<endl;
			}
		}
		else if(n%4==2)
		{
			cout<<n-1<<endl;
			for(int i=2;i<=n-1;i++) cout<<i<<" ";
			cout<<n<<endl;
		}
		else if(n%4==3)
		{
			cout<<n-1<<endl;
			for(int i=1;i<=n-1;i++)
			{
				if(i==n-1) cout<<i<<endl;
				else cout<<i<<" ";
			}
		}
	}
	return 0;
}
