#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool compare(pair<int,int> q,pair<int,int> e){
	if(q.first>e.first)
		return true;
	return false;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,temp;
	cin>>n;
	vector< pair<int,int>  > m;
	f(n){
		cin>>temp;
		m.pb(make_pair(temp,i+1));
	}
	sort(m.begin(), m.end() , compare);
	ll ans=0;
	for(int i=0;i<m.size();i++)
		ans+=(m[i].first * i + 1);
	cout<<ans<<"\n";
	for(int i=0;i<m.size();i++)
		cout<<m[i].second<<" ";
	cout<<"\n";

return 0;	
}