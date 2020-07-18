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
		int n;
		cin>>n;
		int a[n];
		f(n)	cin>>a[i];
		int i,cnt = 0, flag=0; // flag=0 a[i]<a[i+1]
		for(i=n-2;i>=0;i--)
			if(a[i]<a[i+1])
				break;
		for(;i>=0;i--)
			if(a[i]>a[i+1])
				break;
		cout<<i+1<<"\n";
	}	
return 0;	
}