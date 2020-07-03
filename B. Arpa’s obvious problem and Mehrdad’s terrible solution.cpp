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
	ll n,x;
	cin>>n>>x;
	ll hash[100001]={0},temp;
	f(n){
		cin>>temp;
		hash[temp]++;
	}	
	set<pair<ll,ll>> ans;
	ll result=0;
	f(100001){
		temp = i^x;
		if(temp<100001 && hash[i] && hash[temp]){
			if(ans.find({min(i,temp),max(i,temp)})==ans.end()){
				ans.insert({min(i,temp),max(i,temp)});
				if(temp==i)	result+=(hash[i]*(hash[i]-1))/2;
				else result += hash[i]*hash[temp];
			}
		}
	}
	cout<<result<<"\n";
return 0;	
}