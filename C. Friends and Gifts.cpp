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
	int n;
	cin>>n;
	int a[n+1],hash[n+1]={0},temp;
	std::vector<int> notgetting,empty;
	f(n){
		cin>>a[i+1];
		hash[a[i+1]]=1;
		if(!a[i+1])
			empty.pb(i+1);
	}	
	for (int i = 1; i <= n; ++i)
		if(!hash[i])
			notgetting.pb(i);
	sort(notgetting.begin(),notgetting.end());
	f(notgetting.size())
		if(notgetting[i]==empty[i]){
			if(i>0){
				temp = notgetting[i];
				notgetting[i] = notgetting[i-1];
				notgetting[i-1] = temp;
			}
			else{
				temp = notgetting[i];
				notgetting[i] = notgetting[i+1];
				notgetting[i+1] = temp;
			}
		}
	f(notgetting.size())	a[empty[i]]=notgetting[i];
	f(n)	cout<<a[i+1]<<" ";
	cout<<"\n";	
return 0;	
}