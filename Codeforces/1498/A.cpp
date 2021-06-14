#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

ll gcd(ll a,ll b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

ll sum(ll x){
	ll ans=0;
	while(x){
		ans+=x%10;
		x/=10;
	}
	return ans;
}

void testcases(){
	ll y;
	cin>>y;
	//gcdsum(x)=gcd(x,sum of digits of x)
	while(1){
		if(gcd(y,sum(y))>1){
			cout<<y<<'\n';
			break;
		}else{
			y++;
		}
	}
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

