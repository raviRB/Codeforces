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
	ll n;
	double w;
	cin>>n>>w;
	n*=2;
	double a[n];
	f(n)	cin>>a[i];
	sort(a,a+n);
	ll girl = 0,boy=n/2 ;
	double ans=INT_MAX,temp;
	while(girl<n/2){
		if(a[girl]>=a[boy]/2)
			ans = min(ans,a[boy]/2);
		else
			ans = min(ans,a[girl]);
		girl++;
		boy++;
	}	
	temp = n + n/2;
	temp=w/temp;
	ans = min(ans,temp);
	ans = ans*(n+n/2);
	printf("%lf\n", ans);
return 0;	
}