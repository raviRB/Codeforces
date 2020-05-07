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
	int n,m;
	cin>>n>>m;
	int a[m];
	f(m)	cin>>a[i];
	int count=0;
	for(int i=1;i<m;i++)
		if(a[i]<a[i-1])
			count++;
	ll ans=0;
	if(count){
		ans=n;
		ans*=count;
	}
	ans+=a[m-1]-1;
	cout<<ans<<"\n";
return 0;	
}