#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,u,r,d,l;
		cin>>n>>u>>r>>d>>l;
		if(u>n || r>n || l>n || d>n){
			cout<<"No\n";
			continue;
		}
		if(u+r+l+d<=4*n)
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

