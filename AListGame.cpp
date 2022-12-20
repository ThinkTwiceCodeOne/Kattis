#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	int factor=2;
	while(factor*factor<=n)
	{
		if(n%factor==0) 
		{
			n=n/factor;
			count++;
		}
		else factor++;
	}
	cout<<count+1<<endl;
	return 0;
}
