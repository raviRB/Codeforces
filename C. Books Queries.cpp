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
	 faster
	int q,id;
	cin>>q;
	int hash[200001]={0},left=0,right=1;
	char c;
	while(q--){
		cin>>c>>id;
		if(c=='L'){
			hash[id]=left;
			left--;
		}
		else if(c=='R'){
			hash[id]=right;
			right++;
		}
		else{
			cout<<min(hash[id]-left , right - hash[id]) -1<<"\n";
		}
	}	
return 0;	
}