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
	int n,k;
	cin>>n>>k;
	int a[n],dp[n]={0};
	f(n)	cin>>a[i];
	dp[1]=abs(a[1]-a[0]);
	for(int i=2;i<n;i++){
		dp[i]=INT_MAX;
		for(int j=i-1;j>=max(0,i-k);j--)
			dp[i] = min(abs(a[i]-a[j])+dp[j],dp[i]);
	}
	cout<<dp[n-1]<<"\n";	
return 0;	
}