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
	ll n,i=1,temp=0;
	cin>>n;
	vector<ll> v;
	temp=(i*(i+1))/2;
	while(temp<=n){
		v.pb(temp);
		if(temp*2==n){
			cout<<"YES\n";
			return 0;
		}
		i++;
		temp=(i*(i+1))/2;
	}
	int start=0,end=v.size()-1;
	while(start<=end){
		if(v[start]+v[end]==n){
			cout<<"YES\n";
			return 0;
		}
		else if(v[start]+v[end]>n)
			end--;
		else
			start++;
	}
	cout<<"NO\n";
return 0;	
}