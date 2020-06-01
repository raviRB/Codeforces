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
	int n,x;
	cin>>n>>x;
	int a[n];
	f(n)	cin>>a[i];	
	sort(a,a+n);
	/*f(n)	cout<<a[i]<<" ";
	cout<<"\n";*/
	int j=0,ans=n+1;
	f(n){
		if(a[i]==x){
			if(i>n-i-1)
				ans = min(ans,(int)(2*i + 1 - n));
			else if(n-i-1 > i+1 )
				ans = min(ans,(int)(n-2*i-2));
			else
				ans=0;
		}
		if(a[i]>x){
			if(i>n-i)
				ans = min(ans,(int)(2*i - n)+1) ;
			else if(n-i > i+1 )
				ans = min(ans,(int)(n-2*i-1)+1) ;
			else
				ans=min(ans,1);
			break;
		}
		//cout<<i<<" "<<ans<<"\n";
	}
	ans = max(ans,0);
	cout<<ans<<"\n";
return 0;	
}