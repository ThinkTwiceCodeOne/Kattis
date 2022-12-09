#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(3);
    int a,b,c;
    cin>>a>>b>>c;
    v[0]=a;
    v[1]=b;
    v[2]=c;
    string s;
    cin>>s;
    sort(v.begin(),v.end());
    for(int i=0;i<s.size();i++)
    {
        cout<<v[s[i]-65]<<" ";
    }
    return 0;
}