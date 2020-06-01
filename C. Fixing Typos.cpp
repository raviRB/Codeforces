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
	int i=0,flag=0,count;
	char c;
	while(i<s.size()){
		c = s[i];
		count=0;
		while(i<s.size() && s[i]==c){
			i++;
			count++;
		}
		if(count>2 && !flag){
			cout<<c<<c;
			flag=1;
		}
		else if(count>2 && flag){
			cout<<c;
			flag=0;
		}
		else if(count==2 && flag){
			cout<<c;
			flag=0;
		}
		else if(count==2 && !flag){
			cout<<c<<c;
			flag=1;
		}
		else{
			cout<<c;
			flag=0;
		}
	}	
	cout<<"\n";
return 0;	
}