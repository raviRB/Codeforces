#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool isLucky(int n){
	while(n){
		if(n%10!=4 && n%10!=7)
			return false;
		n/=10;
	}
	return true;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	 faster
	int n,i;
	cin>>n;
	std::vector<int> lucky;
	for( i=1;i<=n;i++)
		if(isLucky(i) && n%i==0){
			cout<<"YES\n";
			break;
		}
	if(i>n)
		cout<<"NO\n";
	//cout<<i<<"\n";		

return 0;	
}