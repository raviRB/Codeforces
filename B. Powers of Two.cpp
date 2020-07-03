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
	ll n,mx=0;
	ll temp=0,ans=0,val,ans1=0;
	cin>>n;
	vector<int> a;
	map<int,int> m;
	f(n){
		cin>>val;
		mx = max(mx,val);
		m[val]++;
		if(m[val]==1)	a.pb(val);
	}	
	f(a.size()){
		temp = 1;
		while(temp<=mx*2){
			if(temp>=a[i]){	
				val = m[temp-a[i]];
				if(a[i]==(temp-a[i]))
					ans1+=(val*(val-1))/2;
				else
					ans+=(val*m[a[i]]);
			}
			temp*=2;
		}
		//cout<<a[i]<<" "<<ans/2 + ans1<<"\n";
	}
	cout<<ans/2 + ans1<<"\n";
return 0;	
}