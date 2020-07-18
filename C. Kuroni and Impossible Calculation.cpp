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
	int n,m,temp;
	cin>>n>>m;
	int a[n];
	f(n)	cin>>a[i];
	if(n>m){
		cout<<"0\n";
		return 0;
	}
	ll ans = 1;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			ans = ans*(abs(a[i]-a[j]))%m;
			ans%=m;
		}
	cout<<ans<<"\n";
return 0;	
}