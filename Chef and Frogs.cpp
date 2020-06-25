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
	 faster
	int n,k,p,x,y,i;
	cin>>n>>k>>p;
	int a[n+1],temp[n+1],dp[n+1];
	f(n){
		cin>>a[i+1];
		temp[i+1]=a[i+1];
	}
	sort(temp+1,temp+n+1);
	dp[n]=temp[n];
	for(i=n-1;i>0;i--)
		if(temp[i+1]-temp[i]<=k)
			dp[i]=dp[i+1];
		else
			dp[i]=temp[i];
	unordered_map<int,int> m;
	f(n)	m[temp[i+1]] = dp[i+1];
	while(p--){
		cin>>x>>y;
		// solve
		int mn,mx;
		mn = min(a[x],a[y]);
		mx = max(a[x],a[y]);
		if(m[mn]>=mx)	cout<<"Yes\n";
		else	cout<<"No\n";
	}	
return 0;	
}