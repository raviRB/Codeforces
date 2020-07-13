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
	int n,m;
	cin>>n>>m;
	string s[n];
	f(n)	cin>>s[i];
	int j,ans =0,ok[n]={0},okpre[n]={0};
	f(m){
		for( j=1;j<n;j++)
			if(okpre[j]){
				ok[j]=1;
				continue;
			}
			else if(s[j][i]>s[j-1][i])
				ok[j]=1;
			else if (s[j][i]==s[j-1][i])
				continue;
			else{
				for(int k=0;k<n;k++)	ok[k]=0;
				ans++;
				break;
			}
		//cout<<i<<" "<<j<<"\n";
		if(j==n)
			for(int k=0;k<n;k++)	okpre[k]=ok[k];
	}	
	cout<<ans<<"\n";
return 0;	
}