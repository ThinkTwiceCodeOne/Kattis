#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
bool cmp(pair<int,int> x,pair<int,int> y)
{
long double r1,r2;
x.second?r1=x.first*sqrt(2):r1=x.first*2;
y.second?r2=y.first*sqrt(2):r2=y.first*2;
return r1<r2;
}
int main()
{
int n;
cin>>n;
vector<pair<int,int> > v;
while(n--)
{
string s;
int size;
cin>>s>>size;
v.push_back(make_pair(size,s=="cube"));
}
sort(v.begin(),v.end(),cmp);
for(int i=1;i<v.size();i++)
{
if(!v[i-1].second && v[i].second && v[i-1].first*2>v[i].first) 
{
cout<<"impossible";
return 0;
}
}
for(int i=0;i<v.size();i++)
{
v[i].second?cout<<"cube ":cout<<"cylinder ";
cout<<v[i].first<<endl;
}
return 0;
}
