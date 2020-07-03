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
	int n,k,a,b,c;
	cin>>n>>k;
	vector<int> both,alice,bob;
	f(n){
		cin>>a>>b>>c;
		if(b && c)
			both.pb(a);
		else if (b)
			alice.pb(a);
		else if(c)
			bob.pb(a);
	}	
	sort(both.begin(),both.end());
	sort(alice.begin(),alice.end());
	sort(bob.begin(),bob.end());
	a=k,b=k;
	ll ans=0,i=0,j=0;
	k=0;
	if(both.size()+alice.size() < a || both.size()+bob.size() < b){
		cout<<"-1\n";
		return 0;
	}
	/*cout<<both.size()<<"\n";
	cout<<alice.size()<<"\n";
	cout<<bob.size()<<"\n";*/
	while(a>0 || b>0){
		if(i<both.size() && j<alice.size() && k<bob.size() && both[i]<=(alice[j]+bob[k])){
			a--;
			b--;
			ans+=both[i];
			i++;
		}
		else if(i<both.size() && j<alice.size() && k<bob.size() && both[i]>(alice[j]+bob[k])){
				ans+=bob[k];
				k++;
				ans+=alice[j];
				j++;
				a--;
				b--;
		}
		else if (j<alice.size() && k<bob.size()){
				ans+=bob[k];
				k++;
				ans+=alice[j];
				j++;
				a--;
				b--;
		}
		else{
			a--;
			b--;
			ans+=both[i];
			i++;
		}

	}	
	cout<<ans<<"\n";
return 0;	
}