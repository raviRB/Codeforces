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
	int n,s,t,temp;
	cin>>n>>s>>t;
	int hash[n+1];
	f(n){
		cin>>temp;
		hash[temp]=i+1;
	}	
	std::map<int, int> map;
	int ans=0;
	while(s!=t){
		map[t]++;
		t = hash[t];
		ans++;
		if(map[t]>1){
			ans=-1;
			break;
		}
	}
	cout<<ans<<"\n";
return 0;	
}