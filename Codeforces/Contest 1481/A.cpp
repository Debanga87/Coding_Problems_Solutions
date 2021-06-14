#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

bool isPlanet(string s,ll x,ll y){
	int l=0,r=0,u=0,d=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='L')l++;
		else if(s[i]=='R')r++;
		else if(s[i]=='U')u++;
		else d++;
	}
	if(x>0 && r>=x)x=0;
	else if(x<0 && l>=-x)x=0;
	if(y>0 && u>=y)y=0;
	else if(y<0 && d>=-y)y=0;
	return ((!x && !y)?1:0);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll px,py;
		cin>>px>>py;
		string s;
		cin>>s;
		if(isPlanet(s,px,py)){
			cout<<"YES\n";
		}else
			cout<<"NO\n";
	}
	return 0;
}

