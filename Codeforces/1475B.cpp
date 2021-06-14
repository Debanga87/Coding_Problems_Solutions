#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair


int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int q=n/2020;
		int r=n%2020;
		if(q>=r)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

