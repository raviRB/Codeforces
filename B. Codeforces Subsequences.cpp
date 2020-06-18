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
	ll k;
	cin>>k;
	string s="codeforces";
	ll temp=1,rep=1;
	while(temp<k){
		rep++;
		temp=pow(rep,10);
	}
	int arr[11]={0};
	f(10)	arr[i]=rep-1;
	for(int i=9;i>=0;i--){
		if(pow(arr[i],i+1)*pow(arr[i+1],10-i-1)>=k)
			break;
		arr[i]++;
	}
	f(10)
		while(arr[i]--)	cout<<s[i];
	cout<<"\n";
return 0;	
}