#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
char c;
string s;
int ans=0;
map<char,int> m;
vector<char> v;
while(1)
{
cin>>n;
if(n==-1) break;
cin>>c>>s;
if(s == "right") 
{
ans=ans+n;
v.push_back(c);
}
m[c]++;
}
for(int i=0;i<v.size();i++)
{

ans=ans+(20*(m[v[i]]-1));
}
cout<<v.size()<<" "<<ans;
return 0;
}