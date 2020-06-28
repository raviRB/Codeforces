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
	ll n,d,a,b;
	cin>>n>>d;
	pair<ll,ll> p[n];	
	f(n){
		cin>>a>>b;
		p[i]={a,b}; // a = money
	}
	sort(p,p+n);
	ll ans =p[0].second,temp=p[0].second,pre=0;
	for(int i=1;i<n;i++){
		while(i!=pre && p[i].first - p[pre].first >= d){
			temp-=p[pre].second;
			pre++;
		}
		temp+=p[i].second;
		ans = max(ans,temp);
	}
	cout<<ans<<"\n";
return 0;	
}