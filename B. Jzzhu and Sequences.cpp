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
	ll x,y,z,n,q;
	cin>>x>>y>>n;
	n--;
	z = y-x;
	q = n/3;
	n = n%3;
	ll ans =z;
	if(n==0)
		ans = x;
	if(n==1)
		ans = y;
	if(q%2==1)
		ans=-ans;
	ans%=mod;
	if(ans<0)
		ans+=mod;
	
	cout<<(ans)%mod<<"\n";
return 0;	
}