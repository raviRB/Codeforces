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
		int n;
		cin>>n;
		ll a[n];
		f(n)	cin>>a[i];
		ll odd=0,even=0,ans;
		f(n)	if(i%2)	odd+=a[i];
		else	even+=a[i];
		ans = even;
		std::vector<ll> v,v1;
		for(int i=1;i<n;i+=2)
			v.pb(a[i]-a[i-1]);
		for(int i=2;i<n;i+=2)
			v1.pb(a[i-1]-a[i]);
		ll temp=0;
		f(v.size()){
			temp+=v[i];
			temp = max(temp,(ll)0);
			ans=max(ans,even+temp);
		}
		temp=0;
		f(v1.size()){
			temp+=v1[i];
			temp = max(temp,(ll)0);
			ans=max(ans,even+temp);
		}
		cout<<ans<<"\n";
	}	
return 0;	
}