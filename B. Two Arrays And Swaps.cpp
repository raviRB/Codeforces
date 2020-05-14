#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool reverse(int a,int b)
{
	return a>b;
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
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		f(n)	cin>>a[i];
		f(n)	cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		int i=0;
		for(int j=0;j<n;j++)
			if(a[i]<b[j] && k){
				a[i]=b[j];
				i++;
				k--;
			}
		ll ans=0;
		f(n)	ans+=a[i];
		cout<<ans<<"\n";
	}	
return 0;	
}