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
	ll b[n];
	f(n)	cin>>b[i];
	vector<ll> ans;
	ans.pb(b[0]);
	int largest = b[0],i=1,temp;
	while(i<n){
		temp = b[i]+largest;
		largest = max(largest,temp);
		ans.pb(temp);
		i++;
	}	
	f(n)
		cout<<ans[i]<<" ";
	cout<<"\n";
return 0;	
}