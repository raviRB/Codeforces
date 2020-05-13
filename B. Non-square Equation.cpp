#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
int digits(ll num){
	int ans=0;
	while(num){
		ans+=num%10;
		num/=10;
	}
	return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	ll n;
	cin>>n;	
	ll x = sqrt(n);
	ll temp =(x*x+ digits(x)*x);
	int count=0;
	while(temp!=n && count<=2000 && x>0){
		x--;
		temp =(x*x+ digits(x)*x);
		count++;
		
	}
	if(temp==n)
		cout<<x<<"\n";
	else
		cout<<"-1\n";
	
return 0;	
}
