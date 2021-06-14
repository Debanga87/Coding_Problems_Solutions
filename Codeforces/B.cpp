#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

bool Solve(long long n){
	if(n%2020==0){
		return 1;
	}else if(n%2021==0){
		return 1;
	}else{
		for(int i=1;i*2021<n;i++){
			for(int j=1;j*2020<n;j++){
				if(i*2021+j*2020==n){
					return 1;
				}
			}
		}
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(Solve(n)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

	return 0;
}

