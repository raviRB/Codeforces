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
		int zero=0,one=0,count;
		f(s.size())	if(s[i]=='0')	zero++;
		else	one++;
		count = min(zero,one);
		if(count%2==0)	cout<<"NET\n";
		else	cout<<"DA\n";
	}	
return 0;	
}