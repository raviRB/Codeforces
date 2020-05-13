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
	int sum,limit,temp;
	cin>>sum>>limit;
	std::map<ll, int> m;
	std::map<ll, int>::iterator it;
	while(sum){
		temp =0;
		while(pow(2,temp+1)<=limit && pow(2,temp+1)<=sum)
			temp++;
		ll val=pow(2,temp),val2;
		cout<<sum<<"\n";
		val2=val;
		if(m.find(val)!=m.end()){
			while(m.find(val)!=m.end() && (val+pow(2,temp+1))<=limit){
				val+=pow(2,++temp);
			}
		}
		if(m.find(val)==m.end()){
			m[val]++;
			sum-=val2;
		}
		else{
			cout<<"-1\n";
			return 0;
		}
	}	
	cout<<m.size()<<"\n";
	for(it = m.begin();it!=m.end();it++)
		cout<<it->first<<" ";
	cout<<"\n";
return 0;	
}