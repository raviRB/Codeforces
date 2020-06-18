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
	ll a,m,i;
	cin>>a>>m;
	for(i=0;i<m;i++)
		if(a%m==0)
			break;
		else
			a+=a%m;
	if(i==m)	cout<<"No\n";
	else	cout<<"Yes\n";	
return 0;	
}