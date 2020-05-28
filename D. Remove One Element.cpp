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
	int n;
	cin>>n;
	int a[n];
	f(n)	cin>>a[i];
	int skip[n],dontskip[n];
	skip[0]=1,dontskip[0]=1;
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]){
			dontskip[i] = dontskip[i-1]+1;
			skip[i] = skip[i-1]+1;
			if(i>1 && a[i]>a[i-2])
				skip[i] = max(dontskip[i-2] + 1,skip[i-1]+1);
		}
		else{
			dontskip[i]=1;
			skip[i] =1;
			if(i>1 && a[i]>a[i-2])
				skip[i] = dontskip[i-2] + 1;
		}
	}
	int ans=0;
	f(n) 
	ans = max(ans,skip[i]);
	cout<<ans<<"\n";
return 0;	
}