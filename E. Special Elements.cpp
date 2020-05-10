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
		int n,ans=0,temp=0;
		cin>>n;
		int a[n],hash[n+1]={0};
		f(n){
			cin>>a[i];
			hash[a[i]]++;
		}
		for(int i=0;i<n;i++){
			temp=a[i];
			for(int j=i+1;j<n;j++){
				temp+=a[j];
				if(temp>n)
					break;
				ans+=hash[temp];
				hash[temp]=0;
			}
		}
		cout<<ans<<"\n";
	}	
return 0;	
}