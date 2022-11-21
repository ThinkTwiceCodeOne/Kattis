#include<iostream>
using namespace std;
int main()
{
string s;
while(cin>>s)
{
if(s=="") break;
int n=s.size();
int count=1;
string res="";
for(int i=1;i<n;i++)
{
if(s[i]==s[i-1]) count++;
else
{
res=res+to_string(count)+s[i-1];
count=1;
}
}
res=res+to_string(count)+s[n-1];
cout<<res<<endl;
}
return 0;
}