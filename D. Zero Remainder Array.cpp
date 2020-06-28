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
	 faster
	int t;
	cin>>t;
	while(t--){
		ll n,k,temp,temp1;
		cin>>n>>k;
		std::vector<ll> v;
		f(n){
			cin>>temp;
			temp1 = temp/k;
			if(temp1*k!=temp)
				temp1 = temp1*k + k - temp;
			else
				continue;
			v.pb(temp1);
			//cout<<temp1<<"\n";
		}
		map<ll,ll> m;
		map<ll,ll>::iterator it;
		f(v.size())	m[v[i]]++;
		ll ans=0;
		for(it=m.begin();it!=m.end();it++)
			ans = max(ans,it->first + k * (it->second-1) + 1);
		cout<<ans<<"\n";
		}	
return 0;	
}