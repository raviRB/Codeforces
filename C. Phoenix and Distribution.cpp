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
		int n,k,flag=0;
		cin>>n>>k;
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		//cout<<s;
		if(s[0]!=s[k-1]){
			cout<<s[k-1];
			 cout<<"\n";
			continue;
		}
		cout<<s[0];
		if(s[k]==s[n-1]){
			int i=k;
			while(i<n){
				cout<<s[i];
				i+=k;
			}
		}
		else{
			int i=k;
			while(i<n){
				cout<<s[i];
				i++;
			}
		}
		cout<<"\n";
	}	
return 0;	
}