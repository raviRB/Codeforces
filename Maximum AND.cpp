#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool compare(pair<ll,ll> a,pair<ll,ll> b){
	if(a.first>b.first)	return true;
	if(b.first>a.first)	return false;
	return a.second<b.second;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int t;
	cin>>t;
	while(t--){
		ll temp,n,k,cnt[31]={0},val;
		cin>>n>>k;
		f(n){
			cin>>temp;
			for(ll i=0;i<31;i++){
				val=1;
				if(temp & (val<<i))
					cnt[i]++;
			}
		}
		vector<pair<ll,ll>> p;
		f(31){
			val = pow(2,i);
			cnt[i] = val*cnt[i];
			p.pb(make_pair(cnt[i],i));
			//cout<<p[i].first<<" "<<i<<"\n";
		}
		sort(p.begin(),p.end(),compare);
		//f(30)	cout<<p[i].first<<" "<<p[i].second<<"\n";
		ll ans=0;

		for(int i=0;i<k;i++)
			if(p[i].first>0){
				ans +=(ll)pow(2,p[i].second);
			}
		printf("%ld\n",ans);
	}	
return 0;	
}