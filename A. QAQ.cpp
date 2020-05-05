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
	int pre[s.size()]={0}, post[s.size()]={0};	
	if(s[0]=='Q')
		pre[0]=1;
	for(int i=1;i<s.size();i++)
		if(s[i]=='Q')
			pre[i]= 1 + pre[i-1];
		else
			pre[i]=  pre[i-1];
	if(s[s.size()-1]=='Q')
		post[s.size()-1]=1;
	for(int i=s.size()-2;i>=0;i--)
		if(s[i]=='Q')
			post[i]= 1 + post[i+1];
		else
			post[i]=  post[i+1];
	int ans=0;
	f(s.size())
		if(s[i]=='A')
			ans+=(pre[i]*post[i]);
	cout<<ans<<"\n";
return 0;	
}