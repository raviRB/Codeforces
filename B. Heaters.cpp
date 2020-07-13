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
	int i,n,r,temp,ans=0,ons=0;
	cin>>n>>r;
	int a[n],hash[n]={0};
	f(n)	cin>>a[i];
	f(n)
		if(a[i]){
			ons++;
			temp=max((ll)0,i-r+1);
			hash[temp]++;
			temp = i+r;
			if(temp<=n-1)
				hash[temp]--;
		}
	for(i=1;i<n;i++){
		hash[i] += hash[i-1];
		if(!hash[i])
			break;
	}
	if(i!=n || !ons || !hash[0]){
		cout<<"-1\n";
		return 0;
	}
	int temp2,cnt,j;
	f(n)
		if(a[i]){
			temp=max((ll)0,i-r+1);
			temp2 = min((ll)n-1,i+r-1);
			cnt=INT_MAX;
			for(j=temp;j<=temp2;j++)
				cnt = min(cnt,hash[j]);
			if(cnt>1){
				for(j=temp;j<=temp2;j++)	hash[j]--;
				ons--;
			}	
		}
	cout<<ons<<"\n";
return 0;	
}