#include<iostream>
#include<vector>
using namespace std;
int main()
{
int h,w,n;
cin>>h>>w>>n;
vector<int> v(n);
for(int i=0;i<n;i++) cin>>v[i];
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+v[i];
if(sum==w) sum=0;
if(sum>w)
{
cout<<"NO"<<endl;
return 0;
}
}
cout<<"YES"<<endl;
return 0;
}
