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
		int n,k;
		cin>>n>>k;
		ll a[n],b[k],ans=0;
		f(n)	cin>>a[i];
		sort(a,a+n);
		f(k)	cin>>b[i];
		sort(b,b+k);
		int i=0,start=0,end=n-1;
		while(i<k && b[i]==1){
			ans+=a[end]*2;
			end--;
			i++;
		}
		for(;i<k;i++){
			ans+=a[start];
			b[i]-=2;
			while(b[i]--)
				start++;
			ans+=a[end];
			end--;
		}
		cout<<ans<<"\n";
	}	
return 0;	
}