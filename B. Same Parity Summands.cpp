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
		ll n,k;
		cin>>n>>k;
		if(k>n){
			cout<<"NO\n";
			continue;
		}
		if((n-k+1)%2==1){
			cout<<"YES\n";
			cout<<n-k+1<<" ";
			k--;
			while(k--)
				cout<<1<<" ";
			cout<<"\n";
		}
		else if((n-(k-1)*2)%2==0 && (n-(k-1)*2)>0){
			cout<<"YES\n";
			cout<<(n-(k-1)*2)<<" ";
			k--;
			while(k--)
				cout<<2<<" ";
			cout<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}	
return 0;	
}