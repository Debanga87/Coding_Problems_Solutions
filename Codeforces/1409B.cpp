#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		ll ans=1e18;				//INT_MIN < 1e18
		for(int i=0;i<2;i++){			//O(C) 
			ll da=min(n,a-x);
			ll db=min(n-da,b-y);
			ans=min(ans,(a-da)*(b-db));
			swap(a,b);
			swap(x,y);
		}
		cout<<ans<<'\n';
	}
	return 0;
}

