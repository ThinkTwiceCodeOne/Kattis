#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev=n;
    int next=n;
    while(prev!=0)
    {
        if(prev%100==99) break;
        prev=prev-1;
    }
    while(1)
    {
        if(next%100==99) break;
        next=next+1;
    }
    if(n-prev == next-n) cout<<next;
    else if(prev==0) cout<<next;
    else
    {
	if(n-prev>next-n) cout<<next;
	else cout<<prev;
    }
    return 0;
}