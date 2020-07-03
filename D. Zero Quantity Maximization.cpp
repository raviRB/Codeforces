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
	int n,ans1=0,num;
	cin>>n;
	int a[n],b[n];
	f(n)	scanf("%d",&a[i]);
	f(n)	scanf("%d",&b[i]);
	map<pair<int,int> , int> m;
	map<pair<int,int> , int>::iterator it;
	f(n){
		if(!a[i] && !b[i]) ans1++;
		if(!a[i])	continue;
		num = __gcd(b[i],a[i]);
		m[{-b[i]/num,a[i]/num}]++;
		//cout<<val<<"\n";
	}
	ll ans=0;
	for(it = m.begin();it!=m.end();it++)
		ans = max(ans,(ll)it->second);
	cout<<ans+ans1<<"\n";
return 0;	
}