#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		while(n%2==0){
			n/=2;
		}
		if(n==1){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}

	return 0;
}

