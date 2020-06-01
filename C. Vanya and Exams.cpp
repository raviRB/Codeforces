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
	ll n,r,avg;
	cin>>n>>r>>avg;
	ll got[n],temp;
	pair<ll, ll> essay[n];
	f(n){
		cin>>got[i]>>temp;
		essay[i]=make_pair(temp,i);
	}
	sort(essay,essay+n);
	ll total=0,required;
	f(n)	total+=got[i];
	required = n*avg;
	required-=total;
	ll ans=0,i=0;
	while(i<n && required>0){
		//cout<<ans<<" "<<required<<"\n";
		temp = r - got[essay[i].second];
		if(temp>required){
			ans+=essay[i].first * required;
			required=0;
		}
		else{
			ans+=essay[i].first * temp;
			required-=temp;
		}
		i++;
	}
	cout<<ans<<"\n";
return 0;	
}