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
	int n,k;
	cin>>n>>k;
	int a[n];
	f(n)	cin>>a[i];
	string s;
	cin>>s;
	f(n){
		char c = s[i];
		int j=i+1;
		while(j<n && s[j]==s[i])
			j++;
		if(j-i>k)
			sort(a+i,a+j ,greater<int>());
		i=j-1;
	}
	
	char pre=s[0];
	ll ans=0,count=0;
	f(n){
		if(s[i]==pre && count<k){
			ans+=a[i];
			count++;
		}
		if(s[i]!=pre){
			ans+=a[i];
			count=1;
			pre = s[i];
		}

	}
	cout<<ans<<"\n";
return 0;	
}