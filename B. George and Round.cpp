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
	int a[n],b[m];
	f(n)	cin>>a[i];
	f(m)	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int index=0; // index of a
	f(m)
		if(index<n && a[index]<=b[i])
			index++;
	cout<<n-index<<"\n";

return 0;	
}