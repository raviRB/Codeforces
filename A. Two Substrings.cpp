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
	string s;
	cin>>s;
	int bab=0,ab=0,aba=0,ba=0,n = s.size();	
	for(int i=0;i<n;i++){
		if(i+2<n && s[i]=='A' && s[i+1]=='B' && s[i+2]=='A'){
			aba++;
			i+=2;
		}
		else if(i+2<n && s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'){
			bab++;
			i+=2;
		}
		else if(i+1<n && s[i]=='A' && s[i+1]=='B'){
			ab++;
			i++;
		}
		else if(i+1<n && s[i]=='B' && s[i+1]=='A'){
			ba++;
			i++;
		}
	}
	if((ab && ba) || (aba && (ab || ba)) || (bab && (ab || ba)) || (aba && bab) || aba>1 || bab>1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
return 0;	
}