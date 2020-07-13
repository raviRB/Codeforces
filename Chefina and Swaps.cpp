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
	ll t,mn=INT_MAX;
	cin>>t;
	while(t--){
		ll n,temp,temp1,temp3,flag=0,cnt;
		cin>>n;
		mn=INT_MAX;
		std::map<ll, ll> A,B;
		std::map<ll, ll>::iterator it ;
		f(n){
			cin>>temp;
			A[temp]++;
			mn = min(temp,mn);
		}
		f(n){
			cin>>temp;
			B[temp]++;
			mn = min(temp,mn);
		}
		std::vector<ll> needA;
		for(it=A.begin();it!=A.end();it++){
			if(flag)	break;
			temp1 = it->first;
			temp = it->second;
			temp3 = B[temp1];
			//cout<<temp<<" "<<temp3<<"\n";
			if(temp!=temp3){
				if(abs(temp-temp3)%2){
					flag=1;
					break;
				}
				cnt = abs(temp - temp3);
				cnt/=2;
				while(cnt--)	needA.pb(temp1);
			}
			B[temp1]=0;
		}
		for(it=B.begin();it!=B.end();it++){
			if(flag)	break;
			temp1 = it->first;
			temp = it->second;
			if(!temp)	continue;
			if(temp%2){
				flag=1;
				break;
			}
			cnt = temp/2;
			while(cnt--)	needA.pb(temp1);
		}
		/*for(int i : needA)	cout<<i<<" ";
			cout<<"\n";*/
		if(flag )	cout<<"-1\n";
		else if(needA.size()==0)	cout<<"0\n";
		else{
			ll j = needA.size()/2 -1;
			sort(needA.begin(),needA.end());
			ll ans=0;
			while(j>=0){
			if(2*mn < needA[j]){
				ans+=2*mn;
			}
			else{
				ans+=needA[j];
			}
			j--;
			}
			cout<<ans<<"\n";
		}
	}	
return 0;	
}