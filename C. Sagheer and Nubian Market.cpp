#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
ll getsum(int n){
	if(n<=0)	return 0;
	ll temp = n*(n+1);
	return temp/2;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	ll n,s;
	cin>>n>>s;
	int a[n+1];
	f(n)	cin>>a[i+1];
	sort(a+1,a+n+1);
	ll cost=INT_MAX , cnt=0,temp=0,pre=1;
	for(int i=1;i<=n;i++){
		while(pre<i && temp+a[i]+i*(i-pre)+getsum(i)-getsum(pre-1)>s ){
				temp-=a[pre]+pre*(i-pre-1) + getsum(i-1)-getsum(pre-1);
				pre++;
				
		}

		if(temp+a[i]+i*(i-pre)+getsum(i)-getsum(pre-1)<=s){
			temp+=a[i]+i*(i-pre)+getsum(i)-getsum(pre-1);
			if((temp<cost && cnt==i-pre+1)|| (cnt<i-pre+1)){
			cost = temp;
			cnt = i-pre+1;
			}
		}	
	}
	if(cnt==0)	cost=0;
	cout<<cnt<<" "<<cost<<"\n";
return 0;	
}