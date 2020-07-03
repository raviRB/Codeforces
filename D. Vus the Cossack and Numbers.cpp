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
	int n,temp1;
	cin>>n;
	int a[n],hash[n]={0};
	ll neg=0,pos=0;
	double temp;
	f(n){
		scanf("%lf",&temp);
		if(temp<0){
			hash[i]=1;
			temp1 = ceil(temp);
			neg+=abs(temp1);
		}
		else{
			temp1 = floor(temp);
			pos+=temp1;
		}
		if(!(temp-temp1))	hash[i]=-1;
		a[i]=temp1;
		//cout<<hash[i]<<"\n";
	}
	//cout<<neg<<" "<<pos<<"\n";
	if(neg>pos){
		ll temp = neg-pos;
		f(n){
			if(temp==0)	break;
			if(hash[i] || hash[i]==-1)	continue;
			a[i]++;
			temp--;
		}

	}
	else{
		ll temp = pos-neg;
		f(n){
			//cout<<a[i]<<" "<<hash[i]<<" \n";
			if(temp==0)	break;
			if(!hash[i] || hash[i]==-1)	continue;
			a[i]--;
			temp--;

		}	
	}	
	for(int i:a)	cout<<i<<" ";
	cout<<"\n";
return 0;	
}