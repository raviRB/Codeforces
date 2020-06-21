#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
vector<int>	adj[100001];
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,m,a,b,ecount[100001]={0},node;
	cin>>n>>m;
	f(m){
		cin>>a>>b;
		adj[a].pb(b);
		ecount[b]++;
	}
	int distance[100001]={0};
	int start,ans=0;
	queue<int>	q;
	for(int i=1;i<=n;i++)
		if(ecount[i]==0)
			q.push(i);
	while(!q.empty()){
		node = q.front();
		q.pop();
		for(int b : adj[node]){
			ecount[b]--;
			distance[b]=max(distance[b],distance[node]+1);
			ans = max(ans,distance[b]);
			if(!ecount[b])
				q.push(b);
		}
	}
	cout<<ans<<"\n";
return 0;	
}