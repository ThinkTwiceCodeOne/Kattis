#include<iostream>
using namespace std;
int main()
{
int n,m,k;
cin>>n>>m;
if(m%n==0)
{
int p=m/n;
for(int i=0;i<n;i++)
{
for(int i=0;i<p;i++)
{
cout<<'*';
}
cout<<endl;
}
}
else
{
k=m%n;
for(int i=0;i<n;i++)
{
for(int j=0;j<m/n;j++)
{
cout<<'*';
}
if(k!=0) 
{
cout<<'*';
k--;
}
cout<<endl;
}
}
return 0;
}
