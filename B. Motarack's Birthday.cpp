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
		int n;	cin>>n;
		int a[n];
		f(n)	cin>>a[i];
		int r = INT_MIN , l = INT_MAX;
		f(n)
			if(a[i]!=-1)
				if( (i>0 && a[i-1]==-1) || (i<n-1 && a[i+1]==-1) ){
					if(a[i]>r)	r = a[i];
					if(a[i]<l)	l = a[i];
				}
		int ans = abs(r-l)/2;
		if(r==INT_MIN){
			ans =0;
			r=0;
			l=0;
		}
		ans+=min(r,l);
		f(n) if(a[i]==-1) a[i]=ans;
		int m=INT_MIN;
		for(int i=0;i<n-1;i++)	m = max(m,abs(a[i]-a[i+1]));
		cout<<m<<" "<<ans<<"\n";
	}	
return 0;	
}