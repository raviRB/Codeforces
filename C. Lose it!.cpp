#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int temp[6]={4,8,15,16,23,42};
int getindex(int num){
	f(6) if(temp[i]==num)	return i;
	return 0;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster 
	int n;
	cin>>n;
	int a[n],dp[6]={0},index;
	f(n)	cin>>a[i];	
	for(int i=n-1;i>=0;i--){
		index = getindex(a[i]);
		if(index==5)	dp[index]++;
		else if(dp[index+1]>dp[index])	dp[index]++;
	}
	int ans=INT_MAX;
	f(6)	ans = min(ans,dp[i]);
	cout<<n-ans*6<<"\n";
return 0;	
}