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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0,mul=1,temp;
		std::vector<int> v;
		while(n){
			temp = n%10;
			if(temp){
				v.pb(temp*mul);
				count++;
			}
			mul*=10;
			
			n/=10;
		}
		cout<<count<<"\n";
		f(v.size())
			cout<<v[i]<<" ";
		cout<<"\n";
	}	
return 0;	
}