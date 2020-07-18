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
	ll n,mx=1e18;
	cin>>n;
	ll a[n];
	f(n)	cin>>a[i];
	string s[n],r[n],temp;
	f(n){
		cin>>temp;
		s[i]=temp;
		reverse(temp.begin(),temp.end());
		r[i]=temp;
		//cout<<s[i]<<" "<<r[i]<<"\n";
	}
	ll dp[n][2];
	f(n){
		dp[i][0]=mx;
		dp[i][1]=mx;
	}
	dp[n-1][1]=a[n-1];
	dp[n-1][0]=0;
	for(int i=n-2;i>=0;i--){
		if(s[i]<=s[i+1])
			dp[i][0]=dp[i+1][0];
		if(s[i]<=r[i+1])
			dp[i][0]=min(dp[i][0],dp[i+1][1]);
		if(r[i]<=s[i+1])
			dp[i][1]=dp[i+1][0]+a[i];
		if(r[i]<=r[i+1])
			dp[i][1]=min(dp[i][1],dp[i+1][1]+a[i]);
		if(dp[i][1]==mx && dp[i][0]==mx){
			cout<<"-1\n";
			return 0;
		}
	}
	//f(n)	cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";
	cout<<min(dp[0][0],dp[0][1])<<"\n";
return 0;	
}