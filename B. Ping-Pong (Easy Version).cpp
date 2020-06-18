#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool compare(pair<int,int> a,pair<int,int> b){
	if(a.first<b.first)
		return true;
	if(a.first>b.first)
		return false;
	return a.second < b.second;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n,temp,a,b,i;
	cin>>n;
	vector< pair<int,int> > p; 
	while(n--){
		cin>>temp>>a>>b;
		if(temp==1){
			p.pb(make_pair(a,b));
		}
		else{
			sort(p.begin(),p.end(),compare);
			a--,b--;
			
			a = min(a,b);
			b = max(a,b);
			for(i=a+1;i<=b;i++)
				if((p[i].first<p[i-1].first && p[i].second>p[i-1].first) || p[i].first<p[i-1].second && p[i].second>p[i-1].second )
					continue;
				else
					break;
			if(i>b)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}	
return 0;	
}