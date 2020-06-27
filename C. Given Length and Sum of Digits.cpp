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
	int m,s; // m digits and s sum
	cin>>m>>s;
	std::vector<int> largest,smallest;
	int temp =s,temp1=m;
	if(s==0 && m>1){
		cout<<"-1 -1\n";
		return 0;
	}
	int curr=1;
	for(int i=1;i<=m;i++){
		if(s==0){
			smallest.pb(0);
			continue;
		}
		while(9*(m-i)+curr<s && curr<9)
			curr++;
		smallest.pb(curr);
		s-=curr;
		curr=0;
	}
	if(s!=0)
		cout<<"-1 ";
	else{
		for(int i:smallest)	cout<<i;
			cout<<" ";
	}
	while(temp1--){
		if(temp>=9){
			largest.pb(9);
			temp-=9;
		}
		else{
			largest.pb(temp);
			temp=0;
		}
	}
	if(temp!=0)
		cout<<"-1\n";
	else	
		for(int i:largest)	cout<<i;
return 0;	
}