#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll solve(ll a, ll b){
	ll ans=0,temp=0;
	while(b>a){
		if(b%2==0){
			b/=2;
			if(!temp)
				temp=2;
			else
				temp*=2;
		}
		else
			break;
	}
	//cout<<b<<" "<<a<<" "<<temp<<"\n";
	if(b!=a)
		return -1;
	while(temp>=8){
		temp/=8;
		ans++;
	}
	while(temp>=4){
		temp/=4;
		ans++;
	}
	while(temp>=2){
		temp/=2;
		ans++;
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
		ll a,b;
		cin>>a>>b;
		ll ans = solve(min(a,b),max(a,b));
		cout<<ans<<"\n";
	}		
return 0;	
}