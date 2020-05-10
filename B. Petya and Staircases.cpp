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
	sort(a,a+m);
	if(a[0]==1 || a[m-1]==n){
		cout<<"NO\n";
		return 0;
	}
	for(int i=0;i<=m-3;i++)
		if(a[i+1]==a[i]+1 && a[i+2]==a[i]+2){
			cout<<"NO\n";
			return 0;
		}
	cout<<"YES\n";
	return 0;
return 0;	
}