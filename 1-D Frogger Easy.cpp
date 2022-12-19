#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,m;
    cin>>n>>s>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=0;
    if(v[s-1]==m) 
    {
        cout<<"magic"<<endl;
        cout<<0<<endl;
        return 0;
    }
    vector<int> vis(n,0);
    s=s-1;
    while(1)
    {
        if(s>=n) 
        {
            cout<<"right"<<endl;
            cout<<count<<endl;
            break;
        }
        if(s<0) 
        {
            cout<<"left"<<endl;
            cout<<count<<endl;
            break;
        }
	if(v[s]==m) 
	{
		cout<<"magic"<<endl;
		cout<<count<<endl;
		break;
	}
        if(vis[s]==1) 
        {
            cout<<"cycle"<<endl;
            cout<<count<<endl;
            break;
        }
        vis[s]=1;
        int jump=v[s];
        if(jump>0) 
        {
            s=s+jump;
            count++;
        }
        else if(jump<0)
        {
            s=s-abs(jump);
            count++;
        }
    }
    return 0;
}
