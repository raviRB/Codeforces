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
	int a,b,c,d,lcm,t,n,gcd;
	cin>>a>>b>>c>>d;
	if(c>=d){
		lcm = (a*c)/__gcd(a,c);
		t = lcm/a;
		a*=t;
		b*=t;
		t = lcm/c;
		c*=t;
		d*=t;
		n=abs(b-d);
		gcd = __gcd(n,max(d,b));
		cout<<n/gcd<<"/"<<max(d,b)/gcd<<"\n";
	}
	else{
		lcm = (b*d)/__gcd(b,d);
		t = lcm/b;
		a*=t;
		b*=t;
		t = lcm/d;
		c*=t;
		d*=t;
		n=abs(a-c);
		gcd = __gcd(n,max(a,c));
		cout<<n/gcd<<"/"<<max(a,c)/gcd<<"\n";
	}
return 0;	
}