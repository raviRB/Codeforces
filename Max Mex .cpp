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
		ll n,m,ans=0,cnt=1;
		cin>>n>>m;
		ll a[n],i=0;
		f(n)	cin>>a[i];
		sort(a,a+n);
		//f(n)	cout<<a[i]<<" ";
		while(i<n && cnt<m){
			if(a[i]==cnt)
				cnt++;
			i++;
		}
		if(cnt<m){
			cout<<"-1\n";
			continue;
		}
		f(n)	if(a[i]==m)	ans++;
		cout<<n-ans<<"\n";
	}	
return 0;	
}