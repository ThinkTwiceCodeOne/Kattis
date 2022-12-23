#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,n;
	cin>>a>>n;
	double r=n/(2*M_PI);
	double area=M_PI*r*r;
	
	if(a<=area) cout<<"Diablo is happy!"<<endl;
	else cout<<"Need more materials!"<<endl;
	return 0;
}
