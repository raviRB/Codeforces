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
	set<char> countset; // total number of unique pokemon
	f(s.size()) countset.insert(s[i]);
	unordered_map< char,int > m;
	int start =0,ans=INT_MAX,pokemons = countset.size();
	f(s.size()){
		m[s[i]]++;
		if(m.size()==pokemons){
			while(start<i && m[s[start]]>1){
				 m[s[start]]--;
				start++;
			}
			ans = min((ll)ans,i-start+1);
		}
	}
	if(m.size()==pokemons){
			while( m[s[start]]>1){
				 m[s[start]]--;
				start++;
			}
			ans = min(ans,n-start);
		}
	cout<<ans<<"\n";
return 0;	
}