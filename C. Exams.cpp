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
	ll n,a,b;
	cin>>n;
	pair<ll,ll> p[n];	
	f(n){
		cin>>a>>b;
		p[i]=make_pair(a,b);
	}
	sort(p,p+n);
	ll lastdayexam=0;
	f(n){
		if(lastdayexam <=p[i].second)
			lastdayexam = p[i].second;
		else
			lastdayexam = p[i].first;
	}
	cout<<lastdayexam<<"\n";
return 0;	
}