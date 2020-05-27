#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int main(){									// greedy
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n;
	cin>>n;
	int x[n+1],h[n+1], ans =2;
	f(n)	cin>>x[i+1]>>h[i+1];
	if(n<=2){
		cout<<n<<"\n";
		return 0;
	}
	for(int i=2;i<=n-1;i++)
		if(x[i]-x[i-1]-1 >= h[i])
			ans++;
		else if(x[i+1]-x[i]-1 >= h[i]){
			ans++;
			x[i]+=h[i];
		}
	cout<<ans<<"\n";
return 0;	
}