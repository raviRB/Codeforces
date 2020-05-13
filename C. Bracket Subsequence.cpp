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
	 faster
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int i=0,flag=0,open=0,close=0;
	for(;i<s.size();i++){
		if(s[i]=='(' && (open+1)<=(n-k)/2){
			s[i]='1';
			open++;
		}
		else if(s[i]==')' && (close+1)<=(n-k)/2){
			s[i]='1';
			close++;
		}
	}	
	for(char c:s)
		if(c!='1')
			cout<<c;
	cout<<"\n";
return 0;	
}