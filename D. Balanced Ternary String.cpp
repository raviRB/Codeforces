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
	string s;
	cin>>s;
	int c0=0,c1=0,c2=0;
	f(s.size())	
		if(s[i]=='0')	c0++;
		else if (s[i]=='1')		c1++;
		else	c2++;
	int i=0;
	while(c0<n/3){
		if(s[i]!='0'){
			if(s[i]=='1' && c1>n/3){
				c1--;
				s[i]='0';
				c0++;
			}
			else if(s[i]=='2' && c2>n/3){
				c2--;
				s[i]='0';
				c0++;	
			}
		}
		i++;
	}
	i=s.size()-1;
	while(c2<n/3){
		if(s[i]!='2'){
			if(s[i]=='1' && c1>n/3){
				c1--;
				s[i]='2';
				c2++;
			}
			else if(s[i]=='0' && c0>n/3){
				c0--;
				s[i]='2';
				c2++;	
			}
		}
		i--;
	}
	i=0;
	while(c2>n/3){
		if(s[i]=='2'){
			c2--;
			s[i]='1';
			c1++;
		}
		i++;
	}
	i=s.size()-1;
	while(c0>n/3){
		if(s[i]=='0'){
			c0--;
			s[i]='1';
			c1++;
		}
		i--;
	}
	cout<<s<<"\n";
return 0;	
}