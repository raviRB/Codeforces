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
	int n,i,flag=0;
	cin>>n;
	int a[n];
	f(n)	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i+=2)
		cout<<a[i]<<" ";
	if(i==n)
		i=n-1;
	else
		i=n-2;
	for(;i>=0;i-=2)
		cout<<a[i]<<" ";
	cout<<"\n";
return 0;	
}