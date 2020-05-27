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
	int n,q;
	cin>>n>>q;
	int a[n];
	f(n)	cin>>a[i];
	sort(a,a+n,greater<int>());
	int temp[n+10]={0},x,y;
	while(q--){
		cin>>x>>y;
		temp[x]++;
		temp[y+1]--;
	}
	std::vector<int> freq;
	x=0;
	f(n){
		x+=temp[i+1];
		freq.pb(x);
	}
	sort(freq.begin(),freq.end(),greater<int>());
	ll ans=0;
	f(n)	ans+=(ll)freq[i]*(ll)a[i];
	cout<<ans<<"\n";
return 0;	
}