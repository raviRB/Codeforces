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
	 faster
	int n,a,b,hi,wi;
	cin>>n;
	char c;
	int h=0,w=0;
	while(n--){
		cin>>c>>a>>b;
		hi = min(a,b);
		wi = max(a,b);
		if(c=='+'){
			h = max(hi,h);
			w = max(wi,w);	
		}
		else{
			if(h<=hi && w<=wi)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}	
return 0;	
}