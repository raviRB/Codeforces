#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool check(ll num , ll k){
		ll v=0,p=0,temp=num;
		while(temp!=0){
			if(temp<=k){
				v+=temp;
				temp=0;
			}
			else{
			v+=k;
			temp-=k;	
			}
			p+=temp/10;
			temp-=temp/10;
		}
		if(v>=(num+1)/2)
			return true;
		return false;	
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	ll num;
	cin>>num;
	ll mid,start=1,end=num,ans=num;
	while(start<=end){
		mid = start+(end-start)/2;
		if(check(num,mid)){
			ans = min(ans,mid);
			end = mid-1;
		}
		else
			start = mid +1;
	}
	cout<<ans<<"\n";
	
return 0;	
}

