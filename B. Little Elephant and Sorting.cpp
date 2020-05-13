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
	ll a[n],temp,j;
	ll ans=0,cmax=0;
	f(n)	cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i+1]>=a[i])
			continue;
		ans+=(a[i]-a[i+1]);
	}
	cout<<ans<<"\n";	
return 0;	
}