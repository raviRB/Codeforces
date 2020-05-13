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
		ll n,k,flag=0,i,temp=0;
		cin>>n>>k;
		ll a[n];
		f(n)	cin>>a[i];
		vector<ll> ans;
		k--;
		i=0;
		while(i<n && k){
			temp+=a[i];
			i++;
			if(temp%2){
				temp=0;
				k--;
				ans.pb(i);
			}
		}
		while(i<n){
			temp+=a[i];
			i++;
		}
		if(k || temp%2==0){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
			for(int i=0;i<ans.size();i++)
				cout<<ans[i]<<" ";
			cout<<n<<"\n";
		}

	}	
return 0;	
}