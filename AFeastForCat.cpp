#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int milk,c;
		cin>>milk>>c;
		if(milk<c)
		{
			cout<<"no"<<endl;
			continue;
		}
		long long int n=(c*(c-1))/2;
		vector<pair<long long int,long long int>> adj[n];
		while(n--)
		{
			long long int i,j,d;
			cin>>i>>j>>d;
			adj[i].push_back({j,d});
			adj[j].push_back({i,d});
		}
		priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int>>,greater<pair<long long int,long long int>>> pq;
		vector<int> vis(c,0);
		pq.push({0,0});
		long long int sum=0;
		int f=0;
		while(!pq.empty())
		{
			auto it=pq.top();
			pq.pop();
			long long int node=it.second;
			long long int wt=it.first;
			if(vis[node]==1) continue;
			vis[node]=1;
			sum+=wt;
			if(sum+c>milk) 
			{
				f=1;
				break;
			}
			for(auto it:adj[node])
			{
				long long int adjNode=it.first;
				long long int edW=it.second;
				if(!vis[adjNode]) pq.push({edW,adjNode});
			}
		}
		if(f==1)
		{
			cout<<"no"<<endl;
			continue;
		}
		long long int res=sum+c;
		if(res<=milk) cout<<"yes"<<endl;
		else cout<<"no"<<endl;

	}
	return 0;
}
