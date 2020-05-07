#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long 
#define f(j) for(ll i=0;i<j;i++)
#define pb(i) push_back(i)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;    
typedef vector<vector<long long> > matrix; 
bool is_sorted(int *a,int n){
	
	for(int i=1;i<n;i++)
		if(a[i]<a[i-1])
			return false;
	return true;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// faster
	int n;
	cin>>n;
	int a[n];
	f(n)	cin>>a[i];	
	int count=0,start=0,end=0,i=1;
	while(i<n){
		if(a[i]<a[i-1]){
			count++;
			start = i-1;
			i++;
			while(i<n && a[i]<a[i-1])
				i++;
			end = i-1;
		}
		else
			i++;
	}
	/*cout<<count<<"\n";
	cout<<start<<" "<<end<<"\n";*/
	if(count>1)
		cout<<"no\n";
	else{
		reverse(a+start,a+end+1);
		if(is_sorted(a,n)){
		cout<<"yes\n";
		cout<<start+1<<" "<<end+1<<"\n";
	}
	else
		cout<<"no\n";
	}
return 0;	
}