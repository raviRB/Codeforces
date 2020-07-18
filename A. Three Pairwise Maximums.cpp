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
		int a[3];
		f(3)	cin>>a[i];
		sort(a,a+3);
		if(a[1]==a[2] ){
			cout<<"YES\n";
			cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<"\n";
		}
		else
			cout<<"NO\n";
	}	
return 0;	
}