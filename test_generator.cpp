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
	std::vector<int> v,v1;
	f(1000)
		v.pb(rand());
	f(1000)
		v1.pb(v[i]);
	cout<<v.size()<<"\n";
	sort(v.begin(),v.end());
	f(100){
		int j = rand() %1000;
		int temp = v[j];
		v[j] = v1[j];
		v1[j] = temp;
	}
	for(int i:v)	cout<<i<<" ";
		cout<<"\n";
	for(int i:v1)	cout<<i<<" ";
		cout<<"\n";
return 0;	
}