#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool has(string s){
	f(s.size())
		if(s[i]=='1')	return true;
	return false;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	string a,b;
	cin>>a>>b;
	int n = a.size();
	if(a.size()!=b.size())
		cout<<"NO\n";
	else{
		int i=0;
		for(;i<n;i++)
			if(a[i]!=b[i])	break;
		if(i==n || (has(a) && has(b)))	cout<<"YES\n";
		else cout<<"NO\n";
	}	
return 0;	
}