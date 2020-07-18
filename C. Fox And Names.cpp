#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
std::vector<int> edge[26];
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	// First Question on Topological sort 
	int n,i,j,k,l;
	char c;
	cin>>n;
	string s[n];
	f(n)	cin>>s[i];
	// create graph
	for(i=0;i<n-1;i++){
		for(j=0;j<s[i+1].size();j++){
			if(j==s[i].size())
				break;
			if(s[i][j]!=s[i+1][j]){
				edge[s[i][j]-'a'].pb(s[i+1][j]-'a');
				break;
			}
		}
		if(j<s[i].size() && j==s[i+1].size()){
			cout<<"Impossible\n";
			return 0;
		}
	}
	// topological sort
	int visited[26]={0},indeg[26]={0},visitcnt=0,ans[26]={0},index=0;
	queue<int> q;
	f(26)
		for(int j : edge[i])
			indeg[j]++;
	f(26)
		if(!indeg[i])
			q.push(i);

	while(!q.empty()){
		j = q.front();
		visited[j]++;
		visitcnt++;
		q.pop();
		ans[j]=index;
		index++;
		for(int k:edge[j])
			if(visited[k])
				break;
			else{
				indeg[k]--;
				if(!indeg[k])	q.push(k);
			}
	}
	// check for loop
	if(visitcnt!=26){
		cout<<"Impossible\n";
		return 0;	
	}
	// answer string
	string res;
	f(26)	res+='a';
	f(26)	res[ans[i]]='a'+i;
	cout<<res<<"\n";
return 0;	
}