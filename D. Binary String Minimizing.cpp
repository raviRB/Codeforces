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
	int q;
	cin>>q;
	while(q--){
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int start =-1;
		f(s.size()){
			if(k==0)	break;
			if(s[i]=='0'){
				while(start<i && (s[start]!='1' || i-start>k))
					start++;
				if(s[start]!='1')
					continue;
				k-=i-start;
				s[start]='0';
				s[i]='1';
				while(s[start]=='0')
					start++;
			}
		}
		f(s.size())	cout<<s[i];
		cout<<"\n";
	}	
return 0;	
}