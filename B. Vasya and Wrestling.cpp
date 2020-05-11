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
	int n,temp;
	cin>>n;
	std::vector<int> first,second;
	ll ftotal=0,stotal=0,last;
	f(n){
		cin>>temp;
		if(temp>0){
			first.pb(temp);
			last=0;
			ftotal+=temp;
		}
		else{
			second.pb(-temp);
			last=1;
			stotal+=(-temp);
		}
	}
	if(ftotal>stotal)
		cout<<"first\n";
	else if(stotal>ftotal)
		cout<<"second\n";
	else{
		int i=0;
		while(i<first.size() && i<second.size()){
			if(first[i]!=second[i])
				break;
			i++;
		}
		if(i<first.size() && i<second.size()){
			if(first[i]>second[i])
				cout<<"first\n";
			else
				cout<<"second\n";
		}
		else if(first.size()>second.size())
			cout<<"first\n";
		else if(first.size()<second.size())
			cout<<"second\n";
		else{
			if(last)
				cout<<"second\n";
			else
				cout<<"first\n";
		}
	}	
return 0;	
}