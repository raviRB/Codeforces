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
	ll n,l;
	cin>>n>>l;
	ll a[n];
	f(n)	cin>>a[i];
	sort(a,a+n);
	double ans=0;
	for(int i=1;i<n;i++){
		ans = max(ans,(double)(a[i]-a[i-1])/2);
	}
	ans = max(ans,(double)max(a[0],l-a[n-1]));
	printf("%lf\n",ans);
return 0;	
}