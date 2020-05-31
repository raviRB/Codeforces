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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int counta=0,countb=0,start=0,ans=0;
	f(s.size()){
		if(s[i]=='a')	counta++;
		else	countb++;
		while((counta>0 && countb>0) && min(countb,counta)>k){
			if(s[start]=='a')	counta--;
			else	countb--;
			start++;
		}
		ans = max(ans,counta+countb);
	}
	cout<<ans<<"\n";
return 0;	
}