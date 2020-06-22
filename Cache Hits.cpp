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
		int n,b,m,ans=0,cache=-1,temp;
		cin>>n>>b>>m;
		f(m){
			cin>>temp;
			if(temp/b==cache)
				continue;
			else{
				ans++;
				cache = temp/b;
			}
		}
		cout<<ans<<"\n";
	}	
return 0;	
}