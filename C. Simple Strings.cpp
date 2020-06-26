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
	string s;
	cin>>s;
	int i=0,j=0,count;
	char c='a';
	while(i<s.size()){
		j=i+1;
		count=1;
		while(j<s.size() && s[j]==s[i]){
			count++;
			j++;
		}
		while(c==s[i] || (i>0 && c==s[i-1]))
			if(c=='z')	c='a';
			else	c++;
		if(count!=1)
			if(count%2==0){
				for(int k=i;k<i+count;k+=2)
					s[k]=c;
			}
			else{
				for(int k=i+1;k<i+count;k+=2)
					s[k]=c;
			}
		i=j;
	}	
	cout<<s<<"\n";
return 0;	
}