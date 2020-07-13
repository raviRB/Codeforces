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
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		int flag=0,neigh,cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				neigh=0;
				
				if(i>0 )	neigh++;
				if(i<n-1 )	neigh++;
				if(j>0 )	neigh++;
				if(j<m-1 )	neigh++;
				if(a[i][j]>neigh){
					flag=1;
					break;
				}

					a[i][j]=neigh;
			}
			if(flag)	break;
		}
		if(flag)	cout<<"NO\n";
		else{
			cout<<"YES\n";
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++)
					cout<<a[i][j]<<" ";
				cout<<"\n";
			}

		}
	}
return 0;	
}