#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
// 2D DP
/*int dp[4001][3],n,a[3];;
void solve(int i, int index){
	for(int j=0;j<3;j++)
		if(dp[i-a[index]][j]!=-1)
				dp[i][index]=max(dp[i][index],dp[i-a[index]][j] + 1);

}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	cin>>n>>a[0]>>a[1]>>a[2];
	
	sort(a,a+3);
	memset(dp,-1,sizeof(dp));
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	for(int i=1;i<=n;i++){
		if(i>=a[0])
			solve(i,0);
		if(i>=a[1])
			solve(i,1);
		if(i>=a[2])
			solve(i,2);
	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<"\n";
return 0;	
}*/
//1D DP
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,a[3];
	cin>>n>>a[0]>>a[1]>>a[2];
	int dp[n+1];
	memset(dp,-1,sizeof(dp));
	sort(a,a+3);
	dp[0]=0;
	for(int i=1;i<=n;i++){
		if(i>=a[0] && dp[i-a[0]]!=-1)
			dp[i] = dp[i-a[0]] + 1;
		if(i>=a[1] && dp[i-a[1]]!=-1)
			dp[i] = max(dp[i-a[1]] + 1,dp[i]);
		if(i>=a[2] && dp[i-a[2]]!=-1)
			dp[i] = max(dp[i-a[2]] + 1,dp[i]);
	}
	cout<<dp[n]<<"\n";
return 0;	
}
 