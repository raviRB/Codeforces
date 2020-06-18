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
	int n,m,k,row=1,col=1,flag=0;
	cin>>n>>m>>k;
	vector< pair<int,int> > p;
	for(int i=1;i<=n;i++)
		if(i%2)
			for(int j=1;j<=m;j++)
				p.pb(make_pair(i,j));
		else
			for(int j=m;j>=1;j--)
				p.pb(make_pair(i,j));
	int len = p.size(),i=0;
	k--;
	while(k--){
		cout<<2<<" "<<p[i].first<<" "<<p[i].second<<" "<<p[i+1].first<<" "<<p[i+1].second<<"\n";
		i+=2;
		len-=2;
	}
	cout<<len<<" ";
	for(;i<p.size();i++)
		cout<<p[i].first<<" "<<p[i].second<<" ";
	cout<<"\n";
return 0;	
}