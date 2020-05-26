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
	int n,temp;
	cin>>n;
	std::vector< pair<int,int> > v;
	int ans[300001];
	f(n){
		cin>>temp;
		v.pb(make_pair(temp,i+1));
	}	
	sort(v.begin(), v.end());
	int num=v[0].first;
	for(int i=0;i<v.size();i++){
		ans[v[i].second] = max(num,v[i].first);
		num = ans[v[i].second] +1;
	}
	f(n)	cout<<ans[i+1]<<" ";
	cout<<"\n";
return 0;	
}