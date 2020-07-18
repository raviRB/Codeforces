#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
string s;
ll getval(int start, int end , char c){
	if(start==end)
		if(c==s[start])	return 0;
		else return 1;
	int i,mid = (start+end)/2;
	int p0=0,p1=0;
	for(i=start;i<=mid;i++)
		if(s[i]!=c)	p0++;
	p0 += getval(mid+1,end,c+1);
	for(i=mid+1;i<=end;i++)
		if(s[i]!=c)	p1++;
	p1 += getval(start,mid,c+1);
	return min(p0,p1);
}
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
		cin>>s;
		cout<<getval(0,n-1,'a')<<"\n";
	}	
return 0;	
}