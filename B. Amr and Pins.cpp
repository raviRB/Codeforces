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
	double r,x,y,X,Y;
	cin>>r>>x>>y>>X>>Y;
	double distance = pow(X-x,2) + pow(Y-y,2);	
	distance = sqrt(distance);
	int ans = ceil(distance/(2*r));
	cout<<ans<<"\n";
return 0;	
}