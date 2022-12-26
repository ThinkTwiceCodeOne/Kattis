#include<iostream>
using namespace std;
int main()
{
long long int num;
while(cin>>num)
{
long long int res=1;
int counter=2;
while(res<num)
{
if(counter==2) counter=9;
else counter=2;
res*=counter;
}
if(counter==2) cout<<"Ollie wins."<<endl;
else cout<<"Stan wins."<<endl;
}
return 0;
}
