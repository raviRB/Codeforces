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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int ans=0,count=0;
		if(s[0]=='0')	ans++;
		for(int i=1;i<s.size();i++){
			//cout<<ans<<" "<<count<<"\n";
			if(s[i]=='1' && count==k){
				count=0;
				continue;
			}
			if(s[i]=='1' && count<k){
				ans--;
				count=0;
				continue;
			}
			if(s[i]=='0' && count==k){
				ans++;
				count=0;
				continue;
			}
			if(s[i]=='0')
				count++;
		}
		cout<<ans<<"\n";
	}	
return 0;	
}