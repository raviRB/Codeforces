#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll a[100],n,dp[61][10001];
ll solve(int index , ll gcd){
	ll ans1;
	if(index==n)	
		return gcd==1;
	if(dp[index][gcd]!=-1)	
		return dp[index][gcd];
	ans1 = solve(index+1,gcd);
	ans1 += solve(index+1,__gcd(gcd,(ll)a[index]));
	dp[index][gcd] = ans1;
	return ans1;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	 faster
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		memset(dp,-1,sizeof(dp));
		f(n)	cin>>a[i];
		ll ans = solve(0,0);
		cout<<ans<<"\n";
	}	
return 0;	
}

/*Bottom up DP 
#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll a[100],n,dp[61][10001];
ll solve(int index , ll gcd){
	ll ans1;
	if(index==-1)	
	    return gcd==1;
	if(dp[index][gcd]!=-1)
	    return dp[index][gcd];
	ans1 = solve(index-1,gcd);
	ans1 += solve(index-1,__gcd(gcd,a[index]));
	dp[index][gcd] = ans1;
	return ans1;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int t;
	cin>>t;
	while(t--){
	    memset(dp,-1,sizeof(dp));
		cin>>n;
		f(n)	cin>>a[i];
		ll ans = solve(n-1,0) ;
		cout<<ans<<"\n";
	}	
return 0;	
}
*/