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
	int n,temp;
	cin>>n;
	int a[n],hash[n]={0};
	f(n)	cin>>a[i];
	sort(a,a+n);
	int count =0,end = n/2,start=0;
	while(start<n/2 && end<n){
		if(a[start]*2<=a[end]){
			end++;
			start++;
			count++;
		}
		else
			end++;
	}
	cout<<n-count<<"\n";
return 0;	
}