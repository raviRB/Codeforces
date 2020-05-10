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
	int i;
	char temp;
	string digits;
	cin>>digits;
		temp = digits[digits.size()-1];
		int last=digits.size()-1;
		for( i=0;i<digits.size();i++)
			if((digits[i])<temp && (digits[i])%2==0){
				last =i;
				break;
			}
			else if((digits[i]-'0')%2==0)
				last=i;
		i = last;
		if(i==(digits.size()-1)){
			cout<<"-1\n";
			return 0;
		}
		digits[digits.size()-1]=digits[i];
		digits[i]=temp;
		
		for(i=0;i<digits.size();i++)
			cout<<digits[i];
		cout<<"\n";
return 0;	
}