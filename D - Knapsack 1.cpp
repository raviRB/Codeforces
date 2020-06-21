#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll dp[100][100001],w[100],v[100];
ll calc(int itmNum,int weight){ // recursive code - good for learning dp
	ll t1=0,t2=0;
	if(itmNum<0 || !weight)	return 0;
	if(dp[itmNum][weight])	return dp[itmNum][weight];
	t1 = calc(itmNum-1,weight);
	if(w[itmNum]<=weight)
		t2 = calc(itmNum-1,weight-w[itmNum])+v[itmNum];
	dp[itmNum][weight]=max(t1,t2);
	return dp[itmNum][weight];
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,weight;
	cin>>n>>weight;
	f(n)	cin>>w[i]>>v[i];
	cout<<calc(n-1,weight);

return 0;	
}