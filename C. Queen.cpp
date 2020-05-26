#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 

int hashval[100001]={0},root;
vector<int> a[100001],ans;

int dfs(int node){
	int num=hashval[node];
	for(int i=0;i<a[node].size();i++)
		num+=dfs(a[node][i]);
	if(!num && node!=root)
		ans.pb(node);
	return hashval[node];
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,p,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>c;
		if(p==-1)
			root =i;
		else{
			a[p].pb(i);
			hashval[i]=1-c;
		}
	}
	dfs(root);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	if(!ans.size())
		cout<<"-1";
	cout<<"\n";
return 0;	
}