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
	int n;
	cin>>n;
	string l,r;
	cin>>l>>r;
	std::vector<int> lc[27],rc[27];
	f(n){
		if(l[i]=='?')	lc[26].pb(i);
		else	lc[l[i]-'a'].pb(i);
	}
	f(n){
		if(r[i]=='?')	rc[26].pb(i);
		else	rc[r[i]-'a'].pb(i);
	}
	int rx = rc[26].size()-1 , lx = lc[26].size()-1;
	//cout<<rx<<" "<<lx<<"\n";
	std::vector< pair<int,int> > ans;
	for(int i=0;i<=25;i++){
		int left=lc[i].size()-1,right=rc[i].size()-1;
		while(left>=0 && right>=0){
			ans.pb(make_pair(lc[i][left],rc[i][right]));
			left--;
			right--;
		}
		while(left>=0 && rx>=0){
			ans.pb(make_pair(lc[i][left],rc[26][rx]));
			left--;
			rx--;	
		}
		while(right>=0 && lx>=0){
			ans.pb(make_pair(lc[26][lx],rc[i][right]));
			right--;
			lx--;	
		}
	}
	while(rx>=0 && lx>=0){
			ans.pb(make_pair(lc[26][lx],rc[26][rx]));
			rx--;
			lx--;	

		}
	cout<<ans.size()<<"\n";
	for(pair<int,int> p : ans)
		cout<<p.first + 1<<" "<<p.second + 1<<"\n";
return 0;	
}