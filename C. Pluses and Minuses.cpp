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
		string s;
		cin>>s;
		ll ans=0,cur=0;
		for(int i=0;i<s.size();i++)
			if(s[i]=='-' && !cur)
				ans+=i+1;
			else if(s[i]=='-')
				cur--;
			else 
				cur++;
		cout<<ans+s.size()<<"\n";
	}	
return 0;	
}