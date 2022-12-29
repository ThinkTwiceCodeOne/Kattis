#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t>>n;
	vector<int> v(t);
	for(int i=0;i<t;i++) cin>>v[i];
	sort(v.begin(),v.end(),greater<int>());
	int duration=0;
	int l=v[0];
	int i;
	for(i=1;i<t;i++)
	{
		duration+=n;
	}
	duration++;
	if(duration<=l) cout<<"YES";
	else cout<<"NO";
	return 0;
}
