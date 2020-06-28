#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
char a[50][50],c;
bool visited[50][50],hasCycle=false;
int n,m,dis[50][50];
void dfs(int x, int y , int cnt){
	if(visited[x][y] && abs(dis[x][y]-cnt)>=4)
		hasCycle = true;
	if(visited[x][y])	return;
	visited[x][y]=true;
	dis[x][y]=cnt;
	if(x+1<n && a[x+1][y]==c)
		dfs(x+1,y,cnt+1);
	if(y-1>=0 && a[x][y-1]==c)
		dfs(x,y-1,cnt+1);
	if(y+1<m && a[x][y+1]==c)
		dfs(x,y+1,cnt+1);
	if(x-1>=0 &&a[x-1][y]==c)
		dfs(x-1,y,cnt+1);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	cin>>n>>m;
	hasCycle=false;
	memset(dis,0,sizeof(dis));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(!visited[i][j]){
				c = a[i][j];
				dfs(i,j,1);
			}
	if(hasCycle)	cout<<"Yes\n";
	else	cout<<"No\n";
return 0;	
}