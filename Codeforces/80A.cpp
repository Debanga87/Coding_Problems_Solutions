#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

bool isPrime(int p){
	for(int j=2;j*j<=p;j++){
		if(p%j==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int i=n+1;
	
	while(!isPrime(i)){
		i++;
	}
	if(i==m){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

