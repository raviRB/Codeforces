#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,m,a,b;
	cin>>n>>m;
	std::vector<int> v[n+1];
	f(m){
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	std::vector<int> ans;
	int visited[n+1]={0},cur;
	priority_queue <int, vector<int>, greater<int>> q; 
	q.push(1);
	visited[1]++;
	while(!q.empty()){
		cur = q.top();
		q.pop();
		ans.pb(cur);
		for(int j : v[cur])
			if(!visited[j]){
				q.push(j);
				visited[j]++;
			}
	}
	for(int j : ans)	cout<<j<<" ";

return 0;	
}