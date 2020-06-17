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
		int n,k;
		cin>>n>>k;
		int a[n];
		ll sum=0,sum1;
		f(n){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%k){
			cout<<n<<"\n";
			continue;
		}
		sum1=sum;
		int ans=0,left,right,i;
		for( i=0;i<n;i++)
			if((sum-a[i])%k)
				break;
			else
				sum-=a[i];
		left = n-i-1;
		for( i=n-1;i>=0;i--)
			if((sum1-a[i])%k)
				break;
			else
				sum1-=a[i];
		right = i;
		if(!left && !right)	cout<<"-1\n";
		else cout<<max(left,right)<<"\n";
	}	
return 0;	
}