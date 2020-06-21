#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll ans[1000][1000];
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	ans[0][0]=1;
	int h,w;
	cin>>h>>w;
	char a[h][w];
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
			cin>>a[i][j];
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++){
			if(a[i][j]=='#')	continue;
			if(j>0)	ans[i][j]=ans[i][j-1];
			if(i>0)	ans[i][j]+=ans[i-1][j];
			ans[i][j]%=mod;
		}
	cout<<ans[h-1][w-1]<<"\n";
return 0;	
}