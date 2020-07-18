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
		int n,x,u,v;
		cin>>n>>x;
		int cnt=0;
		f(n-1){
			cin>>u>>v;
			if(u==x || v==x)
				cnt++;
		}
		if(cnt<=1 || (n-1)%2)
			cout<<"Ayush\n";
		else
			cout<<"Ashish\n";
	}	
return 0;	
}