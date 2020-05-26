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
	int n,k;
	cin>>n>>k;
	int b[n],ans=0; 
	f(n)	cin>>b[i];
	int a[n];
	f(n)	cin>>a[i];
	int possible=INT_MAX;
	set< pair<int,int> > p; // no. of cookies , index
	set< pair<int,int> >::iterator it; 
	f(n){
			possible = min(possible,a[i]/b[i]);
			p.insert(make_pair(a[i]/b[i],i));
	}
	ans+=possible;
	//cout<<ans<<"\n";
	int count =possible+1,flag=0;
	while(k){
		for(it = p.begin();it!=p.end();it++){
			//cout<<it->first<<"  it\n";
			if(it->first>=count)
				break;
			else{
				int temp = b[it->second] * count;
				if(temp-a[it->second] <= k){
					a[it->second] = temp;
					k=k-(temp-a[it->second]);
					p.insert(make_pair(count,it->second));
					p.erase(it);
				}
				else{
					flag=1;
					break;
				}
			}
		}
			if(flag)
				break;
			ans++;
			count++;
	}
	cout<<ans<<"\n";
return 0;	
}