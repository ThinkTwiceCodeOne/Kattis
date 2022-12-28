#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,a,b,c,d,n;
	cin>>p>>a>>b>>c>>d>>n;
	vector<double> v;
	for(int i=1;i<=n;i++)
	{
		double ans=p*(sin(a*i+b)+cos(c*i+d)+2);
		v.push_back(ans);
	}
	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(6);
	double maxi=v[0];
	double res=0;
	for(int i=1;i<v.size();i++)
	{
		double cost=maxi-v[i];
		res=max(res,cost);
		maxi=max(maxi,v[i]);
	}
	cout<<res<<endl;
	return 0;
}
