#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

const ll mod=1e9+7;
ll dp[1005][1005];

ll f(ll fwd,ll bwd,ll k){				//fwd planes, bwd planes
	if(k==1||fwd==0){
		return dp[fwd][k]=1;
	}
	if(dp[fwd][k]!=-1){
		return dp[fwd][k];
	}
	return dp[fwd][k]=(f(fwd-1,bwd+1,k)+f(bwd,fwd,k-1))%mod;
}

void testcases(){
	ll n,k;
	cin>>n>>k;
	memset(dp,-1,sizeof dp);
	cout<<f(n,0,k)-1<<'\n';			//0-> No of backward planes
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}

