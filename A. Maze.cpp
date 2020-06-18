#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int n,m,k,cnt;
char a[500][500];
void dfs(int x, int y){
	if(cnt==0)
		return;
	if(cnt>0 && x>0 && a[x-1][y]=='.'){
		cnt--;
		a[x-1][y]='x';
		dfs(x-1,y);
	}
	if(cnt>0 && y>0 && a[x][y-1]=='.'){
		cnt--;
		a[x][y-1]='x';
		dfs(x,y-1);
	}
	if(cnt>0 && x<n-1 && a[x+1][y]=='.'){
		cnt--;
		a[x+1][y]='x';
		dfs(x+1,y);
	}
	if(cnt>0 && y<m-1 && a[x][y+1]=='.'){
		cnt--;
		a[x][y+1]='x';
		dfs(x,y+1);
	}
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int ai,b;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]=='.'){
				cnt++;
				ai=i,b=j;
			}
		}
	cnt--;
	a[ai][b]='x';
	cnt-=k;
	dfs(ai,b);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			if(a[i][j]=='x')
				cout<<".";
			else if(a[i][j]=='.')
				cout<<"X";
			else
				cout<<a[i][j];
		cout<<"\n";
	}

return 0;	
}