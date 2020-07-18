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
		int n,i;
		cin>>n;
		if(n<=3){
			cout<<"-1\n";
			continue;
		}
		if(n%2)	i=n;
		else i=n-1;
		while(i>=1){
			cout<<i<<" ";
			i-=2;
		}
		cout<<"4 ";
		i=2;
		while(i<=n){
			if(i!=4)
				cout<<i<<" ";
			i+=2;
		}
		cout<<"\n";
	}	
return 0;	
}