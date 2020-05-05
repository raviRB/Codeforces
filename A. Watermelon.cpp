#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(i,j) for(ll i=0;i<j;i++)
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
	if(n>2 && n%2==0)
	    cout<<"YES\n";
	else
	    cout<<"NO\n";
return 0;	
}