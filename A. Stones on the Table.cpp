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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i=0,ans=0;
	char c;
	while(i<s.size()){
		c=s[i];
		i++;
		while(i<s.size() && s[i]==c){
			ans++;
			i++;
		}
	}
	cout<<ans<<"\n";
return 0;	
}