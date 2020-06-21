#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
// Recursive solution with memoization is not under the correct time limit
/*int n;
double prob[3000] , dp[3000][3000][2] ,ans=0;
double solve(int odd , int even ,int flag){ // 0-odd
	if(odd>even && n-odd <=n/2)		return 0;
	if(odd+even == n){
		if(flag)	return prob[n];
		return 1-prob[n];
	}
	if(dp[odd][even][flag])	{
		//cout<<odd<<" "<<even<<" "<<flag<<" "<<dp[odd][even][flag]<<"\n";
	return dp[odd][even][flag];
	}
	double temp;
	if(flag){
		temp = solve(odd+1,even,0) * prob[odd+even];
		temp+=solve(odd,even+1,1) * prob[odd+even];
	}
	else{
		temp = solve(odd+1,even,0) * (1-prob[odd+even]);
		temp+=solve(odd,even+1,1) * (1-prob[odd+even]);
	}
	dp[odd][even][flag] = temp;
	//cout<<odd<<" "<<even<<" "<<flag<<" "<<temp<<"\n";
	return temp;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	cin>>n;
	f(n)	cin>>prob[i+1];	
	ans = solve(1,0,0);
	ans += solve(0,1,1);
	printf("%.10lf",ans);
return 0;	
}*/

// Improved Solution
double dp[3001][3001]; 
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n;
	cin>>n;
	double prob[n];
	// dp[i][j] = probability of getting j heads with i coin tosses 
	f(n)	cin>>prob[i+1];	
	dp[0][0]=1; // probability of getting 0 heads with 0 tosses
	for(int i=1;i<=n;i++)
		for(int j=0;j<=n;j++)
			if(j==0)
				dp[i][j] = (1-prob[i])*dp[i-1][j];
			else
				dp[i][j] = prob[i]*dp[i-1][j-1] + (1-prob[i])*dp[i-1][j];
	double ans=0;
	for(int i=n/2+1;i<=n;i++)
		ans+=dp[n][i];
	printf("%.10lf",ans);
return 0;	
}