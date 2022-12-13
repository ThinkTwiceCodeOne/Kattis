#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    int t;
    cin>>t;
    vector<pair<int,int>> v;
    while(t--)
    {
        int L,U;
        cin>>L>>U;
        v.push_back({L,U});
    }
    sort(v.begin(),v.end(),comp);
    int H=v[0].second;
    int count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i].first>H)
        {
            H=v[i].second;
            count++;
        }
        else if(v[i].second<H) H=v[i].second;
    }
    cout<<count<<endl;
    return 0;
}