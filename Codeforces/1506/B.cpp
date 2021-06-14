#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

void solve(){
	int n,k;
	string s;
	cin>>n>>k>>s;
	int i,res=1;
	for(i=0;i<n;i++)
		if(s[i]=='*')
			break;
	while(1){
		int j=min(i+k,n-1);
		for(;i<j && s[j]=='.';j--){}
		if(i==j)
			break;
		res++;
		i=j;
	}
	cout<<res<<'\n';
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
    }
	return 0;
}

