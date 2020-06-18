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
		ll a,b,n;
		cin>>a>>b>>n;
		ll ans=0;
		while(a<=n && b<=n){
			if(a>b)
				b+=a;
			else
				a+=b;
			ans++;
		}
		cout<<ans<<"\n";
	}	
return 0;	
}