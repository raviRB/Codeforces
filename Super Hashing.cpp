#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix;
int dp[53][53][100001],l,s; 
int solve(int start, int length, int cost){ // bottom up dp

	if(cost==0 && length==0)
		return 1;
	if(cost<=0 || length<=0)
		return 0;
	if(dp[start][length][cost]!=-1)	return dp[start][length][cost];
	int ans=0;
	//ans+=solve(start-1,length,cost);
	for(int i=start-1;i>0;i--){
		ans+=solve(i,length-1,cost-i);
		//ans+=solve(i,length,cost);
	}
	dp[start][length][cost] = ans;
	return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int t;
	cin>>t;
	memset(dp,-1,sizeof(dp));
	while(t--){
		cin>>l>>s;
		cout<<solve(52,l,s)<<"\n";
	}	
return 0;	
}

