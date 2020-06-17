
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
		int n,m,num=0;
		cin>>n>>m;
		int a[n][m],row[n]={0},col[m]={0};
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]){
					row[i]++;
					col[j]++;
				}
			}
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				if(!row[i] && !col[j]){
					num++;
					row[i]=1;
					col[j]=1;
				}
			}
		//cout<<num<<"\n";
		if(num%2)
			cout<<"Ashish\n";
		else
			cout<<"Vivek\n";
	}	
return 0;	
}