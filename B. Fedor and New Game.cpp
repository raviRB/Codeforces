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
	int n,m,k;
	cin>>n>>m>>k;
	ll a[m];
	f(m)	cin>>a[i];
	ll Fedor,diff=0,ans=0;
	cin>>Fedor;
	
	f(m){
		diff=0;
		for(int j=0;j<n;j++)
			if((Fedor & (1<<j))^(a[i] & (1<<j)))
				diff++;
		if(diff<=k)
			ans++;
	}	
	cout<<ans<<"\n";
return 0;	
}