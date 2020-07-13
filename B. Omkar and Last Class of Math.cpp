#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool isPrime(ll n){
	for(ll i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}
ll get(ll n){
	ll ans=0;
	for(ll i=2;i*i<=n;i++)
		if(n%i==0){
			ans = max(ans,max(i,n/i));
		}
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
	while(t--){
		ll n;
		cin>>n;
		if(n%2){
			if(isPrime(n))
				cout<<1<<" "<<n-1<<"\n";
			else{
				ll num =get(n);
				cout<<num<<" "<<n-num<<"\n";

			}
		}
		else{
			cout<<n/2<<" "<<n/2<<"\n";
		}
		/*f()
			cout<<i<<" "<<49-i<<" "<<((i)*(49-i))/__gcd((i),(49-i))<<"\n";*/
	}
return 0;	
}