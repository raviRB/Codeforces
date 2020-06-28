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
	int t;
	cin>>t;
	while(t--){
		ll n,flag=0;
		cin>>n;
		ll ans=0;
		map<ll,int> m;
		while(n!=1){
			if(m[n]>0){
				cout<<"-1\n";
				flag=1;
				break;
			}
			m[n]++;
			if(n%6==0)
				n/=6;
			else
				n*=2;
			ans++;	
		}
		if(!flag)	cout<<ans<<"\n";
	}	
return 0;	
}