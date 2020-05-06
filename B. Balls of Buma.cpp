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
	char cur;
	int start=0,end = s.size()-1;
	while(start<end){
		cur = s[start];
		if(s[start]!=s[end])
			break;
		while(start<end && s[start]==cur)
			start++;
		while(start<end && s[end]==cur)
			end--;
	}
	cout<<start<<" "<<end<<"\n";
return 0;	
}