#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll dp[200][2],n,k,d;
ll solve(int cost , int used){
	if(!cost && used)	return 1;
	if(!cost)	return 0;
	ll ans =0;
	if(dp[cost][used]!=-1)	return dp[cost][used];
	for(int i=1;i<=k;i++)
		if(i<=cost)
			ans+=solve(cost-i,i>=d?1:used)%mod;
	dp[cost][used] = ans%mod;
	return dp[cost][used];
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	cin>>n>>k>>d;
	memset(dp,-1,sizeof(dp));
	ll ans = solve( n,0);
	cout<<ans%mod<<"\n";
return 0;	
}