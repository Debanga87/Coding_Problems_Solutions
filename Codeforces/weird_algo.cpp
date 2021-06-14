#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	*/
	ll n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(n%2==1){
			n=n*3+1;
			cout<<n<<' ';
		}else{
			n/=2;
			cout<<n<<' ';
		}
	}
	cout<<"\n";
	return 0;
}

