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
	int n,temp;
	cin>>n;
	std::map<ll, int> m;
	std::map<ll, int>::iterator it;
	int ans=0;
	f(n){
		cin>>temp;
		m[temp]++;
	}
	for(it=m.begin();it!=m.end();it++)
		ans = max(ans,it->second);
	cout<<ans<<"\n";	
return 0;	
}