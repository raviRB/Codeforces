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
	ll m=0,k;
	string s;
	cin>>s;
	cin>>k;
	ll a[26];
	f(26){
		cin>>a[i];
		m=max(m,a[i]);
	}
	ll ans =0;
	f(s.size())
		ans+=((i+1)*a[s[i]-'a']);
	int i=s.size()+1;
	while(k--){
		ans+=(m*i);
		i++;
	}
	cout<<ans<<"\n";
return 0;	
}