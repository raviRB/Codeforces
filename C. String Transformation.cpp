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
	if(s.size()<26)	
		cout<<"-1\n";
	else{
		char c = 'z';
		for(int i=s.size()-1;i>=0;i--){
			if(c<'a')
				break;
			if(s[i]==c){
				c--;
				continue;
			}
			if(s[i]<c){
				s[i]=c;
				c--;
			}
		}
		if(c<'a'){
			for(int i=0;i<s.size();i++)
				cout<<s[i];
			cout<<"\n";
		}
		else
			cout<<"-1\n";
	}
return 0;	
}