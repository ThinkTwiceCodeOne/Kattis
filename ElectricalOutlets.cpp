#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
int m;
cin>>m;
int sum=0;
for(int i=0;i<m;i++)
{
int num;
cin>>num;
sum=sum+num;
}
cout<<sum+1-m<<endl;
}
return 0;
}