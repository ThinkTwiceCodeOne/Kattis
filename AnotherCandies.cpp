#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp=n;
        unsigned long long int sum=0;
        while(n--)
        {
            unsigned long long int num;
            cin>>num;
            sum=sum+num%temp;
        }
        if(sum%temp==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
