#include <bits/stdc++.h>
#define mod 1000000007
#define ll unsigned long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 

ll fact(int n){
	if(n==0)	return 1;
	if(n<=2)
		return n;
	else
		return n*fact(n-1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n;
	cin>>n;
	ll ans=0,temp1,temp2,temp3 ;
	temp1 = fact(5);
	temp2=1;
	for(int i=n-5+1;i<=n;i++){
		temp2*=i;
		temp3 = __gcd(temp2,temp1);
		temp2/=temp3;
		temp1/=temp3;
	}
	ans+=(temp2/temp1);
	temp1 = fact(6);
	temp2=1;
	for(int i=n-6+1;i<=n;i++){
		temp2*=i;
		temp3 = __gcd(temp2,temp1);
		temp2/=temp3;
		temp1/=temp3;
	}
	ans+=(temp2/temp1);
	temp1 = fact(7);
	temp2=1;
	for(int i=n-7+1;i<=n;i++){
		temp2*=i;
		temp3 = __gcd(temp2,temp1);
		temp2/=temp3;
		temp1/=temp3;
	}
	ans+=(temp2/temp1);
	cout<<ans<<"\n";
return 0;	
}