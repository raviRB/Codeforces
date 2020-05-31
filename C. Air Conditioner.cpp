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
	int q;
	cin>>q;
	while(q--){
		int n,m,flag=0,start=0,end=0,t,l,r,pre;
		cin>>n>>m;
		start = m , end = m,pre=0;
		f(n){
			cin>>t>>l>>r;
			end +=(t-pre);
			if(end >= l)
				start = min((t-pre)+start , l);
			if((start<l && end<l) || (start>r && end>r))
				flag=1;
			pre = t;
		}
		if(flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}	
return 0;	
}