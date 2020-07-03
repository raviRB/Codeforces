#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
std::vector<int> edge[100001];
int ans =0,flag=0,visited[100001];
int dfs(int node){
	visited[node]++;
	int temp=1;
	for(int i : edge[node])
		if(!visited[i])
			temp+=dfs(i);
	if(temp%2)
		return temp;
	//cout<<temp<<" "<<node<<"\n";
	ans++;
	return 0;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,u,v;
	cin>>n;
	f(n){
		cin>>u>>v;
		edge[u].pb(v);
		edge[v].pb(u);
	}
	if(n%2){
		cout<<"-1\n";
		return 0;
	}
	dfs(1);
	cout<<ans-1<<"\n";
return 0;	
}