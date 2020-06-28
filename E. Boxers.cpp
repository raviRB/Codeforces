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
	int n;
	cin>>n;
	int a[n];
	f(n)	cin>>a[i];
	sort(a,a+n,greater<int>());
	int mn = a[0]+1,ans=n;
	for(int i=1;i<n;i++)
		if(a[i]+1<mn)
			mn=a[i]+1;
		else if(a[i]<mn)
			mn = a[i];
		else if(a[i]-1>0 && a[i]-1<mn)
			mn = a[i]-1;
		else
			ans--;
	cout<<ans<<"\n";

return 0;	
}