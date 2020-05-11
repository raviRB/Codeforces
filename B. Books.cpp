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
	int n,t;
	cin>>n>>t;
	int a[n],ans=0,temp=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int end=0,start=0;
	while(end<n){
		while(end<n && temp+a[end]<=t)
			temp+=a[end++];
		ans = max(ans,end-start);
		temp-=a[start++];
	}
	cout<<ans<<"\n";
return 0;	
}