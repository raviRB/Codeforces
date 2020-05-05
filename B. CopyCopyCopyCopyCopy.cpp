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
	int t,ans;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		f(n)	cin>>a[i];
		sort(a,a+n);
		ans=1;
		f(n-1)	if(a[i]<a[i+1])	ans++;	
		cout<<ans<<"\n";
	}	
return 0;	
}