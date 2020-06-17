#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool compare(pair<int,int> p1 ,pair<int,int> p2){
	if(p1.first<p2.first)	return true;
	if(p1.first>p2.first)	return false;
	return p1.second < p2.second ;
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
		int n,a,b;
		cin>>n;
		pair<int,int> arr[n];
		f(n){
			cin>>a>>b;
			arr[i]=make_pair(a,b);
		}
		sort(arr,arr+n,compare);
		double ans=0,temp;
		map<int,int> m;
		for(int i=0;i<n-1;i++){
			if(m[arr[i+1].first] || m[arr[i+1].second])	continue;
			temp=pow(arr[i].first - arr[i+1].first,2) + pow(arr[i].second - arr[i+1].second,2) ;
			ans+=sqrt(temp);
			m[arr[i].first]++;
			m[arr[i].second]++;
			m[arr[i+1].first]++;
			m[arr[i+1].second]++;
		}
		printf("%lf\n",ans);
	}	
return 0;	
}