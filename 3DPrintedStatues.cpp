#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
        int cnt=0;
        for(int i=1;i<n;i=i*2)
        {
            cnt++;
        }
        cout<<cnt+1;
    return 0;
}