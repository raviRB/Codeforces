#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define clearbuff cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
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
		int n,m;
		cin>>n>>m;
		string s;
		clearbuff
		cin>>s;
		int mark[s.size()+1]={0},temp;
		f(m){
			cin>>temp;
			mark[temp]++;
		}
		int hash[26]={0};
		m++;
		f(s.size()){
			m-=mark[i];
			hash[s[i]-'a']+=m;
		}
		f(26)
			cout<<hash[i]<<" ";
		cout<<"\n";
		
	}	
return 0;	
}