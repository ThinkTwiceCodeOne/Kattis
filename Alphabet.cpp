#include<bits/stdc++.h>
using namespace std;
int solve(string s,vector<char>& v,int n)
{
v.push_back(s[0]);
for(int i=1;i<n;i++)
{
auto it=lower_bound(v.begin(),v.end(),s[i]);
if(it==v.end()) v.push_back(s[i]);
else v[it-v.begin()]=s[i];
}
return v.size();
}
int main()
{
string s;
cin>>s;
int n=s.size();
vector<char> v;
cout<<26-solve(s,v,n);
return 0;
}