#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int a[30][30],visited[30][30],n,m;
int one[60],zero[60];
void solve(int x, int y, int len){
	if(visited[x][y])	return;
	visited[x][y]=1;
	if(a[x][y])	one[len]++;
	else	zero[len]++;
	if(x+1<n && !visited[x+1][y])
		solve(x+1,y,len+1);
	if(y+1<m && !visited[x][y+1])
		solve(x,y+1,len+1);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(one,0,sizeof(one));
		memset(zero,0,sizeof(zero));
		f(n)	
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			visited[i][j]=0;
		}
		solve(0,0,0);
		int start=0,end=n+m-2,ans=0;
		while(start<end){
			ans += min(one[start]+one[end],zero[end]+zero[start]);
			start++;
			end--;
		}
		cout<<ans<<"\n";
	}	
return 0;	
}