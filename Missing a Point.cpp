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
	 faster
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n;
		unordered_map<int,int> first,second;
		unordered_map<int,int>::iterator it;
		f(4*n-1){
			cin>>a>>b;
			first[a]++;
			second[b]++;
		}
		for(it = first.begin();it!=first.end();it++)
			if(it->second%2){
				cout<<it->first<<" ";
				break;
			}
		for(it = second.begin();it!=second.end();it++)
			if(it->second%2){
				cout<<it->first<<"\n";
				break;
			}
	}
return 0;	
}