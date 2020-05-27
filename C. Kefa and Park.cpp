#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int n,m,countcat[200001],ans=0,visited[200001]={0};
std::vector<int> v[200001];
void dfs(int node , int num){
	//cout<<node<<" "<<num<<" "<<ans<<"\n";
	visited[node]++;
	if(num>m)
		return;
	else{
		int flag=0;
		for(int i=0;i<v[node].size();i++)
			if(!visited[v[node][i]]){
				flag=1;
				if(countcat[v[node][i]])
					dfs(v[node][i],num+1);
				else
					dfs(v[node][i],0);
			}
		if(!flag && num<=m)
			ans++;
	}
}
int main(){                             // DFS 1500
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	 faster	 
	 cin>>n>>m;	 
	 f(n)	cin>>countcat[i+1];
	 int x,y;
	 f(n-1){
	 	cin>>x>>y;
	 	v[x].pb(y);
	 	v[y].pb(x);
	 }
	 dfs(1,countcat[1]);
	 cout<<ans<<"\n";
return 0;	
}