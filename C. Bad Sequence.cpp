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
	int n,open=0,close=0;
	cin>>n;
	string str;
	cin>>str;
	if(n%2==0){
		stack<char> s;
		for(int i=0;i<str.size();i++)
			if(str[i]=='(')
				s.push('(');
			else if(str[i]==')' && !s.empty() && s.top()=='(')
				s.pop();
			else
				close++;
		open=s.size();
		if(open<=1 && close<=1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}	
	else
		cout<<"No\n";
return 0;	
}