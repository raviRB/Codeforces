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
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		std::vector<int> pos[26];
		f(s.size())	pos[s[i]-'a'].pb(i);
		int ans=0,flag=0,pre=-1,c;
		//solve
		for(int i=0;i<t.size();i++){
			c = t[i]-'a';
			if(pos[c].size()==0){
				flag=1;
				break;
			}
			if(pos[c][pos[c].size()-1]<=pre){
				pre=-1;
				ans++;
				i--;
			}
			else{
				pre = *(upper_bound(pos[c].begin(), pos[c].end(), pre));
			}
		}
		//answer
		if(flag)	cout<<"-1\n";
		else
			cout<<ans+1<<"\n";
	}	
return 0;	
}