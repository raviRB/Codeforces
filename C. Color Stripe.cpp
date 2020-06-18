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
	int n,k,ans=0;
	cin>>n>>k;
	string s;
	cin>>s;
	int i=0,count=0,start=0;
	char c=s[0] , r='A';
	while(i<s.size()){
		r='A';
		if(s[i]!=c){
			count=1;
			c=s[i];
			start=i;
			i++;
			continue;
		}
		while(i<s.size() && s[i]==c){
			count++;
			i++;
		}
		if(count>1){
			if(count%2==0 && s[i-1]=='A' &&s[i]=='B'){
				for(int j=start;j<i;j+=2){
				while(r==s[j] || (j+1<s.size() && r==s[j+1]))
					r++;
				s[j]=r;
				ans++;
			}
			}
			else{
				for(int j=start+1;j<i;j+=2){
				while(r==s[j] || (j+1<s.size() && r==s[j+1]))
					r++;
				s[j]=r;
				ans++;
			}
			}
		}
		
	}
	cout<<ans<<"\n";
	cout<<s<<"\n";
return 0;	
}