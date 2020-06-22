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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1],dp[n+1];
		ll ans=1;
		dp[1]=1;
		f(n)	cin>>a[i+1];
		for(int i=2;i<=n;i++){
			if(a[i]>=a[i-1])
				dp[i]=dp[i-1];
			else
				dp[i]=i;
			ans+=(i-dp[i]+1);
		}
		cout<<ans<<"\n";
	}	
return 0;	
}