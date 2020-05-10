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
		int n0,n1,n2;
		cin>>n0>>n1>>n2;
		string s="";
		if(n0)
			n0++;
		for(int i=0;i<n0;i++)
			s+='0';
		if(n2)
			n2++;
		for(int i=0;i<n2;i++)
			s+='1';
		if(s.size()==0 && n1)
			s+='1';
		if(n0 && n2)
			n1--;
		for(int i=0;i<n1;i++)
			if(s[s.size()-1]=='1')
				s+='0';
			else
				s+='1';
		cout<<s<<"\n";
	}	
return 0;	
}