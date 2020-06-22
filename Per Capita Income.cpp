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
	 faster
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		std::vector<int> edge[n+1];
		double a[n+1],b[n+1];
		int x,y;
		double income=0;
		f(n)	cin>>a[i+1];
		f(n){
			cin>>b[i+1];
			income= max(a[i+1]/b[i+1] , income);
		}
		f(m){
			cin>>x>>y;
			edge[x].pb(y);
			edge[y].pb(x);
		}
		// input over
		int visited[n+1]={0},sameIncome[n+1]={0},index=0,current;
		std::vector<int> ans[n+1];
		f(n) if(a[i+1]/b[i+1] == income)	sameIncome[i+1]++;
		for(int i=1;i<=n;i++){
			if(sameIncome[i] && !visited[i]){
				index++;
				ans[index].pb(i);
				queue<int>	q;
				q.push(i);
				visited[i]++;
				while(!q.empty()){
					current = q.front();
					q.pop();
					for(int j : edge[current])
						if(sameIncome[j] && !visited[j]){
							ans[index].pb(j);
							visited[j]++;
							q.push(j);
						}
				}
			}
		}

		// answer print
		index=0,current=0;
		f(n)	if(ans[i+1].size()>current){
			current = ans[i+1].size();
			index = i+1;
		}
		cout<<ans[index].size()<<"\n";
		for(int i : ans[index])
			cout<<i<<" ";
		cout<<"\n";
	}	
return 0;	
}