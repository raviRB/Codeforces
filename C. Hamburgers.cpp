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
	string s;
	cin>>s;
	ll a=0,b=0,c=0;
	f(s.size())
		if(s[i]=='S')	a++;
		else if(s[i]=='B')	b++;
		else	c++;	
	ll ha=0,hb=0,hc=0,ans=0,pa,pb,pc,r;
	cin>>hb>>ha>>hc;
	cin>>pb>>pa>>pc>>r;
	ll left=0,right=r+1000,poss,cost;
	while(left<=right){
		poss = left + (right-left)/2;
		cost = max((ll)0,poss*a-ha)*pa;
		cost += max((ll)0,poss*b-hb)*pb;
		cost += max((ll)0,poss*c-hc)*pc;
		if(cost<=r){
			ans = max(ans,poss);
			left = poss+1;
		}
		else
			right=poss-1;
	}
	cout<<ans<<"\n";
return 0;	
}