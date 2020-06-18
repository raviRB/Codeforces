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
	int a[n],i;
	f(n)	cin>>a[i];
	int hash[100001]={0},length=INT_MAX,start=0,end=0,count=0,left=0;
	for(i=0;i<n;i++){
		hash[a[i]]++;
		if(hash[a[i]]==1)
			count++;
		while(count==k){
			if(length>(i-left)){
				length = i-left;
				start = left;
				end = i;
			}
			hash[a[left]]--;
			if(!hash[a[left]])
				count--;
			left++;
		}
	}	
	if(length!=INT_MAX)
		cout<<start+1<<" "<<end+1<<"\n";
	else
		cout<<"-1 -1\n";
return 0;	
}