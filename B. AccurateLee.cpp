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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i=0,one=0,zero=0,flag=0;
		while(i<s.size() && s[i]!='1'){
			cout<<s[i];
			i++;
		}
		while(i<s.size()){
			while(i<s.size() && s[i]=='1'){
				i++;
				one++;
			}
			while(i<s.size() && s[i]=='0'){
				i++;
				zero++;
			}
			if(one && zero){
				flag=1;
				one=0,zero=0;
			}
		}
		if(flag)
			cout<<'0';
		while(one--)
			cout<<'1';
		cout<<"\n";
	}	
return 0;	
}