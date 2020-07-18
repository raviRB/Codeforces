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
	 faster
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		int ans[s.size()]={0};
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='(' && st.empty())
				ans[i]=-1;
			else if(s[i]==')'){
				st.push(i);
				ans[i]=-1;
				if(i!=s.size()-1)
					ans[i]=ans[i+1];
			}
			else{
				ans[i]=st.top();
				st.pop();
			}
		}
		//f(s.size())	cout<<ans[i]<<" ";
		int q=0,ti;
		cin>>q;
		while(q--){
			cin>>ti;
			if(ans[ti-1]==-1)	cout<<"-1\n";
			else 	cout<<ans[ti-1]+1<<"\n";
		}
	}
return 0;	
}