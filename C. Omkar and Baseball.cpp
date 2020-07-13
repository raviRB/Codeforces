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
		int a[n+1],i=1;
		f(n)	cin>>a[i+1];
		bool match=false, miss=false;
		while(i<=n)
			if(a[i]==i)
				i++;
			else
				break;
		while(n>0)
			if(a[n]==n)
				n--;
			else
				break;
		for(;i<=n;i++)
			if(a[i]==i)	match=true;
			else miss=true;
		if(match && miss)	cout<<"2\n";
		else if(miss)		cout<<"1\n";
		else	cout<<"0\n";
	}	
return 0;	
}