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
	ll a[n];
	f(n)	cin>>a[i];
	int start=0,end=n-1,temp;
	while(start<end){
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start+=2;
		end-=2;
	}
	f(n)	cout<<a[i]<<" ";
return 0;	
}