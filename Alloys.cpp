#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n;
	cin>>n;
	n=min(n,1.0f);
	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(6);
	float a=n/2.0;
	float b=n/2.0;
	cout<<a*b<<endl;
	return 0;
}
