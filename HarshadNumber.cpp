#include<iostream>
using namespace std;
bool solve(int i)
{
int x=i;
int s=0;
while(i>9) 
{
s=s+i%10;
i=i/10;
}
s=s+i;
return x%s==0;
}
int main()
{
int n;
cin>>n;
while(!solve(n)) n++;
cout<<n<<endl;
return 0;
}