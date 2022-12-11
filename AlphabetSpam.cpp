#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
double lc=0.0;
double uc=0.0;
double wc=0.0;
double symc=0.0;
for(int i=0;i<s.size();i++)
{
if(s[i]>=65 && s[i]<=90) uc++;
else if(s[i]>=97 && s[i]<=122) lc++;
else if(s[i]=='_') wc++;
else symc++;
}
cout.setf(ios::fixed,ios::floatfield);
cout.precision(6);
double l=s.size()+0.0;
cout<<wc/l<<endl;
cout<<lc/l<<endl;
cout<<uc/l<<endl;
cout<<symc/l<<endl;
return 0;
}