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
		ll n;
		cin>>n;
		ll a[n];
		f(n) cin>>a[i];
		ll alice=1,bob=n-1,flag=1,prea=a[0],preb=0;
		ll aeat=a[0],beat=0,moves=1;
		while(alice<=bob){
			if(!flag){
				moves++;
				prea=0;
				while(prea<=preb && bob>=alice){
					aeat+=a[alice];
					prea+=a[alice];
					alice++;
				}
				flag=1;
			}
			else{
				moves++;
				preb=0;
				while(preb<=prea && bob>=alice){
					beat+=a[bob];
					preb+=a[bob];
					bob--;
				}
				flag=0;
			}
			//cout<<moves<<" "<<aeat<<" "<<beat<<"\n";
		}
		//cout<<"\n";
		cout<<moves<<" "<<aeat<<" "<<beat<<"\n";
	}	
return 0;	
}