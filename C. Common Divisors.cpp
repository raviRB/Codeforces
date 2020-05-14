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
	int n;
	cin>>n;
	ll gcd ,temp;
	cin>>gcd;
	for(int i=1;i<n;i++){
		cin>>temp;
		gcd = __gcd(gcd,temp);
	}	
	int ans=0;
	for(ll i=1;i*i<=gcd;i++)
		if(gcd%i==0)
			if(gcd/i != i)
				ans+=2;
			else
				ans+=1;
	cout<<ans<<"\n";
return 0;	
}