#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll w[100],v[100];

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	ll n,weight,totalval=0;
	cin>>n>>weight;
	f(n){
		cin>>w[i]>>v[i];
		totalval+=v[i];
	}
	ll ans=0,dp[totalval+1];
	f(totalval+1)	dp[i]=INT_MAX;
	// dp[i] = min weight to get value exactly i
	dp[0]=0;
	for(int i=0;i<n;i++)
		for(int j = totalval;j>=v[i];j--){
			dp[j] = min(dp[j],w[i]+dp[j-v[i]]);
			//cout<<dp[j]<<" "<<j<<"\n";
			if(dp[j]<=weight)
				ans = max(ans,(ll)j);
		}
	cout<<ans<<"\n";
return 0;	
}