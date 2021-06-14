#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	ll n;
	cin>>n;
	if(n%2050!=0){
		cout<<-1<<'\n';
		return;
	}
	ll ans=0,q=n/2050;
	while(q){
		int r=q%10;
		q/=10;
		ans+=r;
	}
	cout<<ans<<'\n';
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	*/
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}

