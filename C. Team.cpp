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
	int n,m; // m-1
	cin>>n>>m;
	if(2*(n+1)<m || m<n-1){
		cout<<"-1";
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(m>n-i){
			cout<<1;
			m--;
		}
		if(m>n-i){
			cout<<1;
			m--;
		}
		cout<<0;
	}
	if(m!=0){
			cout<<1;
			m--;
		}
		if(m!=0){
			cout<<1;
			m--;
		}
return 0;	
}