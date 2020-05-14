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
		int n;
		cin>>n;
		if(n==1){
			cout<<"0\n";
			continue;
		}
		ll ans=0,num=8,count=1;
		for(int i=3;i<=n;i+=2,num+=8,count++)
			ans+=(count)*num;
		cout<<ans<<"\n";
	}	
return 0;	
}