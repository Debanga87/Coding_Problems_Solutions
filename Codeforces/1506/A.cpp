#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,m,x;
	cin>>n>>m>>x;
	x--;
	ll row=x%n;
	ll col=x/n;
	cout<<row*m+col+1<<'\n';
}

int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
