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
		ll a,b;
		cin>>a>>b;				 
		ll diff=abs(b-a),ans=diff/10;
		if(diff%10==0)cout<<ans<<'\n';
		else cout<<ans+1<<'\n';
	}
	return 0;
}
