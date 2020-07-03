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
	int n;
	cin>>n;
	int q[n-1],ans[n],val=INT_MAX;
	f(n-1)	cin>>q[i];
	ans[0] =0;
	for(int i=1;i<n;i++)
		ans[i] = ans[i-1] + q[i-1];
	f(n)	val = min(val,ans[i]);
	//cout<<val<<"\n";
	if(val<-(n-1)){
		cout<<"-1\n";
		return 0;
	}
	val = abs(val)+1;
	f(n) ans[i]+=val;
	int hash[n+1]={0},flag=0,i=0;
	for(i=0;i<n;i++){
		//cout<<ans[i]<<"\n";
		if(ans[i]>n || hash[ans[i]])
			break;
		hash[ans[i]]++;
	}
	if(i==n){
		for(int j:ans)	cout<<j<<" ";
			cout<<"\n";
	}
	else
		cout<<"-1\n";
return 0;	
}