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
	 faster
	ll n,k;
	cin>>n>>k;
	ll a[n];
	f(n)	cin>>a[i];
	ll ans=0,pre=0,temp;
	f(n-1){
		temp=(pre+a[i])%k;
		if(temp==0){
			ans+=(pre+a[i])/k;
			pre=0;
		}
		else if(temp<=a[i]){
			ans+=(pre+a[i])/k;
			pre=temp;	
		}
		else{
			ans+=(pre+a[i])/k;
			pre=0;
			ans++;
		}
	}	
	temp=(pre+a[n-1]);
	ans+=temp/k;
	if(temp%k!=0)
		ans++;
	cout<<ans<<"\n";
return 0;	
}