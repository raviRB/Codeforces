#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int temp[100001]={0},cnt[100001]={0},i,j;
int dp[6][100001];
void fillDp(int k){
	for(i=2;i<100001;i++){
		if(cnt[i]==k)
			dp[k][i]=dp[k][i-1] + 1;
		else
			dp[k][i]=dp[k][i-1]; 
	}
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	 faster
	int t;
	cin>>t;
	for(i=2;i<100001;i++)
		if(!temp[i]){
			j = i;
			while(j<100001){
				cnt[j]++;
				temp[j]++;
				j+=i;
			}
		}
	fillDp(1);
	fillDp(2);
	fillDp(3);
	fillDp(4);
	fillDp(5);
	while(t--){
		int a,b,k;
		cin>>a>>b>>k;
		cout<<dp[k][b]-dp[k][a-1] <<"\n";
	}	
return 0;	
}