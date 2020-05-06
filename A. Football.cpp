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
	int sum=0;
	f(s.size()){
		if(s[i]=='1')
			sum++;
		else
			sum=0;
		if(sum==7)
			break;
	}
	if(sum==7){
		cout<<"YES\n";
		return 0;
	}
	sum =0;
	f(s.size()){
		if(s[i]=='0')
			sum+=-1;
		else
			sum=0;
		if(sum==-7)
			break;
	}
	if(sum==-7)
		cout<<"YES\n";
	else
		cout<<"NO\n";
return 0;	
}