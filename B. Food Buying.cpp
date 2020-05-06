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
		ll s,spent=0,rem=0,divi=10;
		cin>>s;
		while(s>0){
			divi=1;
			while((s/divi)>9){
				divi*=10;
			}
			rem = s%divi;
			spent+=(s-rem);
			rem +=(s-rem)/10;
			s = rem;
		}
		cout<<spent<<"\n";
	}	
return 0;	
}