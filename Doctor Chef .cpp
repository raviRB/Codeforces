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
	int t;
	cin>>t;
	while(t--){
		ll n,x,ans;
		cin>>n>>x;
		ll a[n];
		f(n)	cin>>a[i];
		sort(a,a+n);	
		ans=0;
		f(n){
			if(a[i]<x){
				ans++;
			}
			else if(x==a[i]){
				ans++;
				x*=2;
			}
			else{
				while(x<a[i]){
					ans++;
					x*=2;
				}
				x*=2;
				ans++;
			}
			//cout<<i<<" "<<ans<<" "<<x<<"\n";
		}
		cout<<ans<<"\n";
	}	
return 0;	
}