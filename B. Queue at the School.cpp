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
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--){
		for(int i=0;i<s.size()-1;i++)
			if(s[i]=='B' && s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i++;
			}
	}
	f(s.size())
		cout<<s[i];
	cout<<"\n";	
return 0;	
}