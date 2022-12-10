#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++) cin>>v[i];
sort(v.rbegin(),v.rend());
long long int ans=0;
for(int i=0;i<v.size();i++)
{
if(i%3!=2) ans=ans+v[i];
}
cout<<ans;
return 0;
}