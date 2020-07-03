#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool compare(pair<int,int> a,pair<int,int> b){
	if(abs(a.first)<abs(b.first))	return true;
	if(abs(a.first)>abs(b.first))	return false;
	return true;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int num,temp;
	cin>>num;
	int a[num];
	f(num){
		cin>>a[i];
		if(a[i]>=0) a[i] = -a[i]-1;
	}
	if(num%2){ // find smallest and change it to positive
		int index =0;
		f(num)	if(abs(a[i])>abs(a[index]))	index = i;
		a[index] = -a[index]-1;
	}
	for(int i:a)	cout<<i<<" ";
		cout<<"\n";
return 0;	
}