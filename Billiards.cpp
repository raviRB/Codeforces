#include <bits/stdc++.h>
#define mod 1000000009
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
	int t;
	cin>>t;
	ll dp[1000001]={0};
	dp[2]=1;
	dp[3]=1;
	for(int i=4;i<1000001;i++)
		dp[i] = (dp[i-2]+dp[i-3])%mod;
	while(t--){
		int n;
		cin>>n;
		cout<<dp[n]<<"\n";
	}	
return 0;	
}