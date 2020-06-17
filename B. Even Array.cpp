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
		int n,odd=0,even=0,temp;
		cin>>n;
		f(n){
			cin>>temp;
			if(i%2 != temp%2){
				if(i%2)
					odd++;
				else
					even++;
			}
		}
		if(odd==even)
			cout<<odd<<"\n";
		else
			cout<<"-1\n";
	}	
return 0;	
}