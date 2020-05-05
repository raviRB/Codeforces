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
	int n,a,end;
	cin>>n;
	cin>>a;
	n--;
	end = a%10;
	int ans=1;
	while(n--){
		cin>>a;
		a=a%10;
		if(end!=a){
			ans++;
			end = a;
		}
	}
	cout<<ans<<"\n";
return 0;	
}