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
	int n,x,y;
	cin>>n>>x>>y;
	int a[n];
	f(n)	cin>>a[i];
	if(x>y)
		cout<<n;
	else{
		int count=0;
		f(n){
			if(a[i]<=x)
				count++;
		}
		if(count%2==0)
			cout<<count/2;
		else
			cout<<count/2 + 1;
	}
	cout<<"\n";	
return 0;	
}