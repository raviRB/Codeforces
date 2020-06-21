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
	int n;
	cin>>n;
	int a[n],b[n],c[n],dp[n][3]; // 0-a,1-b,2-c
	f(n)	cin>>a[i]>>b[i]>>c[i];
	dp[0][0] = a[0];
	dp[0][1] = b[0];
	dp[0][2] = c[0];
	for(int i=1;i<n;i++){
		dp[i][0] = a[i] + max(dp[i-1][1],dp[i-1][2]);
		dp[i][1] = b[i] + max(dp[i-1][2],dp[i-1][0]);
		dp[i][2] = c[i] + max(dp[i-1][1],dp[i-1][0]);
	}
	cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<"\n";
return 0;	
}