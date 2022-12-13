#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    long long int result = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            result += i;
            if(i!=n/i)
                result += n/i;
        }
    }
    return result;
}
int main()
{
int n;
while(cin>>n)
{
long long int sum=solve(n);
if(sum==n) cout<<n<<" perfect"<<endl;
else if(abs(n-sum)<=2) cout<<n<<" almost perfect"<<endl;
else cout<<n<<" not perfect"<<endl;
}
return 0;
}