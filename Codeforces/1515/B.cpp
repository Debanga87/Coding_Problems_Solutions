#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

bool isSquare(int x){
	int y=sqrt(x);
	return y*y==x;
}

void testcases(){
	ll n;
	cin>>n;
	/*if(n%2==0 && isSquare(n/2)){
		cout<<"YES\n";
	}else if(n%4==0 && isSquare(n/4)){				//why explicitly check for 4?->saves time!
		cout<<"YES\n";
	}else	
		cout<<"NO\n";
	*/
	while(n){
		if(n%2==0){
			if(isSquare(n/2)){
				cout<<"YES\n";
				return;
			}else
				n/=2;
		}else
			break;
	}
	cout<<"NO\n";
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

