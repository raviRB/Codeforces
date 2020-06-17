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
	int n,p;
	cin>>n>>p;
	string s;
	cin>>s;
	p--;
	int left=INT_MAX,right=INT_MIN;
	int start=0,end = s.size()-1,ans=0;
	while(start<end){
		if(s[start]==s[end]){
			start++;
			end--;
			continue;
		}
		left = min(left,start);
		right = max(right,start);
		ans+=min(abs(s[start]-s[end]),26-abs(s[start]-s[end]));
		start++;
		end--;
	}
	//cout<<left<<" "<<right<<"\n";
	if(left==INT_MAX){
		cout<<ans<<"\n";
		return 0;
	}
	if(p+1<=s.size()/2){
		if(p>=right)	ans+=p-left;
		else if (p<=left)	ans+=right-p;
		else
			ans +=2*min(p-left,right-p) + max(p-left,right-p);
	}	
	else{
		int temp  = right;
		right = s.size()-1 -left;
		left = s.size()-1 -temp;
		if(p>=right)	ans+=p-left;
		else if (p<=left)	ans+=right-p;
		else
			ans +=2*min(p-left,right-p) + max(p-left,right-p);
	}
	//cout<<p<<" "<<left<<" "<<right<<"\n";
	cout<<ans<<"\n";
return 0;	
}