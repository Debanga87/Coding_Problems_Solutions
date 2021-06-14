#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

bool isPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

void solve(int d){
	int x=d+1,ans1=0,ans2=0;
	while(1){
		if(isPrime(x)){
			ans1=x;
			break;
		}
		x++;
	}
	x+=d;
	while(1){
		if(isPrime(x)){
			ans2=x;
			break;
		}
		x++;
	}
	cout<<ans1*ans2;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int d;
		cin>>d;
		solve(d);
		cout<<'\n';
	}
	return 0;
}

