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
	int a,b,flag=0,num=1;
	cin>>a>>b;
	while(1){
		if(!flag){
			a-=num;
			if(a<0){
				cout<<"Vladik\n";
				break;
			}
			num++;
			flag=1;
		}
		if(flag){
			b-=num;
			if(b<0){
				cout<<"Valera\n";
				break;
			}
			num++;
			flag=0;
		}
	}	
return 0;	
}