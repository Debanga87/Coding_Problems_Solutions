#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*
	h hours,  m min
	
	*/
	int t;
	cin>>t;
	t*=2;
	while(t--){
		int h,m;
		cin>>h>>m;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]!='3' || s[i]!='4' || s[i]!='6' || s[i]!='7' || s[i]!='9'){
				cout<<"garbage\n";
			}else{
				cout<<s<<'\n';
			}
		}
	}
	return 0;
}

