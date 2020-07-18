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
	ll t;
	cin>>t;
	while(t--){
		ll n,q,u,v;
		cin>>n;
		std::vector<ll> a;
		f(n){
			cin>>u;
			a.pb(u);
		}
		cin>>q;
		sort(a.begin(),a.end());
		while(q--){
			cin>>u>>v;
			u+=v;
			if(u<a[0]){
				cout<<"0\n";
				continue;
			}
			ll start=0,end=n-1,mid,index=0;
			while(start<=end){
				mid = start + (end-start)/2;
				if(a[mid]<=u){
					index = max(index,mid);
					start=mid+1;
				}
				else
					end=mid-1;
			}
			if(a[index]==u)
				cout<<"-1\n";
			else
				cout<<index+1<<"\n";
		}
	}	
return 0;	
}