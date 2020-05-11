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
	int n;
	cin>>n;
	int A[n],G[n];
	f(n)	cin>>A[i]>>G[i];
	string ans="";
	ll atotal=0,gtotal=0;
	f(n){
		if(atotal<gtotal && abs(atotal+A[i]-gtotal)<=500)
			{atotal+=A[i];ans+='A';}
		else if(atotal>gtotal && abs(gtotal+G[i]-atotal)<=500)
			{gtotal+=G[i];ans+='G';}
		else if(abs(atotal+A[i]-gtotal)<abs(gtotal+G[i]-atotal))
			{atotal+=A[i];ans+='A';}
		else
			{gtotal+=G[i];ans+='G';}
	}
	if(abs(atotal-gtotal)>500)
		cout<<"-1\n";
	else
		cout<<ans<<"\n";	
return 0;	
}