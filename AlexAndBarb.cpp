#include<iostream>
using namespace std;
int main()
{
int k,m,n;
cin>>k>>m>>n;
if(k%(m+n)<m) cout<<"Barb";
else cout<<"Alex";
return 0;
}
