#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool check(int *a, int n){
	for(int i=1;i<n;i++)
		if(a[i]!=a[i-1])
			return false;
		return true;
}
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
	if(check(a,n)){
		cout<<"YES\n";
		return 0;
	}
	sort(a,a+n,greater<int>());
	ll sum=0;
	f(n)	sum+=a[i];
	if(sum%2==0 && a[0]<=(sum-a[0]) )
		cout<<"YES\n";
	else
		cout<<"NO\n";
return 0;	
}