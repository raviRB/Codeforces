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
	int n,m,d;
	cin>>n>>m>>d;
	n=n*m;
	int a[n];
	f(n)	cin>>a[i];
	sort(a,a+n);
	int temp = a[n/2],ans=0,i;
	for( i=0;i<n;i++)
		if(abs(temp-a[i])%d!=0)
			break;
		else
			ans+=abs(temp-a[i])/d;
	if(i!=n)
		cout<<"-1\n";
	else
		cout<<ans<<"\n";
return 0;	
}